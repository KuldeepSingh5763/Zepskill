#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of row  ";
    cin>>m;
    cout<<"Enter the size of column ";
    cin>>n;
    cout<<"Enter the value of 2D array  ";
    vector<vector<int>>res(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>res[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<res[i][j]<<" ";
            }
        }else{
            for(int j=n-1;j>=0;j--){
                cout<<res[i][j]<<" ";
            }
        }
    }
}


