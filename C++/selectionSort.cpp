#include<iostream>
#include<vector>
using namespace std;
 void selectionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIdx]>arr[j]){
                minIdx = j;
            }
        }
        if(minIdx != i){
            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    }
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 }


int main(){
    int n;
    cout<<"Enter the size of Array :" ;
    cin>>n;
    vector<int>arr (n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    selectionSort(arr);
}
