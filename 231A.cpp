#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n][3];
	int answer=0,sum=0;
	for (int i=0; i<n;i++){
		for (int j=0; j<3;j++){
			cin>>arr[i][j];
		}
	}
	for (int i=0; i<n; i++){
		sum=arr[i][0]+arr[i][1]+arr[i][2];
		if (sum>=2){
			answer+=1;
		}
	
	}
	cout<<answer;
	return 0;

}


// Solution: Use 2D array
