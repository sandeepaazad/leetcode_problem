class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>degree;
        for(auto & edge:edges){
            int u=edge[0];
            int v=edge[1];
            degree[u]++;
            degree[v]++;
        }
        for(auto& i:degree){
            if(i.second==edges.size())
                return i.first;
        }
    return -1;
    }
};