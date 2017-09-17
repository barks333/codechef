#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int t;
string s,z;
cin>>t;
while(t--)
{
cin>>s;
z=s;
reverse(s.begin(),s.end());
if(z==s)
 cout<<"wins"<<endl;
else
 cout<<"losses"<<endl;
}
return 0;
}
