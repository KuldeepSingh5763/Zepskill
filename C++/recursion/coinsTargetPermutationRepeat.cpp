#include<iostream>
#include<vector>
#include<string>
using namespace std;

int coinsChangePermutationsR(vector<int>coins, int tar, string ans){
    if(tar == 0){
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=0;i<coins.size();i++){
        if(tar-coins[i] >= 0){
            count+=coinsChangePermutationsR(coins , tar-coins[i], ans+to_string(coins[i]));
        }
    }
    return count;
}

int main(){
    vector<int>coins = {2,3,5,8};
    int tar =10;
    int n =coinsChangePermutationsR(coins,tar,"");
    cout<<"Number of Permutations Repetition allowed is = "<<n;

}
