//include the library files and start with the main
#include<iostream>
using namespace std;
int main()
{//declare summing varible ,collector varible and loop running variable
int s=0,n,i=1;
 cout<<" Enter natural number till you want to find the sum of ";
 cin>>n;
 //loop
while(i<=n)
 {s=s+i;i++;
  }
 //display sum
cout<<" sum of natural numbers till "<<n<<" is ="<<s;
//end of program
 return 0;
}
