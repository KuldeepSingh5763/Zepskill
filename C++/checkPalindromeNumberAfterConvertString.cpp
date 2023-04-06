#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(int x) {
        string str = to_string(x);
        reverse(str.begin(),str.end());
        return to_string(x)==str;
}

int main(){
    int num;
    cout<<"Enter the Number : " ;
    cin>>num;

    cout<<"Number is Palindrome = "<<isPalindrome(num);
    return 0;
}
