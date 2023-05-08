#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,data,temp=false;
    cout<<"Enter the size of row  ";
    cin>>m;
    cout<<"Enter the size of column ";
    cin>>n;
    cout<<"Enter the Data ";
    cin>>data;
    cout<<"Enter the value of 2D array  ";
    vector<vector<int>>res(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>res[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(data==res[i][j]){
                temp=true;
            }
        }
    }
    cout<<temp;
}

