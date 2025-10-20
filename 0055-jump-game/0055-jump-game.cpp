class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int track=0;
        for(int i=0;i<n;i++){
            if(i>track) return false;
            track=max(track, i+nums[i]);
            if (track >= n - 1) return true;
        }
        return true;
    }
};