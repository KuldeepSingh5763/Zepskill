#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;

        int dir=1;
        vector<int>ans;

        while(left<=right && top <=bottom){
            if(dir == 1){
                for(int i=left;i<=right;i++){
                    ans.push_back(mat[top][i]);
                }
                dir = 2;
                top++;
            }
            else if(dir == 2){
                for(int i=top;i<=bottom;i++){
                    ans.push_back(mat[i][right]);
                }
                dir=3;
                right--;
            }
             else if(dir == 3){
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bottom][i]);
                }
                dir=4;
                bottom--;
            }
             else if(dir ==4){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                }
                dir=1;
                left++;
            }
        }
        return ans;
    }

int main(){
    int row, col;
    cout<<"Enter the row of Matrix  : ";
    cin>>row;
    cout<<"Enter the column of Matrix : ";
    cin>>col;

    vector<vector<int>>mat(row,vector<int>(col,0));
    cout<<"Enter the element of Matrix : ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>mat[i][j];
        }
    }
    vector<int>ans = spiralOrder(mat);
    cout<<"Spiral Matrix is = ";
    for(int i:ans){
        cout<<i<<" ";
    }
}
