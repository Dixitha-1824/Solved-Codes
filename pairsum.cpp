 vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0;
        int j=n-1;
        vector<int>v;
        while(i<=j)
        {
            int sum=numbers[i]+numbers[j];
            if(sum>target)
            j--;
            else if(sum<target)
            i++;
            else
            {
            v.push_back(i+1);
            v.push_back(j+1);
            break;
            }
        }
        return v;
    }