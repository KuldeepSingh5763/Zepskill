#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isvowel(char c){
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
            return true;
        }
        else{
            return false;
        }
}
int maxVowels(string s, int k) {
    int n=s.length();
    int si=0,ei=0,vcount=0,maxi=0;
    vector<int>map(128,0);
    while(ei<n){
        if(isvowel(s[ei++])){
            vcount++;
        }
        if(ei-si == k){
            maxi = max(maxi,vcount);
            if(isvowel(s[si++])){
                vcount--;
            }
        }
    }
    return maxi;
}
int main(){

    int k;
    cout<<"Enter the Length : ";
    cin>>k;
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"Max Length of Vowel = "<<maxVowels(str,k);
}
