
#include "pch.h"
#include "LoggerApp.h"


void LoggerApp::img_grab() {
	
	VideoCapture cap(CameraID);

	bool readStatus = 0, writeStatus = 0;

	while (!IsImageCaptured) {
		try {
			readStatus = cap.read(CameraImage);

			if (readStatus == true) {
				writeStatus = imwrite(CapturedImageDir, CameraImage);
			}
			else {
				IsImageCaptured = true;
				System::Windows::Forms::MessageBox::Show("Set the CAMERA DEVICE Correctly");
			}

			//if (writeStatus == true)
			//	imshow(CapturedImageDir, CameraImage);

			waitKey(1);
		}
		catch (exception e) {
			// Image grab Error..
			System::Windows::Forms::MessageBox::Show("Image Capture Error!!!");
		}
	}
}

bool LoggerApp::log_write() {

	try {
		fstream logFile;
		time_t now = time(0);

		// convert now to string form
		char* dt = ctime(&now);
		// convert now to tm struct for UTC
		//tm* gmtm = gmtime(&now);
		//dt = asctime(gmtm);
		tm* gmtm = localtime(&now);


		/*Image write in log folder*/

		LogImageDir = ImageSaveDir + "\\" + to_string(gmtm->tm_mday) + "." + to_string(1 + gmtm->tm_mon) + "." + to_string(1900 + gmtm->tm_year) + "__"
			          + to_string(gmtm->tm_hour) + "." + to_string(gmtm->tm_min) + "." + to_string(gmtm->tm_sec) + ".jpg";
		
		TodayDate = to_string(gmtm->tm_mday) + "." + to_string(1 + gmtm->tm_mon) + "." + to_string(1900 + gmtm->tm_year);
		
		Mat img = imread(CapturedImageDir);
		
		if (img.empty()) {
			System::Windows::Forms::MessageBox::Show("Image is not found in Path...");
		}

		imwrite(LogImageDir, img);

		/*******************************************/


		logFile.open(LogDir,ios::app);
		logFile << "1,"<< TodayDate<<", part details,"<< LogImageDir << endl;

		logFile.close();
	}
	catch (exception e) {
		//Log Error...
		System::Windows::Forms::MessageBox::Show("Log Writting Error!!!");
	}

	return true;
}

void LoggerApp::send_signal(char ON_OFF) {

}

void LoggerApp::thread1() {

}

