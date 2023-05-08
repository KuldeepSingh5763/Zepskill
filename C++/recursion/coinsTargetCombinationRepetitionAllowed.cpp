#include<iostream>
#include<vector>
#include<string>
using namespace std;

int coinsChangeCombinationR(vector<int>coins, int tar, string ans,int idx){
    if(tar == 0){
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=idx;i<coins.size();i++){
        if(tar-coins[i] >= 0){
            count+=coinsChangeCombinationR(coins , tar-coins[i], ans+to_string(coins[i]), i);
        }
    }
    return count;
}

int main(){
    vector<int>coins = {2,3,5,7};
    int tar =10;
    int n =coinsChangeCombinationR(coins,tar,"",0);
    cout<<"Number of Combinations Repetition allowed is = "<<n;

}

