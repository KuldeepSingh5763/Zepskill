#include<iostream>
#include<vector>
using namespace std;
bool findData(vector<int>arr ,int idx,int data){
    if(idx == arr.size()) return false;
    if(arr[idx] == data){
        return true;
    }
    return findData(arr,idx+1,data);
}


int main(){
    vector<int>arr = {2,4,5,7,8,6,3,9};

    int data = 3;

    cout<<findData(arr,0,data);


}
