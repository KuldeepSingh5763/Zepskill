#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the highest range limit : ";
    cin>>num;

    cout<<"All prime number between 1 to "<<num<<endl;
    for (int i=2;i<=num;i++){
        int flag=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=false;
            }
        }
        if(flag==true){
            cout<<i<<endl;
        }
    }


}
