#define MYPORT 3490
int main(int argc,char *argv[])
{
	int sockfd;
	struct sockaddr_in my_addr;
	sockfd=socked(AF_INET,SOCK_STEAM,0);
	if(sockfd==-1){
		perror("socket");
		exit(EXIT_FAILURE);
	}
	my_addr.sin_family=AF_INET;
	my_addr.sin_port=htons(MYPORT);
	my_addr.sin_addr.s_addr=inet_addr("192.168.1.150");
	bzero(&(my_addr.sin_zero),8);
	if(bind(sockfd,(struct sockaddr *)&my_addr,
		sizeof(struct sockaddr))==-1){
		perror("bind");
		exit(EXIT_FAILURE);
}

close(sockfd);
}
