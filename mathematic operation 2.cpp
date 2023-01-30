#include<iostream>
using namespace std;
int main()
{
	int x,y;
	int addition,substraction,multiplication,division;
	float percentage;
	
	cout<<"\nenter first number ";
	cin>>x;
	cout<<"\nenter second number ";
	cin>>y;
	
	addition=x + y;
	substraction=x - y;
	multiplication=x * y;
	division=x / y;
	percentage=x % y;
	
	cout<<"\naddition "<<addition;
	cout<<"\nsubstraction "<<substraction;
	cout<<"\nmultiplication "<<multiplication;
	cout<<"\ndivision "<<division;
	cout<<"\percentage "<<percentage;
}
