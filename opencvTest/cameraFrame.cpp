#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void main()
{
	VideoCapture stream1(0);
	
	if (!stream1.isOpened())
	{
		cout << "cannot open camera";
	}

	namedWindow("Processing");
	namedWindow("Origin");

	//Unconditional loop
	while (true)
	{
		Mat cameraFrame;
		stream1.read(cameraFrame);
		imshow("Origin", cameraFrame);


		//sobel edge processing
		Sobel(cameraFrame, cameraFrame, CV_8U, 1, 0);
		imshow("Processing", cameraFrame);

		if (waitKey(30) >= 0)
			break;
	}

	destroyAllWindows();
	

}