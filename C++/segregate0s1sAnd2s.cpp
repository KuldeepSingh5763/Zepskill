#include<iostream>
#include<vector>
using namespace std;
 void segregate0s1sAnd2s(vector<int> &arr){
    int n=arr.size();
    int p1 = -1, p2=n-1 , idx=0;
    while(idx<=p2){
      int temp = arr[idx];
        if(arr[idx]==0){
            ++p1;
            arr[idx]=arr[p1];
            arr[p1]=temp;
            idx++;
        }
        else if(arr[idx]==2){
            arr[idx]=arr[p2];
            arr[p2]=temp;
            p2--;
        }
        else{
            idx++;
        }
    }

cout<<"After segregating :  "<<endl;
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 }



int main(){
    vector<int>arr = {0,0,1,2,1,1,2,2,0,0,1,0,1,2,2};

    cout<<"Before Segregating : "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    segregate0s1sAnd2s(arr);
}
