#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,max1=-(int)1e9;
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
        for(int j=0;j<n;j++){
            if(max1<res[i][j]){
                max1=res[i][j];
            }
        }
    }
    cout<<max1;
}
