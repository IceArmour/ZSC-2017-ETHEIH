//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版 程序1_1
//		程序描述：图像显示
//		开发测试所用操作系统：Windows 10 Professional 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		开发测试所用OpenCV版本：3.4.0
//		2018年3月8日 Created by @ZHWKnight
//		2018年3月9日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

#include<opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("1.jpg");
	imshow("【原始图】", img);
	waitKey(0);
}