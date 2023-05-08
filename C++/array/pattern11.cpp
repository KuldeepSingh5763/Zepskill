#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Pattern : ";
    cin>>n;

    int sp=n/2,st=1,i=1;

    for(int row=1;row<=n;row++){
        for(int col=1;col<=sp;col++){
            cout<<" "<<" ";
        }
        int temp=i;
        for(int col=1;col<=st;col++){
            cout<<temp<<" ";
            if(col<=st/2){
                    temp++;
            }
            else{
                temp--;
            }
        }

        if(row<=n/2){
            st+=2;
            sp--;
            i++;
        }
        else{
            sp++;
            st-=2;
            i--;
        }
        cout<<endl;
    }


}
