#include<iostream>
using namespace std;
int main()
{
int t,k=0,i,j;
char A[1000],B[1000];
cin>>t;
while(t--)
{
k=0;
cin>>A;
cin>>B;
for(i=0;A[i]!='\0';i++)
 {
  for(j=0;B[j]!='\0';j++)
   {
     if(A[i]==B[j])
           {
              k++;
              break;
            }
   }
 }
if(k>0)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}
