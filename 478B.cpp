// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

long long int min(long long int n,long long int m){
    long long int a=n/m;
    
    if (a*m==n){
        long long int min=(a*(a-1))/2;
        return m*min;
    }
    
    if (a*m<n){
        long long int extra=n-a*m;
        
        long long int min1=(m-1)*((a*(a-1))/2);
        long long int lastTeam=a+extra;
        min1+=(lastTeam*(lastTeam-1))/2;
        
        long long int leftOver=m-extra;
        long long int bigType=a+1;
        long long int min2=extra*(bigType*(bigType-1)/2);
        min2+=leftOver*(a*(a-1)/2);
        
        if (min1>min2){
            return min2;
        }else{
            return min1;
        }
        // return min1;
    }
    
}

long long int max(long long int n, long long int m){
    long long int maxNumber=n-m+1;
    long long int max=(maxNumber*(maxNumber-1))/2;
    return max;
}



int main() {
    // Write C++ code here
    long long int n,m;
    cin>>n;
    cin>>m;
    
    // cout<<n/m;
    
    long long int minimum=min(n,m);
    long long int maximum=max(n,m);
    cout<<minimum<<" "<<maximum;

    return 0;
}