#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<string, int> p = {"Pratik", 20};
    cout<< p.first << endl;
    cout<< p.second << endl;

    pair<int, pair<string, char>> p2 = {1, {"Diksha", 'g'}};
    cout<< p2.first << endl;
    cout<< p2.second.first << endl;
    cout<< p2.second.second << endl;



    return 0;
}

