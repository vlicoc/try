#include <iostream>
using namespace std;
int n[900],a,b,c;
int main(){
	int a1,b1,c1;
	cin>>a1>>b1>>c1;
	for(int i=100;i<1000;i++){
		n[i-100]=i;
	}
	
	for(int i=0;i<900;i++){
		a=n[i];
		for(int j=a+1;j<900;j++){
			b=n[j];
			for(int k=b+i;k<900;k++){
				c=n[k];
				if(1.0*a1/b1==1.0*a/b&&1.0*b1/c1==1.0*b/c){
					cout<<a<<b<<c<<endl;
				}
			} 
		}
	}
	
	return 0;
}
