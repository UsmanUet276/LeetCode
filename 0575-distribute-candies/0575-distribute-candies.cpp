class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int , int> dic;
        
        for(int i = 0 ; i < candyType.size() ; i++)
        {
            dic[candyType[i]] = candyType[i];
        }
        int n = candyType.size() / 2;
        int n2 = dic.size();
        if(n > n2)
            return n2;
        return n;
    }
};