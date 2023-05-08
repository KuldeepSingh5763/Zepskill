#include<iostream>
#include<vector>
#include<string>
using namespace std;

int coinsChangeCombinationWR(vector<int>coins, int tar, string ans,int idx){
    if(tar == 0){
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=idx;i<coins.size();i++){
        int idx = i+1;
        if(tar-coins[i] >= 0){
            count+=coinsChangeCombinationWR(coins , tar-coins[i], ans+to_string(coins[i]),idx);
        }
    }
    return count;
}

int main(){
    vector<int>coins = {2,3,5,7};
    int tar =10;
    int n =coinsChangeCombinationWR(coins,tar,"",0);
    cout<<"Number of Combinations Without Repetition is = "<<n;

}
