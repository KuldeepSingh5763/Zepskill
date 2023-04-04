#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of Pattern : ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for (int k = 0; k < (n - i) * 2 - 1; k++) {
            cout << "*"<<" ";
        }
       cout<<"\n";
    }
     for (int i = 2; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        for (int k = 0; k < i * 2 - 1; k++) {
            cout << "*"<<" ";
        }
        cout << "\n";
    }
  return 0;
}
