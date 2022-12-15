#include<iostream>
using namespace std;

int main()
{
	int num,i,j;
	
	while(true)
	{
		j=0;
		i=2;
		cout<<"enter number: ";
		cin>>num;
		while(i<=num/2)
		{
			if(num%i==0)
			{
				
				j=1;
				break;
			}
			i++;
			
		}
		if(j==0)
		{
			cout<<"prime no"<<endl;
		}
		else
		{
			cout<<"not a prime no"<<endl;
		}
	}
	
	return 0;
}
