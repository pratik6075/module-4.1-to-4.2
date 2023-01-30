#include<iostream>
#include<string.h>
using namespace std;
class addstring
{
	public:
		char s1[25],s2[25];
		addstring(char str1[],char str2[])//parameterized constructor
		{
			strcpy(this->s1,str1);
			strcpy(this->s2,str2);
		}
		void operator+()//overload operator+ to concat the string
		{
			cout<<"\nconcatenation: "<<strcat(s1,s2);
		}
};
int main()
{
	char str1[]="hello";//declaring two strings
	char str2[]="forworld";
	
	addstring a1(str1,str2);//declaring and intializing the class with above two string
	+a1;//call operator function
}
