class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int length = arr.size();
        
        for(int i=0;i<length;i++){
            if(arr[i]==k){
                return i;
            }
        }
        return -1;
    }
};