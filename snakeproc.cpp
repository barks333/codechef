#include<iostream>
using namespace std;
int main()
{
int r,l,i,j=0,k;
char a[501];
cin>>r;
while(r--)
{
cin>>l;
j=0;
char b[l]={0};
k=2;
for(i=0;i<l;i++)
 {
 cin>>a[i];
if(a[i]=='H' or a[i]=='T')
    {
    b[j]=a[i];
    j++; 
    }
 }
for(i=0;i<j;i=i+2)
 {
 if(b[i]=='H' and b[i+1]=='T')
   k=0;
 else 
  { 
  k=1;
   break;
  }
 }
if(k==0 or k==2)
cout<<"Valid"<<endl;
else if(k==1)
cout<<"Invalid"<<endl;
}
return 0;
}
