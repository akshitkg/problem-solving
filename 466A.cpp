#include <iostream>
using namespace std;

int main(){

	int n,m,a,b;
	cin>>n>>m>>a>>b;

	int baseCase=n*a;
	int possibleCase=0;

	for (int i=0; m<=n; n-m){
		int possibleCase+=m*b;
		if (possibleCase>baseCase){
			break;
		}
	}

	if (m>n && n!=0){
		possibleCase+=n*a;
	}

	if (possibleCase>baseCase){
		cout<<baseCase;
	}else{
		cout<<possibleCase;
	}

	return 0;
}