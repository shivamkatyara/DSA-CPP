class Solution {
public:

    void getsubsets(vector<int>& nums,vector<vector<int>> &allsubsets,vector<int> &ans,int i){
        if(i==nums.size()){
            allsubsets.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        getsubsets(nums,allsubsets,ans, i+1);


        ans.pop_back();
        int index=i+1;
        while(index< nums.size() && nums[index]== nums[index -1]){
            index++;
        }
        getsubsets(nums,allsubsets,ans, index);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsubsets;
        vector<int> ans;

        getsubsets(nums, allsubsets, ans, 0);

        return allsubsets;
    }
};