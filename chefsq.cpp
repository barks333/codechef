#include<iostream>
using namespace std;
int main()
{
int t,a,b,count,i,j;
cin>>t;
while(t--)
{
cin>>a;
int A[a];
for(i=0;i<a;i++)
cin>>A[i];
cin>>b;
int B[b];
for(i=0;i<b;i++)
cin>>B[i];
int count=0;
j=0;   
for(i=0;i<a;i++)
    {
       
         if(A[i]==B[j])
             {
            count++;
             j++;
             }
   }
if(count>=b)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

}
return 0;
}
