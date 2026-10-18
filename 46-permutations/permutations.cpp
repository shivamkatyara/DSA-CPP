
class Solution {
public:
    void getpermutation(vector<int>& nums, vector<int>& ans,vector<vector<int>>& all, vector<bool>& used)
    {
        if(ans.size() == nums.size())
        {
            all.push_back(ans);
            return;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(!used[i])
            {
                used[i] = true;
                ans.push_back(nums[i]);

                getpermutation(nums, ans, all, used);

                ans.pop_back();
                used[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>> all;
        vector<int> ans;
        vector<bool> used(nums.size(), false);

        getpermutation(nums, ans, all, used);

        return all;
    }
};
