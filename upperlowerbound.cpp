class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor=-1;
        int ceil=-1;
        int min=0;
        int max=100000;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x && (arr[i]>=min)){
                min=arr[i];
            }
            if(arr[i]>=x && (arr[i]<=max)){
                max=arr[i];
            }
        }
        if(min>0){
            ans.push_back(min);
        }else{
            ans.push_back(floor);
        }
         if(max<100000){
             ans.push_back(max);
         }else{
             ans.push_back(ceil);
         }
         
         
         return ans;
        }
    
};