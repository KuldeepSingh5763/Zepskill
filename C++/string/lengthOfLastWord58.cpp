#include<iostream>
#include<string>

using namespace std;

int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.length() -1;
        while(i>=0 && s[i] == ' '){
            i--;
        }

        while(i>=0 && s[i] != ' '){
            count++;
            i--;
        }
        return count;
    }

    int main(){
        string str;
        cout<<"Enter any String = ";
        getline(cin, str);
        cout<<lengthOfLastWord(str);
    }

