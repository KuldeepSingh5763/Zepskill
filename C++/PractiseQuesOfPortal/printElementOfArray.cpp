#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[], int n) {
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	}
int main(){
    int n;
    cout<<"Enter the size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : " ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
}
