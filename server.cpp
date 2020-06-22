#include<iostream>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#include<cstring>
#include "buff.pb.h"
#define port 8080

using namespace std;

int main()
{
	int s_fd,new_soc,val_rd;
	struct sockaddr_in a;
	int opt =1;
	int addrlen=sizeof(a);
	char buffer[1024]={0};
	//char *hello = "hello to client";
	string msg;

	//Socket field
	s_fd=socket(AF_INET,SOCK_STREAM,0);
	a.sin_family = AF_INET;
	a.sin_addr.s_addr=INADDR_ANY;
	a.sin_port = htons(port);

	//Socket bind
	bind(s_fd,(struct sockaddr *)&a,sizeof(a));

	//Protobuf 
	sock::PersonInfo inform;
	sock::Info* i=inform.add_info();

	//Listen to client
	listen(s_fd,3);
	new_soc=accept(s_fd,(struct sockaddr *)&a,(socklen_t*)&addrlen);
	
	val_rd=read(new_soc,buffer,1024);
	inform.ParseFromString(buffer);
	cout<<"\nName is : "<<i->name();
	cout<<"\nID is : "<<i->id();
	//send(new_soc, hello, strlen(hello),0);
	//cout<<"\n msg sent ";
	return 0;

}
