#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int permutations(string ques,string ans){
    if(ques.length() == 0){
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    vector<bool>vis(26,0);
    for(int i=0; i<ques.length();i++){
        char ch = ques[i];
        if(!vis[ch - 'a']){
            vis[ch - 'a'] = true;
            string ros= ques.substr(0,i) + ques.substr(i+1);
            count+=permutations(ros,ans+ch);
        }

    }
    return count;
}
int main(){
    cout<<permutations("aba","");
}


