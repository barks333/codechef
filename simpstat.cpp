#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t,n,k,i,d,g,e=0,h=0;
float f=0.000000;
cin>>t;
while(t--)
{
f=0.0;
cin>>n>>k;
g=k;
int A[n];
for(i=0;i<n;i++)
 {
cin>>A[i];
 }
while(k--)
{
int min=A[0];
int max=A[0];
e=0;
h=0;
for(i=0;i<n;i++)
   {
  if(min>A[i] &&min!=0)
    min=A[i];
  if(max<A[i] && max!=0)
    max=A[i];
   }
//cout<<"The max value is:-"<<max<<endl;
//cout<<"The min value is:-"<<min<<endl;
for(i=0;i<n;i++)
  {
  if(min==A[i] and e==0) 
     {
     A[i]=0;
      e++;
       }
    if(max==A[i] and h==0)
      {
      A[i]=0;
      h++;
       }  
 }
}
for(i=0;i<n;i++)
{
//cout<<"The value of "<<i<<"array is"<<A[i]<<endl;   
f+=A[i];
}

d=n-2*g;
f=f/d;
cout<<fixed<<setprecision(6)<<f<<endl;    

}
return 0;
}
