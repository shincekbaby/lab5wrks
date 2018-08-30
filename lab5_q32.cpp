//include the library files and start with main
#include<iostream>
using namespace std;
int main()
{//declare necessary varibles and define all of them except t
int n,s=1,f=0,t;
 cout<<" Enter of any number ";
 cin>>n;
 //loop
while(n>s)
 {f++;
  s=s*10;
  if(f==1)
{t=n%10;}
  }//print results
cout<<"last digit ="<<t<<"\n";
s=s/10;
t=n/s;
cout<<"first digit ="<<t<<"\n";
//end of program
return 0;
}
