// رَبِّ زِدْنِي عِلْمًا
// اے میرے رب! میرے علم میں اضافہ فرما۔

// Question Link : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/?envType=daily-question&envId=2026-11-01

#include <bits/stdc++.h>
using namespace std;

/**
 * Day 1 : Novermber 2026
 */

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int moves = 0;
        int min_elem = nums[0];
        for (int i = n-1; i >= 1; --i) {
            moves += abs(nums[i] - min_elem);
        }

        return moves;
    }
};


// another solution
class Solution {
public:
    int minMoves(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0) - ((int)nums.size())*(*min_element(nums.begin(),nums.end()));
    }
};

// another way of solving same question
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min_elem = *min_element(nums.begin(), nums.end());
        int sum = 0;
        for (int x : nums) sum += x;
        return (sum - (n * min_elem));
    }
};

auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();