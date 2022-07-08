class Solution {

public:
    void pal(int ind, string s, vector<vector<string>> &ans, vector<string> &ds){
        
        if (ind==s.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i = ind; i<s.size(); i++){
            if(isPal(s, ind, i)){
                ds.push_back(s.substr(ind, i - ind + 1));
                pal(i+1,s,ans,ds);
                ds.pop_back();
            }
        
        }
        
    }
    
    bool isPal(string s, int ind, int i){
        while(ind<=i){
            if(s[ind++]!=s[i--]) return false;
        }
        return true;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> ds;
        pal(0,s,ans,ds);
        return ans;
        
    }
};