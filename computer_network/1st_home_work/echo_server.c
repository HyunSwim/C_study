#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define BUF_SIZE 1024
void error_handling(char *message);

int main(int argc, char *argv[])
{
	int serv_sock, clnt_sock;
	char message[BUF_SIZE];
	int str_len, i;
	
	struct sockaddr_in serv_adr;
	struct sockaddr_in clnt_adr;
	socklen_t clnt_adr_sz;
	
	if(argc!=2) {
		printf("Usage : %s <port>\n", argv[0]);
		exit(1);
	}
	
	// socket 함수를 이용한 소켓 생성
	serv_sock=socket(PF_INET, SOCK_STREAM, 0);   
	if(serv_sock==-1)
		error_handling("socket() error");
	
	// 서버의 IP주소, Port 번호 등을 구조체에 저장
	memset(&serv_adr, 0, sizeof(serv_adr));
	serv_adr.sin_family=AF_INET;
	serv_adr.sin_addr.s_addr=htonl(INADDR_ANY);
	serv_adr.sin_port=htons(atoi(argv[1]));

	// bind 함수를 이용한 소켓 주소 할당
	if(bind(serv_sock, (struct sockaddr*)&serv_adr, sizeof(serv_adr))==-1)
		error_handling("bind() error");
	
	// listen 함수를 이용한 연결요청 대기상태
	if(listen(serv_sock, 5)==-1)
		error_handling("listen() error");
	
	clnt_adr_sz=sizeof(clnt_adr);

	for(i=0; i<5; i++)
	{
		// accept 함수를 이용한 clinet 연결 허용
		clnt_sock=accept(serv_sock, (struct sockaddr*)&clnt_adr, &clnt_adr_sz);
		if(clnt_sock==-1)
			error_handling("accept() error");
		else{
			// clinet의 IP주소를 확인하기 위한 코드로, inet_ntoa() 함수를 사용하여 int형의 주소를 string의 우리가 주로 사용하는 IP주소로 바꿔줍니다.
			// clinet의 IP주소는 clnt_adr 구조체의 sin_addr 구조체에 해당합니다
			printf("Client IP : %s \n", inet_ntoa(clnt_adr.sin_addr)); 
			// clinet의 port 번호를 파악하기 위한 코드로, clnt_adr 구조체의 sin_port에서 port 번호를 알 수 있습니다.
			// network byte order를 host byte order로 바꾸기 위한 ntohs() 함수를 사용합니다.
			unsigned int clinet_port = ntohs(clnt_adr.sin_port);
			// 만들어준 clinet port 번호를 출력시켜줍니다.
			printf("Clinet Port : %d \n", clinet_port); //
			printf("Connected client %d \n", i+1);
		}
	
		// read, write 함수를 이용한 데이터 송수신
		while((str_len=read(clnt_sock, message, BUF_SIZE))!=0)
			write(clnt_sock, message, str_len);

		// close 함수를 이용한 연결종료(client에 해당)
		close(clnt_sock);
	}

	// close 함수를 이용한 연결종료(server에 해당)
	close(serv_sock);
	return 0;
}

void error_handling(char *message)
{
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}