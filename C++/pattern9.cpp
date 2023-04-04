#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int outerSpacing=n/2 , innerSpacing=-1;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=outerSpacing;col++){
            cout<<" "<<" ";
        }
        cout<<"*"<<" ";
        for(int col=1;col<=innerSpacing;col++){
            cout<<" "<<" ";
        }
        if(row>1 && row<n){
            cout<<"*"<<" ";
        }
        if(row <=n/2){
            outerSpacing--;
            innerSpacing+=2;
        }else{
            outerSpacing++;
            innerSpacing-=2;
        }
        cout<<endl;
    }

}
