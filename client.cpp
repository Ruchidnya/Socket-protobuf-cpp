#include<iostream>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string>
#include "buff.pb.h"
#define port 8080

using namespace std;

int main()
{
	
	int soc=0,val_rd;
	struct sockaddr_in sa;
	char buffer[1024] ={0};
	//char *hello = "hello to server";

	//Socket connect
	soc=socket(AF_INET,SOCK_STREAM,0);
	sa.sin_family = AF_INET;
	sa.sin_port = htons(port);
	inet_pton(AF_INET,"127.0.0.1",&sa.sin_addr);
	connect(soc,(struct sockaddr *)&sa,sizeof(sa));		

	//Get info
	string n;
	int ID;
	cout<<"\n Your name : ";
	getline(cin,n);
	cout<<"\n Your ID : ";
	cin>>ID;
	
	//Set info in protobuf
	string s;
	sock::PersonInfo inform;
	sock::Info* i=inform.add_info();
	i->set_name(n);
	i->set_id(ID);
	inform.SerializeToString(&s);

	send(soc, s.c_str() , strlen(s.c_str()),0);
	cout<<"\n msg sent from client";
	val_rd=read(soc,buffer,1024);
	cout<<"\n"<<buffer;
	return 0;
}
