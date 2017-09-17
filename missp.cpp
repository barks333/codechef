#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int T,n,temp,count;
	cin>>T;
	
	while(T--){
	    cin>>n;
	    int a[100001]={0};
	    for(int i=0;i<n;i++){
	        cin>>temp;
	        a[temp]++;
	    }
	    
	    for(int i=1;i<100001;i++){
	        if(a[i]>0&&a[i]%2!=0) {
	            cout<<i<<endl;
	            break;
	        }
	    }
	    
	    
	}
	return 0;
} 
