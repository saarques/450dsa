class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool flag = 0;
        int n = nums.size(), i, j;
        for(i = n - 1 ; i > 0; i--){
            if(nums[i] > nums[i-1]){
                break;
            }
        }
        if(i == 0){
            reverse(nums.begin(), nums.end());
        }
        else{
            int x = nums[i-1], small = i;
            for(j = i+1; j < n; j++){
                if(nums[j] > x && nums[j] <= nums[small]){
                    small = j;
                }
            }
            int temp = nums[i-1];
            nums[i-1] = nums[small];
            nums[small] = temp;
            sort(nums.begin()+i, nums.end());
        }
    }
};
