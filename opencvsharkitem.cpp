#include "opencvsharkitem.h"

OpencvSharkItem::OpencvSharkItem(QQuickItem *parent):
    QQuickItem(parent)
	, m_imageFlag(0)
{
    // By default, QQuickItem does not draw anything. If you subclass
    // QQuickItem to create a visual item, you will need to uncomment the
    // following line and re-implement updatePaintNode()

    // setFlag(ItemHasContents, true);
	setFlag(Flag::ItemHasContents, true);
	m_thr = new CameraThread(this);
	qRegisterMetaType<QImage>("QImage&");

	connect(m_thr, SIGNAL(sigImage(QImage&)), this, SLOT(setCurFrame(QImage&)));
	connect(m_thr, SIGNAL(sigError(QString)), this, SLOT(slotError(QString)));
}

OpencvSharkItem::~OpencvSharkItem()
{
	m_thr->requestInterruption();
	m_thr->wait();
}

bool OpencvSharkItem::running() const
{
	return m_running;
}

void OpencvSharkItem::setRunning(bool flag)
{
	m_running = flag;
	if (m_running)
		m_thr->start();
	else {
		m_thr->requestInterruption();
		m_thr->wait();
	}
	emit runngingChanged();
}

QImage OpencvSharkItem::curFrame() const
{
	return m_img;
}

QString OpencvSharkItem::error() const
{
	return m_error;
}

int OpencvSharkItem::imageFlag() const
{
	return m_imageFlag;
}

int OpencvSharkItem::showFlag() const
{
	return m_showFlag;
}

void OpencvSharkItem::setImageFlag(int flag)
{
	m_imageFlag = flag;
	emit imageFlagChanged();
}

void OpencvSharkItem::setShowFlag(int flag)
{
	m_showFlag = flag;
	emit imageFlagChanged();
}

QSGNode * OpencvSharkItem::updatePaintNode(QSGNode *oldNode, UpdatePaintNodeData *)
{
	m_thr->ShowFlag = m_showFlag;

	QSGSimpleTextureNode *texture = static_cast<QSGSimpleTextureNode *>(oldNode);
	if (!texture) {
		texture = new QSGSimpleTextureNode();
	}

	if (m_img.isNull()) {
		m_img = QImage(boundingRect().size().toSize(), QImage::Format_RGB888);
	}

	QSGTexture *sgTexture = window()->createTextureFromImage(m_img.scaled(boundingRect().size().toSize()));
	if (sgTexture) {
		QSGTexture *tt = texture->texture();
		if (tt) {
			tt->deleteLater();
		}
		texture->setRect(boundingRect());
		texture->setTexture(sgTexture);
	}
	return texture;
}

void OpencvSharkItem::slotError(QString str)
{
	m_error = str;
	m_thr->quit();
	m_thr->wait();
	emit errorComing();
}

void OpencvSharkItem::setCurFrame(QImage &image)
{
	m_img = image;
	update();
	emit curFrameChanged();
}
