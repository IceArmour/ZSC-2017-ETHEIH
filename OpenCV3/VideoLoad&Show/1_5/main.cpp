//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV3�� ����1_5
//		������������ȡ��������Ƶ
//		�����������ò���ϵͳ��Windows 10 64bit
//		������������IDE�汾��Visual Studio 2017
//		������������OpenCV�汾��3.4.0
//		2018��3��9�� Created by @ZHWKnight
//		2018��3��9�� Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

#include <opencv.hpp>
using namespace cv;

int main() {
	VideoCapture capture("1.avi");
	while (1)
	{
		Mat frame;
		capture >> frame;
		if (frame.empty())
		{
			break;
		}
	imshow("����Ƶ֡���桿", frame);
	waitKey(30);
	}
	return(0);
}