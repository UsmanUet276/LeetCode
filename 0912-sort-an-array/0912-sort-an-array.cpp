class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int , vector<int>, greater<int>> temp;
        for(int i = 0;i < nums.size(); i++)
        {
            temp.push(nums[i]);
        }
        nums.clear();
        while(!temp.empty())
        {
            nums.push_back(temp.top());
            temp.pop();
        }
        return nums;
    }
};