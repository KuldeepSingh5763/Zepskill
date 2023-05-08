#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int cst=n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==n){

            }
            else{
            cout<<1<<" ";
            }
        }
        for(int j=i+1;j<n;j++){
            cout<<" "<<" ";
        }
        if(cst>=1){
            for(int j=1;j<=n;j++){
                if (cst<=j){
                    cout<<1<<" ";
                }
                else{
                    cout<<" "<<" ";
                }

            }
            cst--;
        }

        cout<<endl;
    }

}

