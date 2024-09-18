 public:{
    int findFloor(vector<long long> &v, long long n, long long x) {

        long long low=0;
        long long ans=n;
        long long high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(v[mid]>x){
                high=mid-1;
                 ans=mid;
            }else{
                low=mid+1;
            }
        }
        if(ans<=0){
            return -1;
        }else{
            return ans-1;
        }
    }
};
