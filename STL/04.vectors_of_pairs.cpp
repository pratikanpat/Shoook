#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string, int>> vec = {{"Pratik", 20}, {"Diksha", 21}, {"Sakshi", 22}};

    vec.push_back({"Aman", 19});
    vec.emplace_back("Aditi", 24);

    for (pair<string, int> p : vec){
        cout << p.first << " " <<  p.second << endl ;
    }

    return 0;
}