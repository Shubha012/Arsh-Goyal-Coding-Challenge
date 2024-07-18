class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // brute
        // int n = nums.size();
        // int cnt = 0;
        // for(int i=0; i<n; i++){
        //     int sum =0;
        //     for(int j=i; j<n; j++){
        //         sum+=nums[j];
        //         if(sum==k) cnt++;
        //     }
        // }
        // return cnt;

        // optimal
        unordered_map<int,int> mp;
        int prefixSum =0, cnt=0;
        mp[0] = 1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            prefixSum+=nums[i];
            int rem = prefixSum-k;
            if(mp.find(rem)!=mp.end()) {
                cnt+=mp[rem];
                mp[prefixSum]++;
            }
            else mp[prefixSum]++;
        }
        return cnt;
    }
};
