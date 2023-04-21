#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;

        for(int ele : arr){
            map[ele]++;
        }

        unordered_set<int>set;

        for(auto keyval : map){
            int value = keyval.second;
            if(set.find(value) != set.end()){
                return false;
            }
            else{
                set.insert(value);
            }
        }
        return true;
    }

int main(){
    vector<int>arr = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);

}
