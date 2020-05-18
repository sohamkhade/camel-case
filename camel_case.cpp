#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c;
	int i=0;int count=0;
	char ch=s[0];
	while(ch!='\0')
	{
		c=ch;
		if(c>65 && c<91)
			count++;
		
		i++;
		ch=s[i];
	}
	cout<<count+1;
}
