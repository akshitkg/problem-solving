#include <iostream>
using namespace std;



int main(){
	int n,arr[100],sum=0,odd=0,even=0;
	cin>>n;

	for (int i=0; i<n;i++){
		int k;
		cin>>k;
		arr[i]=k;
		sum+=k;
	}

	// if (sum%2=0){
	// 	for (int i=0; i<n; i++){
	// 		if (arr[i]%2=0){
	// 			cout<<i+1;
	// 		}
	// 	}
	// }else{
	// 	for (int i=0; i<n;i++){
	// 		if (arr[i]%2!=0){
	// 			cout<<i+1;
	// 		}
	// 	}
	// }

	for (int i=0; i<n;i++){
		if (arr[i]%2==0){
			even+=1;
		}else{
			odd+=1;
		}
		if (even>1 || odd>1){
			break;
		}
	}
	if (odd>even){
		for (int i=0; i<n;i++){
			if (arr[i]%2==0){
				cout<<i+1;
			}
		}
	}else{
		for (int i=0; i<n;i++){
			if (arr[i]%2!=0){
				cout<<i+1;
			}
		}
	}





	return 0;
}