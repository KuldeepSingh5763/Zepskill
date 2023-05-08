
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the String : ";
    getline(cin,str1);

    int s=str1.length();
    for(int i=0;i<s;i++){
        for(int j=1; j<=s - i ; j++){
            cout<<str1.substr(i,j)<<endl;
        }
    }
}
