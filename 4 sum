class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // brute force = using 4 loops
        // sort(nums.begin(), nums.end());
        // int n= nums.size();
        // set<vector<int>>s;
        // for(int i=0; i<n-3; i++){
        //     for(int j=i+1; j<n-2; j++){
        //         for(int k=j+1; k<n-1; k++){
        //             for(int p=k+1; p<n; p++){
        //                 if(nums[i]+nums[j]+nums[k]+nums[p]==target) 
        //                     s.insert({nums[i],nums[j],nums[k],nums[p]});
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>>v;
        // for(auto i: s){
        //     v.push_back(i);
        // }
        // return v;

        // better approach
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int l = j+1, h=n-1;
                while(l<h){
                    long long sum = nums[i];
                    sum+=nums[j]; sum+=nums[l]; sum+=nums[h];
                    if(sum<target) l++;
                    else if(sum>target) h--;
                    else{
                        v.push_back({int(nums[i]),int(nums[j]),int(nums[l]),int(nums[h])});
                        int templ = nums[l], temph=nums[h];
                        while(l<h && templ == nums[l]) l++;
                        while(l<h && temph == nums[h]) h--;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1]) j++; 
            }
            while(i+1<n && nums[i]==nums[i+1]) i++; 
        }
        return v;
    }
};
