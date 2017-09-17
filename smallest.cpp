#include<iostream>
using namespace std;
int main()
{
int A[]={1,2,5,10,50,100};
int t,a,temp,k,n;
cin>>t;
while(t--)
{
cin>>n;
k=n;
a=5; 
temp=0;
while(k>0)
 {
  temp=temp+(k/A[a]);
   k=k%A[a];
  a--;

}
cout<<temp<<endl;
}
return 0;
}
