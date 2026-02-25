#include <bits/stdc++.h>
using namespace std;

void changeA(int &b){ //alias
    b = 20;
}

int main() {
    int a = 10;

    changeA(a); 

    cout<<"change in int main : "<< a << endl; //20

    return 0;
}