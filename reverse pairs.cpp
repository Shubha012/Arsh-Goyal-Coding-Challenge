class Solution {
public:
    void merge(vector<int>&v, int s, int mid, int e){
        vector<int> temp;
        int left = s;
        int right = mid+1;
        while(left<=mid && right<=e){
            if(v[left]<=v[right]) temp.push_back(v[left++]);
            else temp.push_back(v[right++]);
        }
        while(left<=mid) temp.push_back(v[left++]);
        while(right<=e) temp.push_back(v[right++]);

        for(int i=s; i<=e; i++){
            v[i] = temp[i-s];
        }
    }

    int countPairs(vector<int>&v, int s, int mid, int e){
        int right = mid+1;
        int cnt = 0;
        for(int i=s; i<=mid; i++){
            while(right<=e && v[i]>2LL*v[right]) right++;
            cnt += (right-(mid+1));
        }
        return cnt;
    }
    int mergeSort(vector<int>&v, int s, int e){
        int count =0;
        if(s>=e) return count;
        int mid = (s+e)/2;
        count += mergeSort(v,s,mid);
        count += mergeSort(v, mid+1, e);
        count += countPairs(v, s, mid, e);
        merge(v,s,mid,e);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        // int n = nums.size();
        // int count = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]>2LL*nums[j]) count++;
        //     }
        // }
        // return count;

        // merge sort approach
        return mergeSort(nums, 0, nums.size()-1);
    }
};
