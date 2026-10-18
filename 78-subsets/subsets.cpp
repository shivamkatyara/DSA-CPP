class Solution {
public:

    void getsubsets(vector<int>& nums, int i , vector<int>& ans,vector<vector<int>> &allsubsets){
        if(i== nums.size()){
            allsubsets.push_back({ans});
        return;
        }
        

    ans.push_back(nums[i]);
    getsubsets(nums, i+1 ,ans, allsubsets);


    ans.pop_back();
    getsubsets(nums, i+1 ,ans, allsubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;

        getsubsets(nums,0,ans,allsubsets);

        return allsubsets;
    }
};