class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> gt; 
        int j = 0;
        int count = 0; 
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < pivot) 
            {
                nums[j] = nums[i];
                j++;
            }
            else if (nums[i] == pivot) 
                count++;
            else gt.push_back(nums[i]);
        }
        while (count) 
        {
            nums[j] = pivot;
            j++;
            count--;
        }
        for (int i = 0; i < gt.size(); ++i) 
        {
            nums[j] = gt[i];
            j++;
        }
        return nums;
    }
};