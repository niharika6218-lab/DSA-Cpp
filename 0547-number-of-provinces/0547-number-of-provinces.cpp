class Solution {
public:
    void dfs(int n,vector<vector<int>> &adj,vector<bool> &vis){
        vis[n]=true;
        for(int neig: adj[n]){
            if(!vis[neig]){
                dfs(neig,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        vector<bool>vis(n,false);
        int prov=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                prov++;
                dfs(i,adj,vis);
            }
        }
        return prov;
    }
};