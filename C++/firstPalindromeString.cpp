
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string firstPalindrome(vector<string>& words) {
        for(int i=0;i < words.size();i++){
            string ans = words[i];
            int si=0;
            int ei=ans.length()-1;
            while(si<ei){
                char temp = ans[si];
                ans[si] = ans[ei];
                ans[ei] = temp;
                si++;
                ei--;
            }
            if(ans == words[i]){
                return ans;
            }
        }
        return "Any String is not Palindrome in array of string";
    }

    int main(){
        int n;
        cout<<"Enter The size of String Vector : ";
        cin>>n;
        vector<string>ans(n);
        cout<<"Enter the String in vector : ";
        for(int i=0; i<n; i++){
            cin>>ans[i];
        }
        cout<<"Palindrome String is = "<<firstPalindrome(ans);
    }
