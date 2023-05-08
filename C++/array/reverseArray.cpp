#include<iostream>
#include<vector>
using namespace std;
    void reverseArray(vector<int> & myArray,int temp,int n){

     for(int i=0;i<(myArray.size())/2;i++){
        temp=myArray[i];
        myArray[i]=myArray[n-1];
        myArray[n-1]=temp;
        n--;
    }
    for(int j=0;j<myArray.size();j++){
        cout<<myArray[j]<<" ";
    }
}


int main(){

    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    vector<int>myArray(n);
    cout<<"Enter Element of Array : ";
    for(int j=0;j<myArray.size();j++){
        cin>>myArray[j];
    }
    reverseArray(myArray,0,n);

}
