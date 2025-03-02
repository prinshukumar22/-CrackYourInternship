class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0;
        int slow = 0;

        do {
            fast = nums[fast];
            fast = nums[fast];

            slow = nums[slow];
        } while(slow != fast);

        fast = 0;

        while(fast != slow){
            fast = nums[fast];
            slow = nums[slow];
        }

        return fast;
    }
};
