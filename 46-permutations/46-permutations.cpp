class Solution {
public:
    void perm(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int map[]){
        if (ds.size()==arr.size()){
            ans.push_back(ds);
            return;
        }
        
        for (int i = 0; i<arr.size(); i++){
            if (!map[i]){
                ds.push_back(arr[i]);
                map[i]=1;
                perm(arr,ans,ds,map);
                ds.pop_back();
                map[i]=0;
            }
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        int map[n];
        for (int i = 0; i<n; i++) map[i] = 0;
        perm(nums,ans,ds,map);
        return ans;
    }
};