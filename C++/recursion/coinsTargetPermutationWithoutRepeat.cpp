#include<iostream>
#include<vector>
#include<string>
using namespace std;

int coinsChangePermutationsWR(vector<int>coins, int tar, string ans,vector<bool>vis){
    if(tar == 0){
        cout<<ans<<endl;
        return 1;
    }
    int count =0;
    for(int i=0;i<coins.size();i++){
        if(tar-coins[i] >= 0 && vis[i] != true){
            vis[i] = true;
            count+=coinsChangePermutationsWR(coins , tar-coins[i], ans+to_string(coins[i]),vis);
            vis[i] = false;
        }
    }
    return count;
}

int main(){
    vector<int>coins = {2,3,5,7};
    int tar =10;
    vector<bool>vis(coins.size() , false);
    int n =coinsChangePermutationsWR(coins,tar,"",vis);
    cout<<"Number of Permutations Without Repetition is = "<<n;

}



