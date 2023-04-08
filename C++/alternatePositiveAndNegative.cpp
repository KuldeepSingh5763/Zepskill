#include<iostream>
#include<array>
#include<vector>
using namespace std;

int main(){
    int arr[] = {9,4,-2,-1,5,0,-5,-3,2};
    int n =  sizeof(arr)/sizeof(arr[0]);
    vector<int>pos,neg;
        for(int j=0; j<n; j++){
            if(arr[j]>=0){
                pos.push_back(arr[j]);
            }
            else{
                neg.push_back(arr[j]);
            }
        }

        int i=0,j=0,k=0;
        while(i < neg.size() && j <pos.size()){
            arr[k++] = pos[j++];
            arr[k++] = neg[i++];
        }
        while(j< pos.size()){
            arr[k++]=pos[j++];
        }
        while(i<neg.size()){
            arr[k++] = neg[i++];
        }




    for(int i=0; i<n;i++){
        cout<<arr[i]<<"    ";
    }

}
