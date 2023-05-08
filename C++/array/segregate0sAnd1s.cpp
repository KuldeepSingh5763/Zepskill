#include<iostream>
#include<vector>
using namespace std;
 void segregate0sAnd1s(vector<int> &arr){
    int n=arr.size();
    int p = -1;
    for(int i=0;i<n;i++){
        int temp = arr[i];
        if(arr[i]==0){
            ++p;
            arr[i]=arr[p];
            arr[p]=temp;
        }

    }
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 }



int main(){
    vector<int>arr = {0,0,1,1,0,0,1,1,0,0,0};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    segregate0sAnd1s(arr);
}
