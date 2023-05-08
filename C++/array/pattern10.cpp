#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of pattern :";
    cin>>n;
    int outerSpace=n/2,innerSpace=-1;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=outerSpace;col++){
            cout<<" "<< " ";
        }
        cout<<"*"<<" ";
        for(int col=1;col<=innerSpace;col++){
            cout<<"*"<<" ";
        }
        if(row>1 && row<n){
            cout<<"*"<<" ";
        }
    if(row <=n/2){
            outerSpace--;
            innerSpace+=2;
        }else{
            outerSpace++;
            innerSpace-=2;
        }
        cout<<endl;
    }
}
