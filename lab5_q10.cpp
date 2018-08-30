//include library files and start main
#include<iostream>
using namespace std;
int main()
{//declare and define varibles
char a;
cout<<" Enter any alphabet (upper or lower case)\n ";
cin>>a; 
//conditions
if(a>='A' && a<='Z')
{cout<<" The character entered is Upper case\n";}
else if(a>='a' && a<='z')
{cout<<" The character entered is Lower case\n";}
//end of progarm
return 0;
}
