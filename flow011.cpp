#include<iostream>
using namespace std;
int main()
{
int t,sal;
float z;
cin>>t;
while(t--)
{
cin>>sal;
if(sal<1500)
   z=sal+0.1*sal+0.9*sal;
else
  z=sal+500+0.98*sal;
cout<<z<<endl;
}
return 0;
}
