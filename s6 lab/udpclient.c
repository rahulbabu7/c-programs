#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock;
    struct sockaddr_in server_addr;
    char buffer[1024];
    char message[1024];
    

    // Create socket
  sock = socket(AF_INET, SOCK_DGRAM, 0);
   

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    server_addr.sin_port = htons(8080);

    for (int i = 0; i <4; i++) {
        printf("Enter your message: ");
        scanf("%s", message);

        // Send a message to the server
        sendto(sock, message, strlen(message), 0, (struct sockaddr *)&server_addr, sizeof(server_addr));

        // Receive the server's response
        socklen_t addrlen = sizeof(server_addr);
        int recv_len = recvfrom(sock, buffer, sizeof(buffer), 0, (struct sockaddr *)&server_addr, &addrlen);
        if (recv_len > 0) {
            printf("Server's response: %s\n", buffer);
        }

        memset(buffer, 0, sizeof(buffer));
    }

    // Close the socket
    close(sock);
    return 0;
}