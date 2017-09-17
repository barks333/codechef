#include<iostream>
using namespace std;
int main()
{
int t,c,h,e,f,i;
char s[100002];
cin>>s;
f=0;
c=0;h=0;e=0;
 for(i=0;s[i]!='\0';i++)
  {
        if(s[i]=='C')
              c++;
          if(c>=1 and s[i]=='H')
             {
            h++;
            c--;
            }
          if(h>=1 and s[i]=='E')
            {
            e++;
            h--;
             }
           if(e>=1 and s[i]=='F')
             {
             e--;
             f++;
             }
 }

cout<<f<<endl;
return 0;
}
