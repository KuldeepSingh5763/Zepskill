#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> arr,int n){
    int temp,j=n-1;
    for(int i=0;i<n/2;i++){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
    }
    cout<<"After reverse the Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);

}
