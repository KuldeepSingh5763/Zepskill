#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string>que;
    que.push("Kuldeep");
    que.push("Singh");
    que.push("Fatehpur");
    que.push("UP");
    que.push("212641");

    cout<<que.back()<<endl;  // Rear (Back) element is = 212641

    cout<<que.size()<<endl;  // Size of Queue is = 5


    while(!que.empty()){
        cout<<que.front()<<"   ";  // Kuldeep   Singh  Fatehpur   UP  212641
        que.pop();
    }
    return 0;

}
