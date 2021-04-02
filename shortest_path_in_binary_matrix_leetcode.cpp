class Solution {
public:
        
    vector<vector<int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}, {-1,1}, {1,1}, {1,-1}, {-1,-1}};
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        //checking if the source or destinations are unreachable
        if(grid[0][0] == 1 || grid[grid.size()- 1][grid.size()- 1] == 1)
            return -1;
        
        //adding the initial entry into the queue
        vector<vector<int>> q = {{0,0,1}};
        //starting the BFS process
        while(q.size()!=0){
            
            for(int i = 0;i<q.size();i++){
                vector<int> v = q.front();
                q.erase(q.begin());
                int x = v[0];
                int y = v[1];
                int cost = v[2];
                
                if(x == grid.size()- 1 && y == grid.size()- 1)
                    return cost;
                
                for(int i=0;i<directions.size();i++){
                    int nextX = x + directions[i][0];
                    int nextY = y + directions[i][1];
                    
                    if( (nextX>=0 && nextX<=grid.size()- 1) && (nextY>=0 && nextY<=grid.size()- 1) && grid[nextX][nextY] == 0) 
                    {
                        q.push_back({nextX, nextY, cost+1});
                        grid[nextX][nextY] = 1;
                    }
                }
            }
        }
        return -1;
    }
};
