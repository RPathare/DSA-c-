class Solution {
  public:
    int largest(vector<int> &arr) {
       int n=arr.size();
       int max=0;
       for(int i=0;i<n;i++){
           if(arr[i]>max){
               max=arr[i];
           }
       }
       return max;
    }
};