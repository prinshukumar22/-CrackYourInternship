class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int inx = 0;
        int n = nums.size();

        while(i < n && inx < n){
            if(inx > i) i = inx;
            while(i<n && nums[inx] == 0 && nums[i] == 0) i++;
            if(i<n)
                swap(nums[inx] , nums[i]);
            while(inx<n && nums[inx] != 0) inx++;
        }
    }
};
