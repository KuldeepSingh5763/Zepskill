#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number :";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(row==col || row+col==n+1){
                cout<<"*"<<" ";
            }else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}
