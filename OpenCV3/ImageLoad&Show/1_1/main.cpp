//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV3�� ����1_1
//		����������ͼ����ʾ
//		�����������ò���ϵͳ��Windows 10 Professional 64bit
//		������������IDE�汾��Visual Studio 2017
//		������������OpenCV�汾��3.4.0
//		2018��3��8�� Created by @ZHWKnight
//		2018��3��9�� Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

#include<opencv.hpp>
using namespace cv;

int main() {
	Mat img = imread("1.jpg");
	imshow("��ԭʼͼ��", img);
	waitKey(0);
}