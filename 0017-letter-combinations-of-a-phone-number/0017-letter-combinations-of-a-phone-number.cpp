class Solution
{
public:
    vector<string> letterCombinations(string d)
    {
        unordered_map<char, string> map;
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";

        int n = d.size(), i = 0;
        vector<string> res;
        string one = map[d[i]];
        for (int j = 0; j < one.size(); j++)
        {
            string var1 = "";
            var1.push_back(one[j]);
            if (i + 1 < n)
            {

                string two = map[d[i + 1]];

                for (int k = 0; k < two.size(); k++)
                {

                    string var2 = var1;

                    var2.push_back(two[k]);
                    if (i + 2 < n)
                    {

                        string three = map[d[i + 2]];

                        for (int l = 0; l < three.size(); l++)
                        {

                            string var3 = var2;

                            var3.push_back(three[l]);
                            if (i + 3 < n)
                            {

                                string four = map[d[i + 3]];

                                for (int m = 0; m < four.size(); m++)
                                {
                                    string var4 = var3;
                                    var4.push_back(four[m]);
                                    res.push_back(var4);
                                }
                            }
                            else
                                res.push_back(var3);
                        }
                    }
                    else
                        res.push_back(var2);
                }
            }
            else
                res.push_back(var1);
        }
        return res;
    }
};