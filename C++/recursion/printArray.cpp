#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&arr , int n){
    if(n == arr.size())  return;
    cout<<arr[n]<<endl;
    display(arr, n+1);
}

int maximum(vector<int>&arr , int n){
    if(n == arr.size()-1)  return arr[n];
    return max(maximum(arr,n+1),arr[n]);
}

int minimum(vector<int>&arr , int n){
    if(n == arr.size()-1)  return arr[n];
    return min(maximum(arr,n+1),arr[n]);
}
int main(){
    vector<int>arr = {2,4,5,7,8,6,3,9};
    cout<<"Element of Array = "<<endl;
    display(arr,0);

    cout<<" maximum is = "<<maximum(arr,0)<<endl;

    cout<<" minimum is = "<<minimum(arr,0);
}
