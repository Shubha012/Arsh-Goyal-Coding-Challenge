class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //brute force
         vector<int>v;
         int i=0, j=0;
         while(i<m && j<n){
             if(nums1[i]<=nums2[j]){
                 v.push_back(nums1[i++]);
             }
             else if(nums1[i]>nums2[j]){
                 v.push_back(nums2[j++]);
             }
         }
         for( ; i<m; i++) v.push_back(nums1[i]);
         for( ; j<n; j++) v.push_back(nums2[j]);

         for(int i=0; i<nums1.size(); i++){
             nums1[i] = v[i];
        }

    }
};
