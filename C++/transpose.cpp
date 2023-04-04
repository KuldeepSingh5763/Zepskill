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
    vector<vector<int>>transpose(m,vector<int>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>transpose[i][j];
        }
    }

     vector<vector<int>>res;
        for(int i=0 ; i < n ; i++){
            vector<int>ans;
            for(int j=0 ; j < m ; j++){
                ans.push_back(transpose[j][i]);
            }
            res.push_back(ans);
        }

        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j] << " " ;
        }
        cout<<endl;
    }

}



