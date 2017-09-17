#include<iostream>
using namespace std;
int main()
{
int t,a,b,min,k;
cin>>t;
while(t--)
     {
cin>>a>>b;
k=a%b;
min=0;
       while(b--)
         {
           if(min<=k)
             min=k;
           if(b>=1)
             k=a%b;
         }
cout<<min<<endl;
}
return 0;
}
