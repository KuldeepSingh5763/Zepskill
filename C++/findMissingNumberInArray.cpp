#include<iostream>
#include<vector>
using namespace std;

int missingNumber(int A[],int N)
{
       int sum = (N*(N+1))/2;
       for(int ele=0 ; ele< N-1;ele++){
          sum = sum - A[ele] ;
       }
       return sum;
}

int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;

    int arr1[n-1];
    cout<<"Enter the Series(1 To N & Skip only one Number )in array : ";
    for(int i=0; i<n-1;i++){
        cin>>arr1[i];
    }
    cout<<"Missing Number : "<<missingNumber(arr1,n);
}
