#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(0));
	int computer=rand()%3+1;//randomly generated
	int user;
	
	cout<<"enter your name ";
	cout<<"\nrock paper scissor game ";
	cout<<"\n1. rock ";
	cout<<"\n2. paper ";
	cout<<"\n3. scissor ";
	cout<<"\n enter your choice ";
	cin>>user;
	
	if (user == 1)
	{
		if (computer == 1)
		{
			cout<<"\ncomputer chose rock. it's a tie! ";
		}
		else if (computer == 2)
		{
			cout<<"\ncomputer chose paper. you lose! ";
		}
		else
		{
			cout<<"\ncomputer chose scissor. you win! ";
		}
		
	}
	else if (user == 2)
	{
		if (computer == 1)
		{
			cout<<"\ncomputer chose rock. you win! ";
		}
		else if (computer == 2)
		{
			cout<<"\ncomputer chose paper. it's a tie! ";
		}
		else
		{
			cout<<"\ncomputer chose scissor. you lose! ";
		}
	}
	else
	{
		if (computer == 1)
		{
			cout<<"\ncomputer chose rock. you lose! ";
		}
		else if (computer == 2)
		{
			cout<<"\ncomputer chose paper. you win! ";
		}
		else
		{
			cout<<"\ncomputer chose scissor. it's a tie! ";
		}
	}
}
