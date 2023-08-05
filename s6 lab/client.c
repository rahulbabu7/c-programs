#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int sock;
    struct sockaddr_in serv_addr;
    char buffer[1024];
    char message[1024];

    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1"); // Use inet_addr to convert IP address to binary format
    serv_addr.sin_port = htons(8080);

    // Connect to the server
    connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

    for (int i = 0; i < 4; i++) {
        // Receive a message from the server
        read(sock, buffer, sizeof(buffer));
        printf("Received from server: %s\n", buffer);

        printf("Enter your response: ");
        scanf("%s", message);

        // Send the response to the server
        send(sock, message, strlen(message), 0);

       memset(buffer, 0, sizeof(buffer));
    }

    // Close the socket
    close(sock);
    return 0;
}