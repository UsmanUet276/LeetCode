class Solution {
public:
    
    vector<int> bubbleSort(vector<int>& salary)
    {
        bool tf;
        int n = salary.size();
        for(int i = 0; i < n - 1 ; i++)
        {
            tf = false;
            for(int j = 0; j < n - i - 1 ; j++)
            {
                if(salary[j] > salary[j+1])
                {
                    int temp = salary[j];
                    salary[j] = salary[j+1];
                    salary[j+1] = temp;
                    tf = true;
                }
            }
            if(!tf)
            {
                break;
            }
        }
        return salary;
    }
    double average(vector<int>& salary) {
        salary = bubbleSort(salary);
        double count = 0;
        double sum = 0;
        for(int i = 1; i < salary.size()-1 ; i++)
        {
            sum = sum + salary[i];
            count ++;
        }
        return sum / count;
        
    }
};