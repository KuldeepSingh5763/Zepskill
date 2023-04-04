
#include<iostream>
#include<vector>
using namespace std;

void  result(vector<int>&a,vector<int>&b){
int m=a.size();
int n=b.size();
int i=m-1;
int j=n-1;
int barrow=0,diff;

vector<int>res1(max(m,n) , 0);
int k=res1.size()-1;


while(k>=0){
    diff=barrow;
    if(i>=0){
        diff+=a[i];
        i--;
    }
    if(j>=0){
        diff-=b[j];
        j--;
    }
    if(diff<0){
        diff+=10;
        barrow=-1;
    }
    else{
        barrow=0;
    }

    res1[k]=diff;
    k--;


}

cout<<"Result : ";
for(int i=0;i<res1.size();i++){
    cout<<res1[i]<<" ";
}
}


int main(){

int firstArr,secArr;

cout<<"Enter size of Arrays :";
cin>>firstArr;
cin>>secArr;

vector<int> firstArray(firstArr);
vector<int> secArray(secArr);

cout<<"Enter element of first Array :";
for(int i=0;i<firstArr;i++){
    cin>>firstArray[i];
}
cout<<"Enter element of first Array :";
for(int i=0;i<secArr;i++){
    cin>>secArray[i];
}
result(firstArray ,secArray);


}
