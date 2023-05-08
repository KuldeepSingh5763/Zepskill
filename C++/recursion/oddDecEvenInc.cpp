#include<iostream>
using namespace std;

//void oddEven(int a , int n){
  //  if(n<a) return;
    //if(n%2 == 0){
      //  oddEven(1,n-1);
        //cout<<n<<endl;
   // }
    //else{
      //  cout<<n<<endl;
        //oddEven(1,n-1);
    //}

void OddEven(int a, int b)
{
    if(a==b+1) return;

    if(a%2 == 0){
        cout<<a<<endl;
    }
    OddEven(a+1,b);
    if(a%2 !=0){
        cout<<a<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter any number  = ";
    cin>>n;
    OddEven(1,n);
}
