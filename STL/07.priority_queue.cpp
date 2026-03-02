#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> s;

    s.push(5);
    s.push(2);
    s.push(3);

    //printing dequeue
    while( !s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }


    return 0;
}