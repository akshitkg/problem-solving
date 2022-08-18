#include <iostream>
using namespace std;

int main(){
    long long int n, max=0, min=0, nmax=0,nmin=0;
    cin>>n; // Number of flowers
    int arr[n];
    
    for (int i=0; i<n;i++){
        cin>>arr[i];
        if (max<arr[i]){
            max=arr[i];
            // cout<<"max: "
        }
        if (i==0){
            min=arr[i];
        }
        if (min>arr[i]){
            min=arr[i];
        }
        
    }
    
    // cout<<"max: "<<max<<endl;
    // cout<<"min: "<<min<<endl;
    
    
    
    for (int i=0; i<n;i++){
        if (arr[i]==max){
            nmax+=1;
        }
        if (arr[i]==min){
            nmin+=1;
        }
    }
    
    if ((max-min)==0){
        cout<<max-min<<" "<<(n*(n-1))/2;
    }else if (nmax==1 && nmin==1){
        cout<<max-min<<" "<<1;
    }else{
        cout<<max-min<<" "<<nmin*nmax;    
        
    }
    
    
    
    return 0;
}