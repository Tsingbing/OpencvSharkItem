#include "camerathread.h"

#include <QDebug>

CameraThread::CameraThread(QObject *parent):
    QThread(parent)
	, ShowFlag(0)
{

}

void CameraThread::run()
{
	cv::VideoCapture capture(0);
        if(!capture.isOpened()){
        emit sigError(QStringLiteral("打开摄像头失败,请检查是否安装摄像头设备"));
		qDebug() << "open fail";
        return;
	}
	else
	{
	}

    capture.set(CV_CAP_PROP_FRAME_WIDTH,VIDEOWIDTH);
    capture.set(CV_CAP_PROP_FRAME_HEIGHT,VIDEOHEIGHT);

    //创建掩码矩阵
    ///cv::Mat frame = cv::Mat::zeros(Size(640,480),CV_8UC3);
	cv::Mat frame;
	cv::Mat dst;
	bool onceRun = true;
	//cv::VideoWriter writer;

	//==============视频信息
	double RATE;//视频帧率
	double WIDTH;//宽
	double HEIGHT;//高
	double COUNT;//帧数量
	bool Video_outputing = false;
	RATE = capture.get(CV_CAP_PROP_FPS);
	WIDTH = capture.get(CV_CAP_PROP_FRAME_WIDTH);
	HEIGHT = capture.get(CV_CAP_PROP_FRAME_HEIGHT);
	COUNT = capture.get(CV_CAP_PROP_FRAME_COUNT);
	/*qDebug() << "the video info: ";
	qDebug() << "Frame rate:" << RATE ;
	qDebug() << "SIZE:" << WIDTH << "X" << HEIGHT ;
	qDebug() << "count:" << COUNT ;*/
	cv::VideoWriter outputVideo;

	char cnum[15];
	int num = 0;//截取视频的数量);
	//初始化
	//capture >> frame;
	//===============================
    while(!isInterruptionRequested()){
        capture >> frame;
		//emit sigImage(toQImage(frame));
		//imshow("frame", frame);
		if (ShowFlag == 2)
		{
			/*imshow("frame",frame);
			double t = (double)cvGetTickCount();
			dehaze.demo(frame, dst);
			double t2 = (double)cvGetTickCount() - t;
			qDebug() << t2 / cvGetTickFrequency() * 1000 << endl;
			imshow("dst1", dst);*/
		}
		if (ShowFlag == 1)
		{
			/*if (onceRun)
			{
				imp.robotTrackInit(capture);
				onceRun = false;
			}
			frame = imp.robotTrackDetect1(frame);*/
			//writer << frame;
		}
		
		//在输出视频
		if (Video_outputing == true)
		{
			outputVideo << frame;
		}
		char c = cvWaitKey(1);
		if (ShowFlag == 1)
		{
			if (Video_outputing == false)//开始输出视频
			{
				num++;
				QDateTime fileTime;
				QString FileName = fileTime.currentDateTime().toString("yyyyMMddhhmm") + ".avi";

				QDir videoDir;
				QString dirPath = videoDir.currentPath();
				videoDir.mkpath(dirPath + "/video");

				QString filePath = dirPath + "/video/" + FileName;
				//sprintf(cnum, "output_%d.avi", num);
				//outputVideo.open(cnum, CV_FOURCC('M', 'J', 'P', 'G'), RATE, cv::Size(WIDTH, HEIGHT));
				outputVideo.open(filePath.toLatin1().data(), CV_FOURCC('D', 'I', 'V', 'X'), 18, cv::Size(WIDTH, HEIGHT));
				
				qDebug() << "Begin to output video from " << capture.get(CV_CAP_PROP_POS_FRAMES) ;

				//cvWaitKey(1000);
				Video_outputing = true;
			}
			else
				qDebug() << "Finish Output at " << capture.get(CV_CAP_PROP_POS_FRAMES);
		}
		
		//保存一段视频
		if (ShowFlag == 2)
		{
			Video_outputing = false;
			//qDebug() << "save ";
			ShowFlag = 0;
		}
		//截图
		if (ShowFlag == 3)
		{
			//截图保存	
			if(num++ == 120)
				num = 0;

			QDateTime fileTime;
			QString FileName = fileTime.currentDateTime().toString("yyyyMMddhhmm") + QString::number(num)+ ".jpeg";
			QDir videoDir;
			QString dirPath = videoDir.currentPath();
			videoDir.mkpath(dirPath + "/pic");
			QString filePath = dirPath + "/pic/" + FileName;
			
			cv::imwrite(filePath.toLatin1().data(), frame);
			qDebug() << "capture ";
			/*cap();*/
			ShowFlag = 0;
		}
		cv::waitKey(1);
		//emit sigImage(toQImage(dst));
		emit sigImage(toQImage(frame));
    }
}

QImage CameraThread::toQImage(cv::Mat & srcFrom)
{
    cv::Mat rgbFrame;
    cvtColor(srcFrom,rgbFrame,CV_BGR2RGB);
    QImage img((const uchar*)rgbFrame.data,rgbFrame.cols,rgbFrame.rows,rgbFrame.step,QImage::Format_RGB888);
    img.bits(); //深拷贝，避免线程退出内存错误
    return img;
}

void CameraThread::connect()
{
	
}

void CameraThread::cap()
{
	
}

