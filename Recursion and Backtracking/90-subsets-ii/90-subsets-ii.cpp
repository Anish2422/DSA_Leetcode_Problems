class Solution {
public:
    void subset(int ind, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
         
        ans.push_back(ds);

        for(int i = ind;i<arr.size();i++) {
            if(i>ind && arr[i]==arr[i-1]) continue; 
            ds.push_back(arr[i]);
            subset(i+1, arr, ans, ds); 
            ds.pop_back(); 
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // FOR QUESTIONS THAT REQUIRE UNIQUE SUBSETS or COMBINATIONS, THE GIVEN ARRAY SHOULD ALWAYS BE SORTED
        vector<vector<int>> ans;
        vector<int> ds;
        subset(0,nums,ans,ds);
        return ans;
    }
};