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
            cout<<j<<" ";
            }
        }
        for(int j=i+1;j<n;j++){
            cout<<" "<<" ";
        }
        int a=i;
        if(cst>=1){
            for(int j=1;j<=n;j++){
                if (cst<=j){
                    cout<<a<<" ";
                    a--;
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
