#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd;
    struct sockaddr_in address, client_addr;
    socklen_t addrlen = sizeof(address);
    char buffer[1024];
    char message[1024] ;
  

    // Create socket
    server_fd = socket(AF_INET, SOCK_DGRAM, 0);
    

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    // Bind socket to address and port
    bind(server_fd, (struct sockaddr *)&address, sizeof(address));
    

    printf("UDP Server is listening on port 8080...\n");

    for (int i = 0; i < 4; i++) {
        // Receive messages from clients
        int recv_len = recvfrom(server_fd, buffer, sizeof(buffer), 0, (struct sockaddr *)&client_addr, &addrlen);
        if (recv_len <= 0) {
            break;
        }
        printf("Received from client: %s\n", buffer);
         printf("Enter the message:");
         scanf("%s",message);
        // Respond to the client
        sendto(server_fd, message, strlen(message), 0, (struct sockaddr *)&client_addr, addrlen);

        memset(buffer, 0, sizeof(buffer));
    }

    // Close the socket
    close(server_fd);
    return 0;
}