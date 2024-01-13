//converting to adj list
class Solution {
public:
    void dfs(vector<int> &vis, vector<int> adj[],int node){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
            dfs(vis,adj,it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> adj[n];
        //conversion of matrix to adjacency list;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                cnt++;
                dfs(vis,adj,i);
            }
        }
        return cnt;
    }
};



/* MATRIX APPROACH
class Solution {
public:
    void dfs(int i, vector<bool>& visited, vector<vector<int>> &connected){
        visited[i]=true;
        for(int j=0; j<connected.size(); j++){
            if(connected[i][j]==1 && visited[j]==false)
            dfs(j, visited, connected);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n, false);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(visited[i]==false){
                dfs(i, visited, isConnected);
                cnt++;
            }
        }
        return cnt;
    }
};
*/