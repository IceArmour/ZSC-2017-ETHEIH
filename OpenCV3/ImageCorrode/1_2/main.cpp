//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV3�� ����1_2
//		����������ͼ��ʴ
//		�����������ò���ϵͳ��Windows 10 64bit
//		������������IDE�汾��Visual Studio 2017
//		������������OpenCV�汾��3.4.0
//		2018��3��9�� Created by @ZHWKnight
//		2018��3��9�� Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

//#include <opencv.hpp>
#include <highgui.hpp>
#include <imgproc.hpp>
using namespace cv;

int main() {
	Mat srcImage = imread("1.jpg");
	imshow("��ԭͼ��", srcImage);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	imshow("��Ч��ͼ��", dstImage);
	waitKey(0);
}