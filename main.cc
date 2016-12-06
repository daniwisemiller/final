#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std; 
string filename = "test.txt";
int countLines(char *pName);
int countChars(char *pName);

int main(int argc, char *argv[])
{

	/*cout<<"Enter filename"<<endl;
	cin>>filename;*/
	cout<<"Lines: "<<countLines("test.txt");
	cout<<endl;
	
	cout<<"Chars: "<<countChars("test.txt");
	cout<<endl;
}

int countLines(char *pName)
{
	FILE *f = fopen("test.txt", "r");
	int lines =0;
	int ch=0;
	if(f==NULL)
		return 0;
	

	while(!feof(f))
	{
		ch = fgetc(f);
		if(ch=='\n')
			lines++;	
	}
	fclose(f);
	return lines;
}

int countChars(char *pName)
{	
	FILE *f = fopen("test.txt", "r");
	int ch=0; 
	int c=0;
	while(!feof(f))
	{
		c = fgetc(f);
		if(c!='\n')
			ch++;	
	}
	fclose(f);
	ch= ch-1;
	return ch;
}
