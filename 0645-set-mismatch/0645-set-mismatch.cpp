class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int , int> dic;
        vector<int> temp;
        for(int i=1; i <= nums.size() ; i++)
        {
            if(dic.count(nums[i-1]))
            {
                dic[nums[i-1]] = dic.at(nums[i-1]) + 1;
            }
            else
            {
                dic[nums[i-1]] = 1;
            }
        }
        
        for(int i=1; i <= nums.size() ; i++)
        {
            if(dic.count(i) != 0)
            {
                if(dic.at(i) > 1)
                    temp.push_back(i);
            }
        }
        for(int i=1; i <= nums.size() ; i++)
        {
            if(dic.count(i) == 0)
            {
                temp.push_back(i);
            }
        }
        return temp;
    }
};