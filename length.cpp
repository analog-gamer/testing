#include<iostream>
#include <math.h>
#include <stdio.h>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;



int main()
{
	int length = 400;
	
	string my;
	char buf[2];
	//memset(buf, 0, 2);
	
	sprintf(buf, "%02x", 130);
	my+=buf;
	sprintf(buf,"%04x", length);
	my+=buf;
	cout<<my<<endl;
}
