#include <unistd.h> 
#include <stdio.h> 
#include <sys/socket.h> 
#include <stdlib.h> 
#include <netinet/in.h> 
#include <string.h> 
#define PORT 8080 

int flag=0;

void isPalindrome(int str[]) 
{ 
    
    int l = 0; 
    int h = strlen(str) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            flag=0; 
            return; 
        } 
    } 
    flag=1;
} 



int main(int argc, char const *argv[]) 
{ 
    int server_fd, new_socket[10], valread; 
    struct sockaddr_in address; 
    int opt = 1,count =0;
    int addrlen = sizeof(address); 
    char buffer[1024] = {0};
    char gg[1024]; 
    char *yes = "Palindrome\n";
    char *no = "Not Palindrome\n"; 
       
    // Creating socket file descriptor 
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
    { 
        perror("socket failed"); 
        exit(EXIT_FAILURE); 
    } 
       
    // Forcefully attaching socket to the port 8080 
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, 
                                                  &opt, sizeof(opt))) 
    { 
        perror("setsockopt"); 
        exit(EXIT_FAILURE); 
    } 
    address.sin_family = AF_INET; 
    address.sin_addr.s_addr = INADDR_ANY; 
    address.sin_port = htons( PORT ); 
       
    // Forcefully attaching socket to the port 8080 
    if (bind(server_fd, (struct sockaddr *)&address,  
                                 sizeof(address))<0) 
    { 
        perror("bind failed"); 
        exit(EXIT_FAILURE); 
    } 
    if (listen(server_fd, 3) < 0) 
    { 
        perror("listen"); 
        exit(EXIT_FAILURE); 
    } 
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
                       (socklen_t*)&addrlen))<0) 
    { 
        perror("accept"); 
        exit(EXIT_FAILURE); 
    }
    count = read( new_socket , buffer, 1024);
    valread = read( new_socket , buffer, 1024);
    printf("%s\n",buffer );
    isPalindrome(buffer);
    if(flag==1) 
        send(new_socket , yes , strlen(yes) , 0 ); 
    else
        send(new_socket , no , strlen(no) , 0 ); 
    flag=0;
    return 0; 
} 