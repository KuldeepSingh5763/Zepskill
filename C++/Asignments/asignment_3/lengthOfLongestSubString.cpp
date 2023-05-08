#include<iostream>
#include<string>
#include<vector>

using namespace std;

int lengthOfLongestSubstring(string s) {

    int n=s.length();
        if(n<=1){
            return n;
        }
        int si=0,ei=0,len=0,count=0;
        vector<int>map(128,0);
        while(ei<n){
            if(map[s[ei++]]++ > 0){
                count++;
            }
            while(count>0){
                if(map[s[si++]]-- > 1){
                    count--;
                }
            }
            len = max(len , ei-si);
        }
        return len;
}

int main(){
        string s="abcabcbb";
        cout<<lengthOfLongestSubstring(s);

	}
