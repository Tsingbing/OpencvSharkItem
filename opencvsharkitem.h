#ifndef OPENCVSHARKITEM_H
#define OPENCVSHARKITEM_H

#include <QQuickItem>
#include <QImage>
#include "camerathread.h"
#include <QSGSimpleTextureNode>
#include <QSGTexture>
#include <QQuickWindow>
//test
class OpencvSharkItem : public QQuickItem
{
	Q_OBJECT
	Q_DISABLE_COPY(OpencvSharkItem)
	Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runngingChanged FINAL) //控制是否运行
	Q_PROPERTY(QImage curFrame READ curFrame WRITE setCurFrame NOTIFY curFrameChanged FINAL)//当前帧
	Q_PROPERTY(QString error READ error NOTIFY errorComing) //错误信息
	Q_PROPERTY(int imageFlag READ imageFlag WRITE setImageFlag NOTIFY imageFlagChanged FINAL)
	Q_PROPERTY(int showFlag READ showFlag WRITE setShowFlag NOTIFY showFlagChanged FINAL)

public:
	OpencvSharkItem(QQuickItem *parent = nullptr);
	~OpencvSharkItem();

	bool running() const;
	void setRunning(bool);
	QImage curFrame() const;
	//QImage curFrame1() const;
	QString error() const;
	int imageFlag() const;
	int showFlag() const;
	void setImageFlag(int flag);
	void setShowFlag(int flag);

protected:
	QSGNode* updatePaintNode(QSGNode *, UpdatePaintNodeData *) override;

private slots:
	void slotError(QString);
	void setCurFrame(QImage&);

signals:
	void runngingChanged();
	void curFrameChanged();
	void errorComing();
	void imageFlagChanged();
	void showFlagChanged();

private:
	bool m_running;
	QImage m_img;
	QImage m_img1;
	QString m_error;
	CameraThread *m_thr;
	QSGNode *m_nodeP;
	int m_imageFlag;
	int m_showFlag;
};

#endif // OPENCVSHARKITEM_H
