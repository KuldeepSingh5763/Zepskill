#include<iostream>
#include<string>
#include<vector>
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

int main(){
    string str ;
    cout<<"Enter any String :";
    getline(cin,str);
    reverseString(str);
}
