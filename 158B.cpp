#include <iostream>
using namespace std;

int main(){
	int n,taxi=0;	// Number of groups
	cin>>n;
	int arr1=0,arr2=0,arr3=0;

	for (int i=0;i<n;i++){
		int grpSize;
		cin>>grpSize;
		if (grpSize=4){
			taxi+=1;
		}else if(grpSize=3){
			arr3+=1;
		}else if(grpSize=2){
			arr2+=1;
		}else if(grpSize+=1){
			arr1+=1;
		}
		// cin>>arr[i];	// Input array for group lengths

	}

	taxi+=arr2/2;
	arr2=arr2%2;

	taxi+=arr3;
	arr3=arr3%4;

// 	int rem=arr3+arr2*4;

	if (arr1>arr3+arr2*4){
		taxi+=arr1/4;
		if (arr1%4!=0){
			taxi+=1;
		}
	}

	cout<<taxi;
	


	return 0;
}