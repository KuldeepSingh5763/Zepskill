#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter number : ";
cin>>n;
for (int i=n;i>=1;i--){
    for(int j=1;j<=n;j++){
        if (i<j){
            cout<<"*"<<" ";
        }
        else{
            cout<<" "<<" ";
        }
    }
    cout<<endl;
}

// Another Method

    for(int row=5;row>=1;row--){
        int nsp=n-row;
        int nst=row;
        for(int csp=1;csp<=nsp;csp++){
            cout<<" ";
        }
        for(int cst=1;cst<=nst;cst++){
            cout<<"*";
        }
        cout<<endl;
    }
}


