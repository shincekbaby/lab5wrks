//include the library file and start with main
#include<iostream>
using namespace std;
int main()
{//declare neccesary varibles and initialise them
int n,s,flag=0;
cout<<"Enter value of the number you want to count the digits";
cin>>n;s=n;
while(s!=0)
{s=s/10;flag+=1;
 }
//print result
cout<<"\n Number of digit in "<<n<<"="<<flag;
//end of program
return 0;
}
