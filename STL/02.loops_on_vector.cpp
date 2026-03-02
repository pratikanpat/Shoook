//forward loop
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
//     vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7, 8};

//     vector<int> :: iterator ite;
//     for ( ite = vec.begin(); ite!=vec.end(); ite++){
//         cout <<"Forward : "<< *(ite) << " "<<endl;
//     }

//     return 0;
// }

//forward and backward loop
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7, 8};

    cout<<"Forward : ";
    for (auto it = vec.begin(); it!=vec.end(); it++){
        cout << *(it) << " ";
    }
    cout<< endl;

    cout<<"Backward : ";
    for (auto it = vec.rbegin(); it!=vec.rend(); it++){
        cout << *(it) << " " ;
    }

    return 0;
}