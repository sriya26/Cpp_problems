class Solution {
    private:
    void dfs(int node, vector<vector<int>>& adjLs, vector<int>& visited){
        visited[node]=1;
        for(auto it:adjLs[node]){
            if(!visited[it]){
                dfs(it, adjLs, visited);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        vector<vector<int>> adjLs(V);

    //convert adj matrix to list first
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }

        //create visted array and run dfs for every unvisited node to mark visited and update count of provinces when any node unvisited in dfs(province start nodes).
        vector<int> visited(V, 0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                cnt++;
                dfs(i, adjLs,visited);
            }
        }

        return cnt;    
    }
};