#include<iostream>
using namespace std;
int main(){
    int k,sum=0,first=0,last=0,maxsum=0,flag=0;
    cin>>k;
    int n[10000]={0};
    for(int i=0;i<k;i++)
        cin>>n[i];
        
    for(int i=0;i<k;i++){
        sum+=n[i];  
        if (sum<0){
            sum=0;
		} 
        if(sum>maxsum){ 
            maxsum=sum;
            last=i;
        }

        
        if(n[i]>=0)
            flag=1;
    }
    
    sum=0;
    for(int i=last;i>=0;i--){
    	sum+=n[i];
    	if(sum==maxsum){
    		first=i;
		}
	}
    
    
	if(flag){
        cout<<maxsum<<" "<<first<<" "<<last;
    }
    else{
        cout<<0<<n[0]<<n[k-1];
    }
    return 0;
}
