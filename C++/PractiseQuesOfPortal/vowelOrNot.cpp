#include<iostream>
#include<string>
using namespace std;

string isVowel(char c){
        // code here
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
            return "YES";
        }
        else{
            return "NO";
        }
    }

int main(){
    char c;
    cout<<"Enter any character : ";
    cin>>c;
    cout<<isVowel(c);
}
