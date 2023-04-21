#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int numJewelsInStones(string j, string s) {

        unordered_map<char , int>map;
        int ans=0;
        for(int i=0; i<j.length(); i++){
            map[j[i]] = 1;
        }

        for(int i=0; i<s.length(); i++){
            if(map.find(s[i]) != map.end()){
                ans++;
            }
        }
        return ans;
}

int main(){
    string jewels = "Z", stones = "ZZZZklajsdlkl";

    cout<<"the stones you have are also jewels : - "<<numJewelsInStones(jewels , stones);

}
