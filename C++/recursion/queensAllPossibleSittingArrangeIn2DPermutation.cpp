#include<iostream>
#include<string>
#include<vector>
using namespace std;

int allArrange2DPermutation(vector<vector<bool>>box,int qpsf, int tnq, string ans){
    if(qpsf == tnq){   // tnq = total number of queen ,   qpsf = queen place so far
        //cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=0;i<box.size()*box[0].size();i++){
            int r = i/box[0].size();
            int  c= i%box[0].size();
            if(!box[r][c]){
                box[r][c] = true;
                count+=allArrange2DPermutation(box ,qpsf+1, tnq , ans+'b'+'('+to_string(i/box[0].size()) +to_string(i%box[0].size())+ ')' + 'q' + to_string(qpsf));
                box[r][c] = false;
            }
    }

    return count;
}

int main(){
    vector<vector<bool>>box(4,vector<bool>(4,false));

    cout<<"Number of Possible Sitting 2D Permutation is = \n"<<allArrange2DPermutation(box,0,4,"")<<endl;
    return 0;
}


