#include<iostream>
#include<string>
#include<vector>
using namespace std;

int allArrange2DCombination(vector<vector<bool>>box, int idx, int qpsf, int tnq, string ans){
    if(qpsf == tnq){   // tnq = total number of queen ,   qpsf = queen place so far
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=idx;i<box.size()*box[0].size();i++){
         count+=allArrange2DCombination(box , i+1, qpsf+1, tnq , ans+'b'+'('+to_string(i/box[0].size()) +to_string(i%box[0].size())+ ')' + 'q' + to_string(qpsf));
    }
    return count;
}

int main(){
    vector<vector<bool>>box(4,vector<bool>(4,false));
    cout<<"Number of Possible Sitting 2D Combination is = \n"<<allArrange2DCombination(box,0,0,4,"")<<endl;
    return 0;
}

