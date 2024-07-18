class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // brute force
        // int ans = 0;
        // int n =nums.size();
        // for(int i=0; i<n; i++){
        //     int sum = 0;
        //     for(int j = i; j<n; j++){
        //         sum+=nums[j];
        //         if(sum%k==0) ans++;
        //     }
        // }
        // return ans;

        // optimal
        unordered_map<int, int>mp;
        mp[0] = 1;
        int cnt = 0;
        int prefixSum =0;
        for(auto i:nums){
            prefixSum+=i;
            int mod = prefixSum%k;
            if(mod<0) mod = mod+k;
            if(mp.find(mod)!=mp.end()){
                cnt+=mp[mod];
                mp[mod]++;
            }
            else mp[mod]++;
        }
        return cnt;
    }
};
