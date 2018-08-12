//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版 程序1_3
//		程序描述：图像模糊
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		开发测试所用OpenCV版本：3.4.0
//		2018年3月9日 Created by @ZHWKnight
//		2018年3月9日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

#include <highgui.hpp>
#include <imgproc.hpp>
using namespace cv;

int main() {
	Mat srcImage = imread("1.jpg");
	imshow("【原图】", srcImage);
	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));
	imshow("【效果图】", dstImage);
	waitKey(0);
}