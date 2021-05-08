#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#define PORT 8082
#define MAX 1024
int main(){
	int sockfd;
	char buffer[MAX];
	char *msg="Server says Hello!"; 
	struct sockaddr_in servaddr, cliaddr;
	if((sockfd=socket(AF_INET, SOCK_DGRAM, 0))<0){
		perror("Failed to Create Socket"); 
		exit(EXIT_FAILURE);
	}
	servaddr.sin_family=AF_INET; 
	servaddr.sin_addr.s_addr=INADDR_ANY; 
	servaddr.sin_port=htons(PORT);
	if(bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr))<0){
		perror("Failed to Bind");
		exit(EXIT_FAILURE);
	}
	int len, n; 
	len=sizeof(cliaddr);
	n=recvfrom(sockfd, (char *)buffer, MAX, 0, (struct sockaddr *)&cliaddr, &len); 
	buffer[n]='\0';
	printf("%s\n", buffer);
	sendto(sockfd, (const char *)msg, strlen(msg), 0, (const struct sockaddr *)&cliaddr, len);
	printf("Message sent successfully!\n");
	return 0;
}