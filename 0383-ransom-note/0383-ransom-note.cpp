class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> rDic;
        unordered_map<char , int> mDic;
        int count = 0;
        for(int i = 0 ; i < ransomNote.size() ; i ++)
        {
            if(rDic.count(ransomNote[i]))
                rDic[ransomNote[i]] = rDic.at(ransomNote[i]) + 1;
            else 
                rDic[ransomNote[i]] = 1;
        }
        for(int i = 0 ; i < magazine.size() ; i ++)
        {
            if(mDic.count(magazine[i]))
                mDic[magazine[i]] = mDic.at(magazine[i]) + 1;
            else 
                mDic[magazine[i]] = 1;
        }
        for(int i = 0 ; i < ransomNote.size() ; i ++)
        {
            if(mDic.count(ransomNote[i]))
            {
                if(rDic.at(ransomNote[i]) > mDic.at(ransomNote[i]))
                {
                    return false;
                }
            }
            else
                return false;
        }
        return true;
    }
};