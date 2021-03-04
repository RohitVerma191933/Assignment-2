#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double power(double m,int n=2)
{
double t;
t=pow(m,n);
return t;
}
int main()
{
double num,ans;
int p;
cout<<"ENTER THE BASE NUMBER : ";
cin>>num;
cout<<"\n ENTER THE EXPONENT :";
cin>>p;
if(p==0)
{
	ans=power(num);
	cout<<"\nPOWER OF "<<num<<" is "<<ans<<endl;
}
else
{
	ans=power(num,p);
	cout <<"\n RESULT OF "<<num<<" AND POWER IS : " <<ans<<endl;
	}	
	
getch();	
	
}
