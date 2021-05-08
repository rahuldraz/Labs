#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#define PORT 8080
int main(int argc, char const *argv[]){
	int sock_server=0, valread;
	struct sockaddr_in serv_addr;
	char *hello="Hello from the Intermediete Server...";
	char buffer[1024]={0};
	char client_msg[1024];
	char server_msg[1024];
	if((sock_server=socket(AF_INET,SOCK_STREAM,0))<0){
		printf("\nFailed to Create Intermediate Socket!");
		return -1;
	}
	serv_addr.sin_family=AF_INET;serv_addr.sin_addr.s_addr=inet_addr("127.0.0.52");
	serv_addr.sin_port=htons(PORT);
	printf("Actual Server IP Address: %s\n",inet_ntoa(serv_addr.sin_addr));
	printf("Port Number: %d\n",(int)ntohs(serv_addr.sin_port));
	if((connect(sock_server,(struct sockaddr*)&serv_addr, sizeof(serv_addr)))<0){
		printf("\nConnection Failed\n");
		return -1;
	}
	else{
		printf("\nConnected to the Actual Server!\n");
	}
	//Getting connection from client
	int int_server_fd, new_socket;
	struct sockaddr_in address;
	int addrlen=sizeof(address);
	if((int_server_fd=socket(AF_INET,SOCK_STREAM,0))==-1){
		perror("Socket Failed");
		exit(EXIT_FAILURE);
	}
	address.sin_family=AF_INET;
	address.sin_addr.s_addr=inet_addr("127.0.0.53");
	address.sin_port=htons(PORT);printf("IP Address: %s\n",inet_ntoa(address.sin_addr));
	printf("Port Number: %d\n",(int)ntohs(address.sin_port));
	if(bind(int_server_fd,(struct sockaddr*)&address,sizeof(address))<0){
		perror("Bind Failed");
		exit(EXIT_FAILURE);
	}
	if(listen(int_server_fd,3)<0){
		perror("Listen");exit(EXIT_FAILURE);
	}
	if((new_socket=accept(int_server_fd,(struct sockaddr*)&address,(socklen_t*)&addrlen))<0){
		perror("Accept");
		exit(EXIT_FAILURE);
	}
	else{
		printf("\nClient connected\n");
	}
	recv(new_socket,buffer,1024,0);
	strcpy(client_msg,buffer);
	printf("Client Says: %s\n",client_msg);
	memset(buffer,0,sizeof(buffer));
	send(sock_server,client_msg,sizeof(client_msg),0);
	printf("Client Message Sent to the Actual Server\n");
	valread=recv(sock_server,buffer,1024,0);
	strcpy(server_msg,buffer);
	printf("Server Says: %s\n",server_msg);
	send(new_socket,server_msg,sizeof(server_msg),0);
	close(sock_server);
	close(new_socket);
	return 0;
}