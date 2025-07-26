int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxsum=INT_MIN;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            maxsum=max(maxsum,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxsum;
    }