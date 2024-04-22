#include <iostream>
#include <opencv2/opencv.hpp>

//CV:MAT클래스는 행렬(Matrix)를 표현하기 위한 클래스

int main() 
{
	cv::Mat src; //빈 행렬
	cv::Mat src1(480, 640, CV_8UC1); // row, col , 8은 bit-depth, u는 unsigned, c는 channel이며 Grayscale은 1, Color는 3
	
	cv::Mat src2; 
	src2 = cv::Mat(480, 640, CV_8UC1);

	cv::Mat src3(cv::Size(640, 480), CV_8UC1); // CV:Size는 (cols, rows) 순서라서 W * H로 말하기 때문에 헷갈리지 않는다.

	cv::Mat src4(cv::Mat(cv::Size(640, 480), CV_8UC1));

	// 640 * 480, 125값으로 초기화 된 영상
	cv::Mat src5(480, 640, CV_8UC1, cv::Scalar(128));
	cv::Mat src6;
	src6 = cv::Mat(480, 640, CV_8UC1, cv::Scalar(128));
	
	// 640 * 480, 0값으로 초기화 된 영상
	cv::Mat src7;
	src7 = cv::Mat::zeros(cv::Size(640, 480), CV_8UC1);

	//배열로 Mat 만들기
	float afData[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	cv::Mat src8(3, 3, CV_32FC1, afData);

	return 0;

	


	
}
