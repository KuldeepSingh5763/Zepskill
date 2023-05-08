#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Pattern : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>1;j--){
            cout<<"  ";
        }
        for(int j=1;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--){
        for(int j=n;j>1;j--){
            if(i==n){
            cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int j=i;j>=1;j--){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }

}
