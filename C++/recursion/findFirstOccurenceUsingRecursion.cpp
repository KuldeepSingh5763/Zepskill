#include<iostream>
#include<vector>
using namespace std;
int findFirstOccurence(vector<int>arr ,int idx,int data){
    if(idx == arr.size()) return -1;
    if(arr[idx] == data){
        return idx;
    }
    return findFirstOccurence(arr,idx+1,data);
}


int main(){
    vector<int>arr = {2,2,1,1,1,0,0,0,3,3,3,3,6,6,6,6};

    int data = 3;

    cout<<findFirstOccurence(arr,0,data);


}

