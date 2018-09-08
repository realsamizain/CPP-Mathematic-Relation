/*
Solve by Sami Zain.
Email: thedeveloperstudio@gmail.com
*/
#include<iostream>
using namespace std;
void AB(int a[5], int b[5]);
void Relation(int a[5], int b[5]);
main()
{

cout<< "A = {2,4,6,8,10}"<<endl;
cout<< "B = {1,3,5,7,9}"<<endl;	
int a[5]= {2,4,6,8,10};
int b[5] = {1,3,5,7,9};

AB(a,b);
Relation(a,b);	
}
void AB(int a[5], int b[5])
{
cout<<"A*B = ";
for(int i =0; i<5; i++)
{
	for (int j=0; j<5; j++)
	{
		cout<<"("<<a[i]<<","<<b[j]<<")";
		
		
	}
	cout<<endl;
	}		
	
	
}
void Relation(int a[5], int b[5])
{
	cout<<endl;
	cout<<"R = ";
	for (int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if (a[i]<b[j])
			{
				cout<<"("<<a[i]<<","<<b[j]<<")";
				
			}
			
		}
	}
	
	
	
}
