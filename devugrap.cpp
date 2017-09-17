#include<iostream>
using namespace std;
int main()
{
long long int t,a,b,c,i,k,count;
cin>>t;
while(t--)
{
cin>>a>>b;
count=0;
  for(i=0;i<a;i++)
     {
         cin>>c;
        k=c%b; 
          if(k>0)
      {
          if(c>=b)
              count+=min(k,b-k);
          else
              count+=b-k;
       }
}
cout<<count<<endl;
}       
return 0;
}
