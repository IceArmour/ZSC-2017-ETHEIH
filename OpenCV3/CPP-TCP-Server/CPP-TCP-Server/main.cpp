//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：第11次汇报 CPP-TCP-Server
//		程序描述：建立TCP通信协议，作为服务器端，监听等待接入
//		开发测试所用操作系统：Windows 10 64bit
//		开发测试所用IDE版本：Visual Studio 2017
//		2018年8月9日 Created by @ZHWKnight
//		2018年4月13日 Revised by @ZHWKnight
//---------------------------------------------------------------------------------------------

#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>
#pragma comment (lib, "ws2_32.lib")  //加载 ws2_32.dll
int main() {
	//初始化 DLL
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
	//创建套接字
	SOCKET servSock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	//绑定套接字
	sockaddr_in sockAddr;
	memset(&sockAddr, 0, sizeof(sockAddr));  //每个字节都用0填充
	sockAddr.sin_family = PF_INET;  //使用IPv4地址
	sockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");  //具体的IP地址
	sockAddr.sin_port = htons(1234);  //端口
	bind(servSock, (SOCKADDR*)&sockAddr, sizeof(SOCKADDR));
	//进入监听状态
	listen(servSock, 20);
	//接收客户端请求
	SOCKADDR clntAddr;
	int nSize = sizeof(SOCKADDR);
	SOCKET clntSock = accept(servSock, (SOCKADDR*)&clntAddr, &nSize);
	//向客户端发送数据
	char str[] = "Hello World!";
	send(clntSock, str, strlen(str) + sizeof(char), NULL);
	//关闭套接字
	closesocket(clntSock);
	closesocket(servSock);
	//终止 DLL 的使用
	WSACleanup();
	return 0;
}