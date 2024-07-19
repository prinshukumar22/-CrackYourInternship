class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int inx = 0;
        int n = nums.size();

        while(i < n){
            while(i<n && nums[inx] == nums[i]) i++;
            if(i<n){
                nums[inx+1] = nums[i];
                inx++;
            }
        }

        return inx+1;
    }
};
