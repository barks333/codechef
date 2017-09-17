#include<iostream>
using namespace std;
int main()
{
int t,a,i,d,s,l=0,k;
cin>>t;
while(t--)
  {
cin>>a;
l=0;
if(a<2001)
{
k=2001-a;
for(i=a;i<2001;i++)
{
if(i%4==0)
   {
        if(i%100==0)
           {
                if(i%400==0)
                  l++;
            }
          else
          l++;  
   }
}
d=2*l+(k-l);
s=7-(d%7);

 }
else
{
k=a-2001;
for(i=2001;i<a;i++)
{
if(i%4==0)
   {
        if(i%100==0)
           {
                if(i%400==0)
                  l++;
            }
        else
       l++;  
   }
 }
d=2*l+(k-l);
s=(d%7);
}
switch(s)
{
case 0:
cout<<"monday"<<endl;
break;
case 1:
cout<<"tuesday"<<endl;
break;
case 2:
cout<<"wednesday"<<endl;
break;
case 3:
cout<<"thursday"<<endl;
break;
case 4:
cout<<"friday"<<endl;
break;
case 5:
cout<<"saturday"<<endl;
break;
case 6:
cout<<"sunday"<<endl;
}
}
return 0;
}
