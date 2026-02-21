//for each

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>vec = {1, 2, 3, 4};
    for(int val : vec){
        cout << val << endl;
    }

    return 0;
}

//to find the single number
#include <bits/stdc++.h>
using namespace std;

int singleNumber(const vector<int>& vec){
    int ans = 0;
    for(int val : vec){
        ans ^= val;
    }
    return ans;
}

int main() {
    vector<int>vec = {4, 2, 1, 2, 1};

    cout<<singleNumber(vec);

    return 0;
}