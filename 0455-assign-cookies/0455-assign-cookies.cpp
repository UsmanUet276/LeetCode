class Solution {
public:
    vector<int> insertionSort(vector<int> &temp)
    {
        for (int x = 1; x < temp.size(); x++)
        {
            int key = temp[x];
            int y = x - 1;
            while (y >= 0 && temp[y] < key)
            {
                temp[y + 1] = temp[y];
                y--;
            }
            temp[y + 1] = key;
        }
        return temp;
    }
    int findContentChildren(vector<int>& g, vector<int>& s) {
        g = insertionSort(g);
        s = insertionSort(s);
        int count = 0;
        int x = 0;
        int y = 0;
        while(x < g.size() && y < s.size())
        {
            if(s[y] >= g[x])
            {
                count++;
                x++;
                y++;
            }
            else
            {
                x++;
            }
        }
        return count;
    }
};