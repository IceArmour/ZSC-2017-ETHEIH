//----------------------------------------������˵����-----------------------------------------
//        �������ƣ�CoordinateTransformation ����任
//        ����˵�����仯�ѿ������굽�����ꡢ�����ꡣ
//        ����ϵͳ��Windows 10 Professional 64bit 1803
//        �����汾��OpenCV 3.4.1
//        IDE�汾��Visual Studio Community 2017
//        2018-05-02 Created by @ZHWKnight
//        2018-05-19 Revised by @ZHWKnight
//--------------------------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.141592653

struct pointGrid3D {
	double x, y, z;
};
struct pointSpherical3D {
	double r, a, b;
};
struct pointCylindrical3D {
	double r, a, z;
};

int main() {
	pointGrid3D src;
	pointSpherical3D dst0;
	pointCylindrical3D dst1;
	printf("������ѿ�������,�Կո������\n");
	scanf_s("%lf %lf %lf", &src.x,&src.y,&src.z);
	dst0.r = sqrt(src.x * src.x + src.y * src.y + src.z * src.z);
	dst0.a = atan2(src.y, src.x);
	dst0.b = atan2(src.z, sqrt(src.x * src.x + src.y * src.y));
	dst1.r = sqrt(src.x * src.x + src.y * src.y);
	dst1.a = atan2(src.y, src.x);
	dst1.z = src.z;
	printf("������Ϊ: %fmm, %frad, %frad\n", dst0.r, dst0.a, dst0.b);
	printf("������Ϊ: %fmm, %frad, %fmm\n", dst1.r, dst1.a, dst1.z);
	system("pause");
