#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void minimum(vector<vector<int>> &res){
      int minele = (int)1e9;
    for(vector<int>vec : res){
        for(int ele : vec){
            minele = min(minele,ele);
        }
    }
    cout<<"Minimum Element of 2D Array : "<<minele<<endl ;
}

void maximum(vector<vector<int>> &res){
    int maxele = -(int)1e9;
    for(vector<int>vec : res){
        for(int ele : vec){
            maxele = max(maxele,ele);
        }
    }
    cout<<"Maximum Element of 2D Array : "<<maxele <<endl;

}
void input(vector<vector<int>> &res, int m , int n){
    cout<<"Enter the value of 2D array  ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>res[i][j];
        }
    }
}

void display(vector<vector<int>> &res){
    for(int i=0 ; i<res.size() ; i++){
        for(int j=0 ; j<res[0].size() ; j++){
            cout<<res[i][j] << " " ;
        }
        cout<<endl;
    }
    maximum(res);
    minimum(res);
}

int main(){
    int m,n;
    cout<<"Enter the size of row  ";
    cin>>m;
    cout<<"Enter the size of column ";
    cin>>n;
    vector<vector<int>>res(m,vector<int>(n));

    input(res,m,n);
    display(res);


}
