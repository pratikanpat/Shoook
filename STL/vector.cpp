#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>vec = {10, 20};

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.pop_back();

    vec.front();

    for (int val : vec){
        cout << val << " "<<endl;
    }

//     if (!vec.empty()) {
//     cout << vec.front() << endl;
// }

    vec.erase(vec.begin() + 1);
    vec.insert(vec.begin() +3, 40);

    cout<< "After erase: ";
    for (int val : vec){
        cout << val << " "<<endl;
    }

    cout<< "Is empty: "<< vec.empty() << endl;

    return 0;
}