class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        // Sorting the array 
        sort(arr.begin(), arr.end());
        int size_n = arr.size();
        long long int n = arr[size_n-1];
        
        //sum of n natural no 
        long long int sum = (n*(n+1))/2;
        
        //sum of array 
       long long int array_sum = 0 ;
        for(int i = 0 ; i<size_n ; i++)
        {
            array_sum+=arr[i];
        }
        
        //Calculating Diff
       long long int diff = sum-array_sum;
        
        if(diff==0)
        {
            return n+1;
        }
        else
        return diff;
    }
};