#include<iostream>
#include<array>
using namespace std;

int equilibriumPoint(long long a[], int n) {

        // Your code here
        int sl=0, sr=0;
        if(n==1){
            return 1;
        }
        for(int i=1 ; i<n ; i++){
            sr+=a[i];
        }
        for(int i=0;i<n-1;i++){
            if(sl == sr){
                return i+1;
            }

            sl+=a[i];
            sr-=a[i+1];
        }
        return -1;
    }

int main(){
    long long arr[] ={1,3,5,2,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<"Equilibrium Point is = "<<equilibriumPoint(arr , n);
}
