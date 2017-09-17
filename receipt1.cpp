#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,i=0,r,temp,sum;
cin>>t;
while(i<t)
{
cin>>r;
sum=0;
for(int k=11;k>=0;k--)
   {
temp=pow(2,k);
sum+=(r/temp);
r=r%temp;
}
cout<<sum<<endl;    
i++;
}

return 0;
}
