int n = nums.size();
        int maxInd = nums[0];
        for(int i=0; i<n; i++){
            if(maxInd>= n-1) return 1;

            if(nums[i]==0 && maxInd == i) return 0;

            if(i+nums[i]>maxInd) maxInd = nums[i] + i;
        }
        return 1;
