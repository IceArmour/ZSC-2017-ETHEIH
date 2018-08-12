//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版 程序1_6
//		程序描述：调用摄像头图像并检测边缘
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		开发测试所用OpenCV版本：3.4.0
//		2018年3月9日 Created by @ZHWKnight
//		2018年3月9日 Revised by @ZHWKnight
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
		imshow("【实时边缘图像】", edges);
		if (waitKey(30) >= 0)
			break;
		waitKey(30);
	}
	return(0);
}