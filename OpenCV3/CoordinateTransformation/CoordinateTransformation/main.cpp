//--------------------------------------������˵����-------------------------------------------
//		����˵�������Ĵλ㱨 CoordinateTransformation
//		��������������任
//		�����������ò���ϵͳ��Windows 10 64bit
//		������������IDE�汾��Visual Studio 2017
//		������������OpenCV�汾��3.4.0
//		2018��3��14�� Created by @ZHWKnightd
//		2018��4��14�� Revised by @ZHWKnightd
//---------------------------------------------------------------------------------------------

#include <opencv.hpp>
#include <highgui.hpp>
#include <imgproc.hpp>

using namespace cv;
using namespace std;

int main() {

	Mat srcImage = imread("1.jpg");
	Mat grayImage, gaussImage, gAhresImage;
	cvtColor(srcImage, grayImage, COLOR_RGB2GRAY);

	GaussianBlur(grayImage, gaussImage, Size(5, 5), 0, 0);
	threshold(gaussImage, gAhresImage, 60, 255, 0);

	vector<vector<Point>> contours;
	vector<Vec4i> hierarchy;

	findContours(gAhresImage, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	drawContours(gAhresImage, contours, -1, Scalar(128), 2);

	vector<Moments> mu(contours.size());
	for (int i = 0; i < contours.size(); i++)
		mu[i] = moments(contours[i], true);
	vector<Point2d> mc(contours.size());
	for (int i = 0; i < contours.size(); i++)
		mc[i] = Point2f(static_cast<float>(mu[i].m10 / mu[i].m00), static_cast<float>(mu[i].m01 / mu[i].m00));
	for (int i = 0; i < contours.size(); i++)
		circle(gAhresImage, mc[i], 3, 128, -1);

	imshow("ԭʼͼ��", srcImage);
	imshow("Ч��ͼ", gAhresImage);

	waitKey(0);
	return(0);
}

