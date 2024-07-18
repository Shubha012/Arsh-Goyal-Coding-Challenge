class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum = 0;
        for(int i=0; i<k; i++) leftsum+=cardPoints[i];

        int r = cardPoints.size()-1;
        int sum = leftsum;
        int maxi = leftsum;
        for(int i=k-1; i>=0; i--){
            leftsum-=cardPoints[i];
            leftsum+=cardPoints[r--];
            maxi = max(maxi, leftsum);
        }
        return maxi;
    }
};
