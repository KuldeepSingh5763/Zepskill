#include <iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<<"Enter number";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<i<<" ";
            i++;
        }
        cout<<endl;
    }
    return 0;
}
