int findDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<n-1; i++){
        //     if(nums[i]==nums[i+1]) return nums[i];
        // }
        // return 0;


        // using slow and fast pointer
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        slow = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
