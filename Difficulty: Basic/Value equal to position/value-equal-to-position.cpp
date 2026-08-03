class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        vector<int> temp;
        
        for(int i=0;i<arr.size();i++){
            if(i == arr[i]-1){
                temp.push_back(arr[i]);
            }
        }
        return temp;
    }
};