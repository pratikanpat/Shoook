// Return pair in sorted array with target sum

#include <bits/stdc++.h>
using namespace std;

vector<int> pair_sum(vector<int> &nums, int target){
    vector<int> ans ;
    int n = nums.size();

    int i = 0, j = n-1;

    while(i < j){
        int pairSum = nums[i] + nums[j]; //addtion of the pair
        if (pairSum > target){
            j--;
        }
        else if (pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums= {2, 7, 11, 15};
    int target = 18;

    vector<int> ans = pair_sum(nums, target);
    cout<<ans[0] <<", "<<ans[1];

    return 0;
}