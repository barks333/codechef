#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,t,a,b,c,d,e,f,g;
cin>>t;
while(t--)
{
cin>>a;
cin>>b>>c;
cin>>d>>e;
cin>>f>>g;
if( (a*a>=(pow((b-f),2)+pow((c-g),2)) )&& a*a>=(pow((b-d),2)+pow((c-e),2)))
 cout<<"yes"<<endl;
else if( a*a>=(pow((d-f),2)+pow((e-g),2)) && a*a>=(pow((d-b),2)+pow((e-c),2)))
cout<<"yes"<<endl;
else if( a*a>=(pow((f-d),2)+pow((g-e),2)) && a*a>=(pow((f-b),2)+pow((g-c),2)))
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
 
 
}
return 0;
}
