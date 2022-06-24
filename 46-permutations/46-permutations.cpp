class Solution {
public:
//     // APPROACH 1
//     void perm(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int map[]){
//         if (ds.size()==arr.size()){
//             ans.push_back(ds);
//             return;
//         }
        
//         for (int i = 0; i<arr.size(); i++){
//             if (!map[i]){
//                 ds.push_back(arr[i]);
//                 map[i]=1;
//                 perm(arr,ans,ds,map);
//                 ds.pop_back();
//                 map[i]=0;
//             }
            
//         }
    
        // APPROACH 2
    
        void perm(int ind, vector<int> &arr, vector<vector<int>> &ans){
            
        if (ind == arr.size()){
            ans.push_back(arr);
            return;
        }
        
        for (int i = ind; i<arr.size(); i++){
            swap(arr[ind],arr[i]);
            perm(ind+1, arr, ans);
            swap(arr[ind],arr[i]);
        }
    
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // //APPROACH 1
        // vector<int> ds;
        // int n = nums.size();
        // int map[n];
        // for (int i = 0; i<n; i++) map[i] = 0;
        // perm(nums,ans,ds,map);
        
        perm(0,nums,ans);
        return ans;
    }
};