#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;   //unordered_map - to get non lexicographical order

    m["Headphones"] = 1000;
    m["Mobile"] = 10;
    m["imac"] = 200;
    m["zfold"] = 99;
    m["acer"] = 45;

    //printing it
    cout<<"Before insertion"<<endl;
    for(auto val : m){
        cout << val.first <<" "<< val.second<< endl;  //as these are also the pairs
    }
    cout<<"M at Mobile : " << m.at("Mobile");

    cout<<"After insertion"<<endl;
    m.insert({"dell", 35});
    for(auto val : m){
        cout << val.first <<" "<< val.second<< endl;  //as these are also the pairs
    }

    // cout << " " << m.find("Mobile");
    cout << "count : " << m.count("acer") <<endl;
    cout << "Size : " << m.size() <<endl;

    cout << "erase : " << m.erase("acer")<< endl ;

    cout << "Size : " << m.size() <<endl;
    cout << "empty : " << m.empty() <<endl;


    return 0;
}

//output gets into the lexicographicl order. in the alphabetical order of the keys

// m.lower_bound(key);  // first >= key
// m.upper_bound(key);  // first > key