#include <iostream>
#include<vector>

using namespace std;

int findElement(vector<int>arr, int n){
    bool temp=false;
    for(int j=0;j<arr.size();j++){
        if(arr[j]== n){
            temp=true;
        }
    }
    cout<<"Element present in Array or not = "<<temp<<endl;
    return 0;
}

int findMin(vector<int>arr){
    int min1=arr[0];

    for(int i=0;i<arr.size();i++){
        if(min1>arr[i]){
            min1=arr[i];
        }
    }
    cout<<"Minimum Element of array ="<<min1<<endl;

}

int findMax(vector<int>arr){
    int max1=arr[0];

    for(int i=0;i<arr.size();i++){
        if(max1<arr[i]){
            max1=arr[i];
        }
    }
    cout<<"Maximum Element of array ="<<max1<<endl;

}

int main(){
    int num;
    cout<<"Enter Number :";
    cin>>num;
    vector<int>myArr(5);
    cout<<"Enter Element of Array : ";
    for(int i=0;i<myArr.size();i++){
        cin>>myArr[i];
    }
    findElement(myArr, num);
    findMin(myArr);
    findMax(myArr);
    return 0;

}
