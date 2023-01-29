/*
PLANNING:

First thoughts -> Going to be using a nested for loop because I'm going to start at index 0, compare to the rest in the array. If no match, start at index 1 and so on.
However on nested, no need to start from 0. Can start from i+1 to the next since it failed the reverse conditional so no need to check.

1. Get value of first index
2. Subtract value from target
3. If target matches next index, return indexes; if not move on to next index until you hit end
4. If still no match, move starting index and repeat steps 1 -> 3
5. When match is found, store both indeces into array and return
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> matchResult;
        int comparisonVal;

        for(int i=0; i<nums.size(); i++){
            comparisonVal = target - nums[i];

            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == comparisonVal){
                    matchResult.push_back(i);
                    matchResult.push_back(j);
                }
            }
        }

        return matchResult;
    }
};

/*
OPTIMAL:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // trivial Solution
        if (nums[0] + nums[1] == target) return {0,1};

        unordered_map<int, int> mp;
        int complement;

        for (int i = nums.size()-1; i >= 0; --i){
            complement = target - nums[i];

            if (mp.find(complement) != mp.end())
                return {mp.at(complement), i};

            mp[nums[i]] = i;
        }
        return {};
    }
};
*/