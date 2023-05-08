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
        for(int j=0;j<n;j++){
            cout<<res[i][j] << " " ;
        }
        cout<<endl;
    }

    int a= res.size();
    int b=res[0].size();
    int c=0;
    vector<vector<int>>ans(b, vector<int>(a,0));
    for(int i=a-1;i>=0;i--){
         int r=0;
         for(int j=0;j<b;j++){
                ans[r][c]=res[i][j];
                r++;
            }
            c++;
        }
    cout<<"After Rotating 90 Degree :"<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<ans[i][j] << " " ;
        }
        cout<<endl;
    }
}
