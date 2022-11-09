class Solution {
public:
    
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i = 1; i < heights.size() ; i++)
        {
            int max = heights[i];
            string name = names[i];
            int j = i - 1;
            while(j >= 0 && max > heights[j])
            {
                heights[j+1] = heights[j];
                names[j+1] = names[j];
                j--;
            }
            heights[j + 1] = max;
            names[j+1] = name; 
        }
        return names;
    }
};