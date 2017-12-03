/*时间复杂度O(N) 空间复杂度O(N)*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> res;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i)
        {
            int val = target - nums[i];
            if (hash.find(val) != hash.end())
            {
                res.push_back(hash[val]);
                res.push_back(i);
                return res;
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};

/*时间复杂度O(N^2) 空间复杂度O(1)*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> res;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};