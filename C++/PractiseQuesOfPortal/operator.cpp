#include<iostream>
#include<vector>
using namespace std;

vector<int> cppOperators(int A, int B) {
        // code here
        vector<int>r(4);
        r[0]=A+B;
        r[1]=A*B;
        if(B>A){
           r[2]=B-A;
           r[3]=B/A;
        }
        else{
           r[2]=A-B;
           r[3]=A/B;
        }
    return r;
}
int main(){
    int A=1, B=2;
    vector<int>ans = cppOperators(A,B);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
}
