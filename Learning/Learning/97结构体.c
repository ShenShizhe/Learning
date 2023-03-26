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

	// ��ʼ��Winsock
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
		printf("WSAStartup failed. Error code: %d\n", WSAGetLastError());
		return 1;
	}

	// ����socket
	SOCKET socket_desc = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (socket_desc == INVALID_SOCKET) {
		printf("Could not create socket. Error code: %d\n", WSAGetLastError());
		WSACleanup();
		return 1;
	}

	struct sockaddr_in server;

	// ����IPv4��ַ�Ͷ˿�
	inet_pton(AF_INET, target_ip, &(server.sin_addr));
	server.sin_family = AF_INET;

	// ɨ�����ж˿�
	for (int port = 1; port <= 65535; port++) {
		server.sin_port = htons(port);

		// ��������ָ���˿�
		if (connect(socket_desc, (struct sockaddr*)&server, sizeof(server)) == SOCKET_ERROR) {
			fflush(stdout);  // ˢ�±�׼���������
		}
		else {
			printf("Port %d is open\n", port);
			fflush(stdout);  // ˢ�±�׼���������
			closesocket(socket_desc);  // �ر�socket����
			WSACleanup();
			return 0;
		}
	}

	printf("All ports are closed\n");
	closesocket(socket_desc);  // �ر�socket����
	WSACleanup();
	return 0;
}
