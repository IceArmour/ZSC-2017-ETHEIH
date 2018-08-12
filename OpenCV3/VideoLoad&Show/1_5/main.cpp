//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV3版 程序1_5
//		程序描述：读取并播放视频
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		开发测试所用OpenCV版本：3.4.0
//		2018年3月9日 Created by @ZHWKnight
//		2018年3月9日 Revised by @ZHWKnight
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
	imshow("【视频帧画面】", frame);
	waitKey(30);
	}
	return(0);
}