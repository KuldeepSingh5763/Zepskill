#include<iostream>
#include<vector>
#include<string>
using namespace std;

int mazePath(int sr,int sc,int er,int ec, string ans){
    if(sr == er && sc == ec){
        cout<<ans<<endl;
        return 1;
    }
    int c = 0;

    if(sc+1 <= ec){
        c+=mazePath(sr,sc+1,er,ec,ans+"H");
    }
    if(sr+1 <= er){
        c+=mazePath(sr+1,sc,er,ec,ans+"V");

    }
    if(sr+1 <= er && sc+1 <= ec){
        c+=mazePath(sr+1,sc+1,er,ec,ans+"D");
    }
    return c;
}

int main(){
    int row,col;
    cout<<"Enter Row & Column  ";
    cin>>row>>col;
    int x = mazePath(0,0,row-1,col-1,"");
    cout<<"Number Of Ways is = "<<x;
    return 0;
}
