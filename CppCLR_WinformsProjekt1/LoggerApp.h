#pragma once

#pragma once
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#include <fstream>


using namespace cv;
using namespace std;

#define WEB_CAM	0
#define CAMERA1	1
#define CAMERA2	2

class LoggerApp {

public:  
	Mat CameraImage,LogImage;

	bool IsImageCaptured, ImageGrapStart, TextBoxLogWrite, IsScanned;

	int count, CameraID = 1000;

	string CapturedImageDir = "C:\\Files\\Grabbed_Image.jpg";
	string ImageSaveDir = "C:\\Files\\WorkersLog\\Images";
	string LogImageDir = "";
	string TodayDate = "";

	string LogDir = "C:\\Files\\WorkersLog\\workersLog.csv";
	
public:
	void img_grab();
	bool log_write();
	void send_signal(char ON_OFF);

	void thread1();

};