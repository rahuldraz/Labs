#include<unistd.h>
#include<stdio.h>
#include<sys/socket.h>
#include<string.h>
#include<arpa/inet.h>
#define PORT 8080
int main(int argc,char const*argv[]){
	int sock=0,valread;
	struct sockaddr_in serv_addr;
	char *hello="hello from client";
	char buffer[1024]={0};
	if((sock=socket(AF_INET,SOCK_STREAM,0))<0){
		printf("socket creation failed");
		return -1;
	}
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=inet_addr("127.0.0.53"); 
	serv_addr.sin_port=htons(PORT);
	printf("IP address of intermediate server is : %s \n",inet_ntoa(serv_addr.sin_addr));
	printf("port is :%d \n",(int)ntohs(serv_addr.sin_port));
	if((connect(sock,(struct sockaddr*)&serv_addr,sizeof(serv_addr)))<0){
		printf("\n Connection Failed \n");
		return -1;
	}
	send(sock,hello,strlen(hello),0);
	printf("Hello mesaage sent");
	valread=recv(sock,buffer,1024,0);
	printf("%s\n",buffer);
	close(sock);
	return 0;
}