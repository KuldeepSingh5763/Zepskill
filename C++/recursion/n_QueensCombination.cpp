#include<iostream>
#include<vector>

using namespace std;

bool isSafeToPlaceQueen(vector<vector<bool>>box, int row, int col){
    vector<vector<int>>dir = {{0,-1},{-1,0},{-1,-1},{-1,1}};
    for(int d = 0; d<dir.size();d++){
        for(int rad = 1; rad <box.size(); rad++){
            int x = row + rad*dir[d][0];
            int y = col + rad*dir[d][1];

            if(x>=0 && y>=0 && x<box.size() && y<box[0].size()){
                if(box[x][y]){
                    return false;
                }
            }
            else{
                break;
            }
        }
    }
    return true;
}

int nqueens(vector<vector<bool>>box, int idx, int qpsf, int tnq, string ans){
    if(qpsf == tnq){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    int n = box[0].size();
    for(int i=idx; i<n*n;i++){
        int row = i/n;
        int col = i%n;
        if(isSafeToPlaceQueen(box,row,col)){
            box[row][col] = true;
            count+=nqueens(box, i+1, qpsf+1, tnq, ans + "(" + to_string(row) + "," + to_string(col) + ")" );
            box[row][col] = false;
        }
    }
    return count;

}

int main(){

    vector<vector<bool>>box(4,vector<bool>(4,false));
    cout<<nqueens(box, 0, 0, 4, "")<<endl;
    return 0;

}
