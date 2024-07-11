#include <vector>
#include <algorithm>

class UnionFind {
public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    bool unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) return false;

        // Union by rank
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX] += 1;
        }
        return true;
    }

private:
    std::vector<int> parent;
    std::vector<int> rank;
};

class Solution {
public:
    int earliestAcq(std::vector<std::vector<int>>& logs, int n) {
        // Sort the logs based on timestamp
        std::sort(logs.begin(), logs.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[0] < b[0];
        });

        // Initially, we treat each individual as a separate group.
        int groupCount = n;
        UnionFind uf(n);

        for (const auto& log : logs) {
            int timestamp = log[0];
            int friendA = log[1];
            int friendB = log[2];

            // We merge the groups along the way.
            if (uf.unionSets(friendA, friendB)) {
                groupCount -= 1;
            }

            // The moment when all individuals are connected to each other.
            if (groupCount == 1) {
                return timestamp;
            }
        }

        // There are still more than one groups left,
        // i.e. not everyone is connected.
        return -1;
    }
};
