class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1;
        int ele = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(cnt==0) ele = nums[i];
            nums[i]==ele?cnt++:cnt--;  
        }
        return ele;
    }
};
