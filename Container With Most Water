class Solution {
public:
    int maxArea(vector<int>& height) {
        // brute force
        // int maxi = INT_MIN;
        // int n = height.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         int area = min(height[i], height[j]) * (j-i);
        //         maxi = max(maxi, area);
        //     }
        // }
        // return maxi;

        // optimal
        int maxArea = INT_MIN;
        int left = 0, right = height.size()-1;
        while(left<right){
            int area = min(height[left], height[right]) * (right-left);
            maxArea = max(maxArea, area);
            if(height[left]<=height[right]) left++;
            else right--;
        }
        return maxArea;
    }
};
