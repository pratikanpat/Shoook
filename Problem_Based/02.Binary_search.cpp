//two methods 
//1. Iterative
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> vec, int target){
    int st = 0;
    int end = vec.size()-1;

    while(st <= end){
        int mid = (st + end) / 2;
        if(target > vec[mid]){
            st = mid + 1;
        }
        else if (target < vec[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1; //incase element not found
}

int main() {
    vector<int>  odd = {-1, 0, 3, 4, 5,  9, 12};
    int oTarget = 3; 
    cout<< "Odd : "<<binarySearch(odd, oTarget)<<endl;

    vector<int> even = {1, 2, 3, 4, 5, 6, 7, 8};
    int eTarget = 7;
    cout<< "Even : "<<binarySearch(even, eTarget)<<endl;

    return 0;
}

// 2. Resursive
// in this we repeatedly call the function
#include <bits/stdc++.h>
using namespace std;

int binarySearch (vector<int>& vec, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end - st) / 2;

        if( tar > vec[mid]){
            return binarySearch(vec, tar, mid+1, end);
        }
        else if (tar < vec[mid]){
            return binarySearch(vec, tar, st, mid-1);
        }
        else return mid;
    }

    return -1;
}

int main() {
    vector<int>  odd = {-1, 0, 3, 4, 5,  9, 12};
    int oTarget = 3; 
    cout<< "Odd : "<<binarySearch(odd, oTarget, 0, odd.size()-1)<<endl;

    vector<int> even = {1, 2, 3, 4, 5, 6, 7, 8};
    int eTarget = 7;
    cout<< "Even : "<<binarySearch(even, eTarget, 0, even.size()-1)<<endl;

    return 0;
}