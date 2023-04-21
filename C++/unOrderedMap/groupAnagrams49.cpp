#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

 vector<vector<string>> groupAnagrams(vector<string>& words) {
        unordered_map<string, vector<string>>map;
        vector<vector<string> >ans;
        for (string str : words)
        {
            string key = str;
            sort(key.begin(), key.end());
            map[key].push_back(str);
        }
        for (auto n : map){
            ans.push_back(n.second);
        }

        return ans;
    }

    int main(){
        vector<string>strs = {"eat","tea","tan","ate","nat","bat"};

        vector<vector<string>>ans = groupAnagrams(strs);


        for(auto ele : ans){
                for(auto a : ele){
                    cout<<a<<"   ";
                }
                cout<<endl;
        }

    }


