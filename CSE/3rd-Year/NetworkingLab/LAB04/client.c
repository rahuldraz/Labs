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
	char *msg="Client says Hello!"; 
	struct sockaddr_in servaddr;
	if((sockfd=socket(AF_INET, SOCK_DGRAM, 0))<0){
		perror("Failed to Create Socket");
		exit(EXIT_FAILURE);
	}
	servaddr.sin_family=AF_INET;
	servaddr.sin_addr.s_addr=INADDR_ANY;
	servaddr.sin_port=htons(PORT);
	int len, n;
	sendto(sockfd, (const char *)msg, strlen(msg), 0, (const struct sockaddr *)&servaddr, sizeof(servaddr));
	printf("Message sent successfully!\n");
	n=recvfrom(sockfd, (char *)buffer, MAX, 0, (struct sockaddr *)&servaddr, &len); 
	buffer[n]='\0';
	printf("%s\n", buffer);
	close(sockfd); 
	return 0;
}