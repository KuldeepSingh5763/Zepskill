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
        for(int j=i;j<s;j++){
            for(int k=i;k<=j;k++){
                cout<<str1[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }

}
