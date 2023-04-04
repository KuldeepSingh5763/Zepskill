#include<iostream>
#include<vector>
using namespace std;
 void segregate0sAnd1s(vector<int> &arr){
    int n=arr.size();
    int p = -1;
    for(int i=0;i<n;i++){
        int temp = arr[i];
        if(arr[i]<0){
            ++p;
            arr[i]=arr[p];
            arr[p]=temp; }
    }
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
    vector<int>arr = {4,-3,6,7,2,-8,-9,10,11,12,-19};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    segregate0sAnd1s(arr);
}
