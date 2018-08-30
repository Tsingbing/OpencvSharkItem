#ifndef CAMERATHREAD_H
#define CAMERATHREAD_H
#include <QThread>
#include <QImage>
#include <opencv.hpp>
//#include <opencv2/opencv.hpp>
#include <QDateTime>
#include <QFile>
#include <QDir>
#include <windows.h>
#include <IO.H>

#pragma execution_character_set("utf-8")

#define VIDEOWIDTH  1920   //摄像头视频帧宽度
#define VIDEOHEIGHT 1080   //摄像头视频帖高度

class CameraThread : public QThread
{
    Q_OBJECT
public:
    CameraThread(QObject *parent=0);
    CameraThread(const CameraThread &) = delete;
	void connect();	//连接
	void cap();   //截图	

signals:
    void sigImage(QImage&);
    void sigError(QString);

protected:
    void run() override;

private:
    cv::Rect rect;
    QImage toQImage(cv::Mat &);

public:
	int ShowFlag;
};

#endif // CAMERATHREAD_H
