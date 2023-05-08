#include<iostream>
#include<vector>
#include<array>
using namespace std;

//  Element with left side smaller and right side greater

int findElement(int a[], int n) {

    vector<int>l(n,0) , r(n,0);
    l[0] = a[0];
    r[n-1] = a[n-1];

    for(int i=1; i<n;i++){
        l[i] = max(l[i-1] , a[i]);
    }
    for(int i=n-2;i>=0;i--){
        r[i] = min(r[i+1],a[i]);
    }

    for(int i=1; i<n-1; i++){
        if(a[i] >= l[i-1] && a[i] <= r[i+1]){
            return a[i];
        }
    }
    return -1;

}

int main(){

int arr[] = {4, 2, 5, 7};

int n = sizeof(arr)/sizeof(arr[0]);
cout<<findElement(arr,n);

}
