#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s;
    cout<<"Enter Size of Array : ";
    cin>>s;
    vector<int>arr(s,0);
    cout<<"Enter Element of Array :"<<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<"SubArray of Arrays :"<<endl;
    for(int i=0;i<s;i++){
        for(int j=i;j<s;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
