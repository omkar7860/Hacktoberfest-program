class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        //edge case
        if(n==1)return true;
        vector<int>visited(n,0);
        queue<pair<int,int>>q;
        q.push({0,nums[0]});
        visited[0]=1;
        while(!q.empty()){
            int i=q.front().first;
            int value=q.front().second;
            q.pop();
            for(int j=1;j<=value;j++){
                int newindex=i+j;
                if(newindex==n-1)return true;
                else if(!visited[newindex]){
                    visited[newindex]=1;
                    q.push({newindex,nums[newindex]});
                }
            }
        }
        return false;
    }
};
