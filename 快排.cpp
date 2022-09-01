#include <iostream>
#include <time.h>
#include <cmath>
#include <stdlib.h> 
using namespace std;


int getPosition(int a[],int left,int right){
	int p=(int)(round(1.0*rand()/RAND_MAX*(right-left))+left);
	
	swap(a[left],a[p]);
	int temp=a[left];
	while(left<right){
		while(left<right&&a[right]>=temp)right--;
		a[left]=a[right];
		while(left<right&&a[left]<=temp)left++;
		a[right]=a[left];	
	}
	a[left]=temp; 
	return left;
}

void quickSort(int a[],int left,int right){
	if(left<right){
			int position=getPosition(a,left,right);
	 		quickSort(a,position+1,right);
 			quickSort(a,left-1,position);
	}
}

int main(){
	srand((unsigned)time(NULL));
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0; 
}



