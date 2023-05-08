#include<iostream>
#include<string>
#include<vector>
using namespace std;

int allArrangepermutation(vector<bool>& box, int qpsf, int tnq, string ans){
    if(qpsf == tnq){   // tnq = total number of queen ,   qpsf = queen place so far
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=0;i<box.size();i++){
            if(box[i]!=true){
                    box[i] = true;
                count+=allArrangepermutation(box ,qpsf+1, tnq , ans+'b'+to_string(i) + 'q' + to_string(qpsf));
                box[i] = false;
            }

    }
    return count;
}

int main(){
    vector<bool>box(5,false);
    cout<<"Number of Possible Sitting permutation is = \n"<<allArrangepermutation(box,0,3,"")<<endl;
    return 0;
}

