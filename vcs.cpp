#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t,s,ig,tr,i;
int count;
int min1=0;
cin>>t;
while(t--)
{
min1=0;
count=0;
cin>>s>>ig>>tr;
vector<int> a;
a.resize(ig);
vector<int> b;
b.resize(tr);
vector<int> c;
c.resize(s+1);
   for(i=0;i<s;i++)
     {  
      c[i+1]=0; 
     } 
 for(i=0;i<ig;i++)
      { 
     cin>>a[i];
     c[a[i]]++;
      }  
for(i=0;i<tr;i++)
    {    
  cin>>b[i];
  c[b[i]]++;
      }
for(i=1;i<=s;i++)  {
    if(c[i]==0)
    min1++;
    if(c[i]==2)
     count++;  
     }

cout<<count<<" "<<min1<<endl;
}
return 0;
}
