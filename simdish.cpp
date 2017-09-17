#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char s1[11][12],s2[11][12];
int t,i,k=0,j;
cin>>t;
while(t--)
{
for(i=0;i<4;i++)
  {
cin>>s1[i];  
}
for(i=0;i<4;i++)
   {
cin>>s2[i];
   }
k=0;
for(i=0;i<4;i++)
 {
   for(j=0;j<4;j++)
     {
        if(strcmp(s1[i],s2[j])==0)
         {
          k++;
} 
     }
}
if(k>=2)
cout<<"similar"<<endl;
else
cout<<"dissimilar"<<endl;
}
return 0;
}
