class Solution {
public:
    void swap(vector<int> &a, vector<int> &b)
    {
        vector<int> c;
        c = a;
        a = b;
        b = c;
    }
    void selectionSort(vector<vector<int>> &v)
    {
        int i, j, k, n = v.size();
        for (i = 0; i < n - 1; i++)
        {
            k = i;
            for (j = i + 1; j < n; j++)
                if (v[j][1] > v[k][1])
                    k = j;
            swap(v[k], v[i]);
        }
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        selectionSort(boxTypes);
        int mu = 0;
        for(auto& box: boxTypes)
        {
            mu += min(truckSize, box[0]) * box[1];
            truckSize -= min(truckSize, box[0]);
            if(truckSize <= 0)
                break;
        }
        return mu;
    }
};