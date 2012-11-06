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
	char *input = new char[1024];
	
	input = "Hi this is me , I'm Prankur";
	
	vector<string> myList;
	int count = 2;
	int index = 0;
	int indexTemp = 0;
	char temp[2];
	
	for(int i=0; i<strlen(input); i++)
	{
		if(index < 2)
		{
			temp[indexTemp++] = input[i];
			index++;
		}
		if(index==2)
		{
			myList.push_back(temp);
			index=0;
			indexTemp=0;
		}
	}
	
	for (vector<string>::iterator i = myList.begin();i != myList.end();i++)
	{
    	cout << *i << endl;
	}
}
