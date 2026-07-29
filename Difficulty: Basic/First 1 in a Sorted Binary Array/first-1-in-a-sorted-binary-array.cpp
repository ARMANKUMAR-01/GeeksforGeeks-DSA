class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // code here
        
        int length = arr.size();
        for(int i=0;i<length;i++){
            if(arr[i]==1){
                return i;
            }
        }
        return -1;
    }
};