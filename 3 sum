class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        // optimal approach
        sort(nums.begin(), nums.end());
        vector<vector<int>>v;
        int n = nums.size();
        for(int i=0; i<n; i++){
             int l = i+1, h = n-1;
             while(l<h){
                 if(nums[i]+nums[l]+nums[h]<0) l++;
                 else if(nums[i]+nums[l]+nums[h]>0) h--;
                 else{
                     v.push_back({nums[i], nums[l], nums[h]});
                     int templ = nums[l], temph=nums[h];
                     while(l<h && templ==nums[l]) l++;
                     while(l<h && temph == nums[h]) h--;
                 }
             }
             while(i+1<n && nums[i]==nums[i+1]) i++;
         }
         return v;
    }
};
