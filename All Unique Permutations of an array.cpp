//User function Template for C++

class Solution {
  public:
    void solve(vector<int>& temp, vector<int>& freq, vector<int> &arr,
    set<vector<int>> &v){
        if(temp.size()==arr.size()){
            v.insert(temp);
            return;
        }
        for(int i=0; i<arr.size(); i++){
            if(freq[i]==0){
                freq[i]=1;
                temp.push_back(arr[i]);
                solve(temp, freq, arr, v);
                freq[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        set<vector<int>> v;
        vector<int> temp;
        vector<int> freq(arr.size(), 0);
        
        solve(temp, freq, arr, v);
        
        vector<vector<int>>res(v.begin(), v.end());
        return res;
    }
};
