#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findSubseq(string ques, string ans){
    if(ques.length() == 0){
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    count+=findSubseq(ques.substr(1),ans + ques[0]);  // include
    count+=findSubseq(ques.substr(1), ans);  // exclude

    return count;

}

int main(){

    cout<<findSubseq("abc" , "");
    return 0;

}




