
#include<iostream>
#include<vector>
using namespace std;

void  result(vector<int>&a,vector<int>&b){
int n=a.size()-1;
int m=b.size()-1;
int sum,carry=0;

vector<int>thirdArray((max(n,m)+1) , 0);
int k=thirdArray.size()-1;

while(k>=0){
    sum=carry;
    if(n>=0){
        sum+=a[n];
        n--;
    }
    if(m>=0){
        sum+=b[m];
        m--;
    }
    thirdArray[k]=sum%10;
    carry=sum/10;
    k--;
}
for(int i=0;i<thirdArray.size();i++){
    cout<<thirdArray[i]<<"  ";
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
cout<<"Enter element of second Array :";
for(int i=0;i<secArr;i++){
    cin>>secArray[i];
}
result(firstArray ,secArray);


}

