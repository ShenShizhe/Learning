#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main_97(int argc, char* argv[]) {
	if (argc != 2) {
		printf("Usage: %s 127.0.0.1\n", argv[0]);
		return 1;
	}

	char* target_ip = argv[1];

	// 初始化Winsock
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
		printf("WSAStartup failed. Error code: %d\n", WSAGetLastError());
		return 1;
	}

	// 创建socket
	SOCKET socket_desc = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (socket_desc == INVALID_SOCKET) {
		printf("Could not create socket. Error code: %d\n", WSAGetLastError());
		WSACleanup();
		return 1;
	}

	struct sockaddr_in server;

	// 设置IPv4地址和端口
	inet_pton(AF_INET, target_ip, &(server.sin_addr));
	server.sin_family = AF_INET;

	// 扫描所有端口
	for (int port = 1; port <= 65535; port++) {
		server.sin_port = htons(port);

		// 尝试连接指定端口
		if (connect(socket_desc, (struct sockaddr*)&server, sizeof(server)) == SOCKET_ERROR) {
			fflush(stdout);  // 刷新标准输出缓冲区
		}
		else {
			printf("Port %d is open\n", port);
			fflush(stdout);  // 刷新标准输出缓冲区
			closesocket(socket_desc);  // 关闭socket连接
			WSACleanup();
			return 0;
		}
	}

	printf("All ports are closed\n");
	closesocket(socket_desc);  // 关闭socket连接
	WSACleanup();
	return 0;
}
