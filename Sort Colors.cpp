class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int m = 0;
        int e = n-1;

        while(m <= e){
            if(nums[m] == 1) m++;
            else if(nums[m] == 0){
                swap(nums[m], nums[s]);
                m++;
                s++;
            }
            else if(nums[m] == 2){
                swap(nums[m], nums[e]);
                e--;
            }
        }
    }
};
