#include<iostream>

using namespace std;

/// Implementation Stack without Using STL

class Mystack{
    int n=10000;
    int sz=0;
    int *arr;
    int tos= -1;
 public:
    Mystack(){
        this->arr = new int[n];
    }

    // Parameterised Constructor
    Mystack(int size){
        this->arr = new int[size];
        this->n = size;
    }

    int size(){
    return this->sz;
    }

    bool empty(){
        return sz==0;
    }

    void push( int val){
        if(tos==n){
            return;
        }
        tos++;
        sz++;
        arr[tos] = val;
    }

    void pop(){
        if(sz==0){
            return;
        }
        int rv = arr[tos];
        sz--;
        tos--;
    }
     int top(){
        if(sz==0){
            return -1;
        }
        return arr[tos];
     }

};

void solve(){
    Mystack st(5);
    for(int i=0; i<=10;i++){
        st.push(10+i);
    }

    while(st.size() != 0){
        cout<<st.top()<<"  ";
        st.pop();
    }
}


int main(){

    solve();
    return 0;
}
