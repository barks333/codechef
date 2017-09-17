#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t;
int a,b;
float z;
cin>>t;
while(t--)
{
cin>>a>>b;
z=a*b;
if(a>1000)
 cout<<fixed<<setprecision(6)<<(z-(0.1)*z)<<endl;
else
 cout<<fixed<<setprecision(6)<<z<<endl;
}
return 0;
}
