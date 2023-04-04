#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=n;col>=1;col--){
            if(row>=col){
                cout<<"*"<<" ";
            }else{
            cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
