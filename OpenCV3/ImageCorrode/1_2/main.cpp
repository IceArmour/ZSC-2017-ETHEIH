//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版 程序1_2
//		程序描述：图像腐蚀
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		开发测试所用OpenCV版本：3.4.0
//		2018年3月9日 Created by @ZHWKnight
//		2018年3月9日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

//#include <opencv.hpp>
#include <highgui.hpp>
#include <imgproc.hpp>
using namespace cv;

int main() {
	Mat srcImage = imread("1.jpg");
	imshow("【原图】", srcImage);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("【效果图】", dstImage);
	waitKey(0);
}