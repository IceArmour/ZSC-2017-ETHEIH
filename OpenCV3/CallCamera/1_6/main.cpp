//--------------------------------------������˵����-------------------------------------------
//		����˵������OpenCV3������š�OpenCV3�� ����1_6
//		������������������ͷͼ�񲢼���Ե
//		�����������ò���ϵͳ��Windows 10 64bit
//		������������IDE�汾��Visual Studio 2017
//		������������OpenCV�汾��3.4.0
//		2018��3��9�� Created by @ZHWKnight
//		2018��3��9�� Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

#include <opencv.hpp>
using namespace cv;

int main() {
	VideoCapture capture(0);
	while (1)
	{
		Mat frame,edges;
		capture >> frame;
		cvtColor(frame, edges, COLOR_BGR2GRAY);
		blur(edges, edges, Size(7, 7));
		Canny(edges, edges, 0, 30, 3);
		imshow("��ʵʱ��Եͼ��", edges);
		if (waitKey(30) >= 0)
			break;
		waitKey(30);
	}
	return(0);
}