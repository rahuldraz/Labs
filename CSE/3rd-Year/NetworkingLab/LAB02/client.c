#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 8080
int main(int argc, char const *argv[]){
	int sock = 0, valread;
	struct sockaddr_in serv_addr;
	char *num;char buffer[1024] = {0};
	printf("\nEnter number to send:");
	scanf("%s",num);
	if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0){
		printf("\n Socket creation error \n"); 
		return -1;
	}
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);
	if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0){
		printf("\nConnection Failed \n"); 
		return -1;
	}
	send(sock , num , strlen(num) , 0 );
	printf("number sent\n");
	valread = recv( sock , buffer, 1024,0);
	printf("%s\n",buffer );
	return 0;
}