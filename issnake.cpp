#include<iostream>
using namespace std;
int main()
{
int t,n,i,j,hash=0;
cin>>t;
while(t--)
{
cin>>n;
hash=0;
char A[2][n];
 for(i=0;i<2;i++)
   {
     for(j=0;j<n;j++)
        {
        cin>>A[i][j];#x
         if(A[i][j]=='#')
             hash++;
        }            
}
cout<<"The number of hashes r;-"<<hash<<endl;
for(i=0;i<2;i++)
{
  for(j=0;j<n;j++)
   {
      if(A[i][j]=='#')
             { 
             hash--;
           if(A[i][j+1]=='#')

int funct()
{
  funct(A[[i][j+1]=='#' o
}
/*
for(j=0;j<n;j++)
        {
         if((A[0][j]=='.' and A[1][j]=='.')and (A)
             {
              count=0;
              break;
             }
        else if((A[0][j]=='#' and A[i][j]=='.') and (A[0][j+1]=='.' and A[1][j+1]=='#'))
            {
           count=0;
            break;
            }
        else if(A[0][j]=='#' and A[i][j]=='.')
         count=1;
        else
          count=2;*/
}
return 0;
}
