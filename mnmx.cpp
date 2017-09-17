#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t,n,min=0,i;
cin>>t;
while(t--)
{
cin>>n;
vector<int> a;
a.resize(n);
for(i=0;i<a.size();i++)
{
 if(i==0)
   {
   cin>>a[i];
    min=a[i];
   }
   else
   {
    cin>>a[i];
    if(min>a[i])
       {
        min=a[i];
       }

   }
}
cout<<min*(n-1)<<endl;

}
return 0;
}
