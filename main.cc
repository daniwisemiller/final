#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 

int countLines(char *pName);
int countChars(char *pName);

int main(int argc, char *argv[])
{
	
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
	if(f==NULL)
		return 0;
	

	while(!feof(f))
	{
		cin>>ch;
		if(ch!='\n')
			ch++;	
	}
	fclose(f);
	return ch;
}
