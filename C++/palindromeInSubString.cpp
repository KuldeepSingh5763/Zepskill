#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPalindrome(string &s){
    int si=0, ei=s.length()-1;
    while(si<ei){
        if(s[si++] != s[ei--]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1;
    cout<<"Enter the String : ";
    getline(cin,str1);
    int s=str1.length();
    for(int i=0;i<s;i++){
        for(int j=1; j<=s - i ; j++){
            string s = str1.substr(i,j);

            if(isPalindrome(s)){
                cout<<s<<endl;
            }
        }
    }
}
