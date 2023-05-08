#include<iostream>
#include<vector>
#include<string>
using namespace std;
int lengthOfLongestSubstringAtMostTwoCharecter(string s) {
        int n=s.length();
        int si=0,ei=0,len=0,count=0;
        vector<int>map(128,0);
        while(ei<n){
            if(map[s[ei++]]++ == 0){
                count++;
            }
            while(count>2){
                if(map[s[si++]]-- == 1){
                    count--;
                }
            }
            len = max(len , ei-si);
        }
        return len;
    }
int main(){
    string str;
    cout<<"Enter the String :";
    getline(cin,str);
    cout<<"Longest Length of substring = "<<lengthOfLongestSubstringAtMostTwoCharecter(str);
    }
