#include<iostream>
#include<string>
using namespace std;
void reverseString(string &str){
    int n = str.length();
    int si = 0;
    int ei = n-1;
    while(si<ei){
        char temp=str[si];
        str[si]=str[ei];
        str[ei]=temp;
        si++;
        ei--;
    }
    cout<<str<<endl;
}

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
        return "";

    }


int main(){
    string str ;
    cout<<"Enter any String :";
    getline(cin,str);
    reverseString(str);
    int n;
    cout<<"Enter The size of String Vector";
    cin>>n;
    vector<string>ans;
    cout<<"Enter the String in vector :";
    for(int i=0;i<n;i++){
        getline(cin,ans[i]);
    }
    firstPalindrome(ans);
}
