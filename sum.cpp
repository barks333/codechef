#include<iostream>
using namespace std;
int main()
{
int t,k=0,j,i,h,sum=0;
short a[100][100];
cin>>t;
while(k<t)
 {
cin>>h; 
   for(i=0;i<h;i++)
   for(j=0;j<=i;j++) 
      cin>>a[i][j];
    
for(i=(h-2);i>=0;i--)
for(j=0;j<=i;j++)
a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
cout<<a[0][0]<<endl;
 k++;
 }
return 0;
}
