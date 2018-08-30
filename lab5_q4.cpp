//include library and start main
#include <iostream>
using namespace std;
int main()
{//declare and define varible
int a;
cout<<"enter a number ";
cin>>a;
//conditions
if(a%5==0 && a%11==0)
 {cout<<" number divisible by 5 and 11 ";}
else{cout<<" the number is either not divisible by 5 or not the same by 11 or both ";}
// end of program
return 0;
}
