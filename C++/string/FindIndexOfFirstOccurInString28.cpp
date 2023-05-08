#include<iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle) {
        string str = needle;
        int index = haystack.find(str);
        return index;
    }

    int main(){
        string heystack , needle;
        cout<<"Enter First String = ";
        getline(cin, heystack);
        cout<<"Enter Second String = ";
        getline(cin,needle);

        cout<<strStr(heystack,needle);
    }
