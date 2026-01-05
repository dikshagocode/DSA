class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    dfs(grid, i, j);
                }
            }
        }

        return islands;
    }

private:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();

        // Boundary or water check
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;

        // Mark land as visited
        grid[i][j] = '0';

        // Explore all 4 directions
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
};
