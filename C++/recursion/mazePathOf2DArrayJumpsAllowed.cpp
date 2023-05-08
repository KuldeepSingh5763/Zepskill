#include<iostream>
#include<vector>
#include<string>
using namespace std;
// one or more Step Can Go And go only these direction (horizontal,vertical,diagonal)

int mazePathWithJumps(int sr,int sc,int er,int ec, string ans){
    if(sr == er && sc == ec){
        cout<<ans<<endl;
        return 1;
    }
    int c = 0;

    if(sc+1 <= ec){
        c+=mazePathWithJumps(sr,sc+1,er,ec,ans+"H");
    }
    if(sr+1 <= er){
        c+=mazePathWithJumps(sr+1,sc,er,ec,ans+"V");

    }
    if(sr+1 <= er && sc+1 <= ec){
        c+=mazePathWithJumps(sr+1,sc+1,er,ec,ans+"D");
    }

    for(int i=2;i<=er && i<=ec ; i++){
        if(sc+i <= ec){
            c+=mazePathWithJumps(sr,sc+i,er,ec,ans+"H");
        }
        if(sr+i <= er){
            c+=mazePathWithJumps(sr+i,sc,er,ec,ans+"V");
        }
        if(sr+i <= er && sc+i <= ec){
            c+=mazePathWithJumps(sr+i,sc+i,er,ec,ans+"D");
        }
    }
    return c;
}

int main(){
    int row,col;
    cout<<"Enter Row & Column  ";
    cin>>row>>col;
    int x = mazePathWithJumps(0,0,row-1,col-1,"");
    cout<<"Number Of Ways is = "<<x;
    return 0;
}

