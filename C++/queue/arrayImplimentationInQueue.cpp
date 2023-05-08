#include<iostream>

using namespace std;

class Myqueue{
    int *arr;
    int f;
    int b;
    int elements;
    int totalSize;

    protected:
    void assignSize(int n){
        this->arr = new int[n];
        this->f =0;
        this->b =0;
        this->elements =0;
        this->totalSize =n;
    }
public:
    Myqueue(){
        assignSize(10);
    }

    Myqueue(int n){
        assignSize(n);
    }

    bool isEmpty(){
        return this->elements == 0;
    }

    int size(){
        return this->elements;
    }
    void push(int val){
        if(this->elements == this->totalSize){
            return;
        }
        this->arr[this->b] = val;
        this->b = this->b +1;
        this->elements++;
    }

    int front(){
        if(this->elements == 0){
            return -1;
        }
        return this->arr[this->f];
    }
     int pop(){
        if(this->elements == 0){
            return -1;
        }
        int rv = this->arr[this->f];
        this->arr[this->f] = 0;
        this->f = this->f + 1;
        this->elements--;
        return rv;
     }
};
     void display(){
        //
     }
     void solve(){
        Myqueue que;
        que.push(10);
        que.push(20);
        que.push(30);
        que.push(40);
        que.push(50);
        que.push(60);

        que.pop(); // 10 is removed from front of queue

        que.push(5);  // 5 is added to last of queue

        while(!que.isEmpty()){
            cout<<que.front()<<"  ";  // 20  30  40  50  60 5
            que.pop();

        }
     }

int main(){
    solve();
    return 0;
}
