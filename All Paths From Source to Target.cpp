class Solution {
private:
    vector<vector<int>> totalAns;
    vector<int>visited;
    vector<int>ans;
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        visited.resize(graph.size()+5 , 0);
        dfs(graph, 0, graph.size()-1);
        return totalAns;
    }

    void dfs(vector<vector<int>>& graph, int u, int des){

        ans.push_back(u);
        visited[u] = 1;

        if(u == des){
            totalAns.push_back(ans);
            return;
        }

        for(int i = 0; i < graph[u].size(); i++){
            int v = graph[u][i];
            if(visited[v] == 0){
                dfs(graph, v, des);
                visited[v] = 0;
                ans.pop_back();
            }
        }
    }
};
