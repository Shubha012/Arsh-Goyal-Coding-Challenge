class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        // brute force
        // int k[2];
        // for(int i = 0 ; i<nums.size() ; i++){
        //     for(int j = i+1 ; j<nums.size() ; j++){
        //         if (nums[i]+nums[j]==target){
        //             k[0]=i;
        //             k[1]=j;  
        //             break;                 
        //         }
        //     }
        // }
        // vector<int> v(begin(k), end(k));
        // return v;

        // better approach 1 
        // unordered_map<int,int>mp;
        // vector<int>v(2,-1);
        // for(int i=0; i<nums.size(); i++){
        //     int n = nums[i];
        //     int left = target-n;
        //     if(mp.find(left)!=mp.end()){ 
        //         v[0]=mp[left];
        //         v[1] = i;
        //     }
        //     mp[n]=i;
        // }
        // return v;

        // optimal approach  -- work only when ans is in yes or no 
        // since indices are lost , therefore need to create map
        vector<pair<int, int>> v;
        for(int i=0; i<nums.size(); i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        int n = v.size();
        int left = 0, right = n-1;
        int sum = 0;
        while(left<right){
            sum = v[left].first + v[right].first;
            if(sum>k) right--;
            else if(sum<k) left++;
            else{
                return {v[left].second, v[right].second};
            }
        }
        return {-1,-1};
    }
};
