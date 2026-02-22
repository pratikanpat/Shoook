//majority element - brute force - O(n^2)
#include <bits/stdc++.h>
using namespace std;

int majorEle (vector<int> &nums){
    int n = nums.size();

    for(int val : nums){
        int frequency = 0;
        for(int el : nums){
            if(el == val){
                frequency++;
            }
        }
        if (frequency > n/2){
            return val;
        }
    }
}

int main() {
    vector<int> nums = {1, 3, 2, 2, 2, 2};

    cout<<majorEle(nums);

    return 0;
}


//Optimized
//1. Soting array - O(n logn)
//2. Applying for loop O(n)
// total = addition of both give O(n logn)
#include <bits/stdc++.h>
using namespace std;

int majorEle(vector<int>&nums){
    int n = nums.size();

    //sorting array
    sort(nums.begin(), nums.end());

    //frq count
    int ans = nums[0];
    int frquency = 1;
    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            frquency++;
        } else{
            frquency = 1;
            ans = nums[i];
        }
        if(frquency > n/2){
            return ans;
        }
    }
    return -1; //if no majority element appears
}

int main() {
    vector<int> nums = {1, 3, 3, 3, 3, 2, 2};

    cout<<majorEle(nums);

    return 0;
}