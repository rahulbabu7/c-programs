#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] ;
    char message[1024];
   // Create socket
   server_fd = socket(AF_INET, SOCK_STREAM, 0);
   address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(8080);

    // Bind socket to address and port
    bind(server_fd, (struct sockaddr *)&address, sizeof(address));
   

    // Start listening for incoming connections
   listen(server_fd, 3); 
   

    printf("Server is listening on port 8080...\n");

    // Accept incoming connection
    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);
   
    for (int i = 0; i < 4; i++) {
        printf("Enter the message: ");
        scanf("%s", message);

        // Send a message to the client
        send(new_socket, message, strlen(message), 0);

        // Receive the client's response
        recv(new_socket, buffer, sizeof(buffer), 0);
        printf("Client response: %s\n", buffer);

       memset(buffer, 0, sizeof(buffer));
    }

    // Close the sockets
    close(new_socket);
    close(server_fd);
    return 0;
}