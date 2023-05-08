#include<iostream>
#include<string>
using namespace std;

int allArrangeCombination(int box, int idx, int qpsf, int tnq, string ans){
    if(qpsf == tnq){   // tnq = total number of queen ,   qpsf = queen place so far
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=idx;i<box;i++){
         count+=allArrangeCombination(box , i+1, qpsf+1, tnq , ans+'b'+to_string(i) + 'q' + to_string(qpsf));
    }
    return count;
}

int main(){
    cout<<"Number of Possible Sitting Combination is = \n"<<allArrangeCombination(16,0,0,4,"")<<endl;
    return 0;
}
