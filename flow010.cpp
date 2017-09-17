#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int t;
char s;
cin>>t;
while(t--)
{
cin>>s;
if(s=='B' or s=='b')
cout<<"BattleShip"<<endl;
else if(s=='C' or s=='c')
cout<<"Cruiser"<<endl;
else if(s=='D' or s=='d')
cout<<"Destroyer"<<endl;
else if(s=='F' or s=='f')
cout<<"Frigate"<<endl;

}
return 0;
}
