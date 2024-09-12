class Solution {
public:
   static bool cmp(vector<int>a,vector<int>b){
    return a[0]<b[0];
   }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),cmp);
        stack<vector<int>>st;
        st.push(intervals[0]);
        int i=1;
        while(i<intervals.size()){
            vector<int>temp=st.top();
            st.pop();
            if(temp[1]>=intervals[i][0] && temp[1]>=intervals[i][1]){
                st.push(temp);
            }
            else if(temp[1]>=intervals[i][0]){
              vector<int>tempAns;
              tempAns.push_back(temp[0]);
              tempAns.push_back(intervals[i][1]);
              st.push(tempAns);
            }
            else{
                 st.push(temp);
                 st.push(intervals[i]);
            }
            i++;
        }

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
        
    }
};