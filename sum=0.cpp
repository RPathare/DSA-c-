class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        int len=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                len=max(i-mp[sum],len);
            }
            else{
                mp[sum]=i;
            }
        }
        
    return len;
    }
};
