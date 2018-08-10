#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <conio.h>
#pragma comment(lib, "ws2_32.lib")
int main() {

	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);

	sockaddr_in sockAddr;
	memset(&sockAddr, 0, sizeof(sockAddr));
	sockAddr.sin_family = PF_INET;
	sockAddr.sin_addr.s_addr = inet_addr("192.168.100.100");
	sockAddr.sin_port = htons(2005);
	connect(sock, (SOCKADDR*)&sockAddr, sizeof(SOCKADDR));

	char szBuffer[MAXBYTE] = { 0 };
	int flag = 1;
	char unch;
	while (flag){
		if (_kbhit() && (unch = _getch()) == 0x1b)
			flag = 0;
		recv(sock, szBuffer, MAXBYTE, NULL);
		printf("Coordinate form VISOR: %s\n", szBuffer);
	}

	closesocket(sock);

	WSACleanup();
	system("pause");
	return 0;
}