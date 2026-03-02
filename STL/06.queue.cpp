#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> s;

    s.push(5);
    s.push(2);
    s.push(3);

    //printing queue
    while( !s.empty()){
        cout<< s.front() << " ";
        s.pop();
    }


    return 0;
}