#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#define PORT 8080
int main(int argc, char const *argv[]){
	int server_fd, new_socket, valread, i, n, sum = 0;
	struct sockaddr_in address;int opt = 1;
	int addrlen = sizeof(address);
	char buffer[1024] = {0};
	char *msg = "Number received";
	// Creating socket file descriptor
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0){
		perror("socket failed"); 
		exit(EXIT_FAILURE);
	}// Forcefully attaching socket to the port 8080
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons( PORT );// Forcefully attaching socket to the port 8080
	if (bind(server_fd, (struct sockaddr *)&address, sizeof(address))<0){
		perror("bind failed"); 
		exit(EXIT_FAILURE);
	}
	printf("Server!\n");
	printf("Enter number of Clients:");
	scanf("%d",&n);
	int arr[n];
	if (listen(server_fd, n) < 0){
		perror("listen"); exit(EXIT_FAILURE);
	}
	for(i=0;i<n;i++){
		if ((new_socket = accept(server_fd, (struct sockaddr *)&address,(socklen_t*)&addrlen))<0)        {
			perror("accept");
			exit(EXIT_FAILURE);
		}
		valread = recv( new_socket , buffer, 1024,0);
		arr[i] = atoi(buffer);
		sum += arr[i];
		printf("Element from Client %d : %s\n",i+1,buffer );
		send(new_socket , msg , strlen(msg) , 0 );
	}
	printf("Total Sum = %d\n",sum); 
	return 0;
}