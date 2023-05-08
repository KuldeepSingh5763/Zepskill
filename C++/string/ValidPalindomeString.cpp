#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalindrome(string s) {
        int si=0, ei=s.size()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(si<ei){
            if(!((s[si]>='a' && s[si]<='z')|| (s[si]>='0' && s[si]<='9'))){
                si++;
                continue;
            }
            if(!((s[ei]>='a' && s[ei]<='z')|| (s[ei]>='0' && s[ei]<='9'))){
                ei--;
                continue;
            }
            if(s[si] != s[ei]){
                return false;
            }
            si++;
            ei--;
        }
        return true;

    }

    int main(){
        string str;
        cout<<"Enter Any String : " ;
        getline(cin,str);

        cout<<"Entered String is Palindrome = "<<isPalindrome(str);
    }
