#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<char>> _grid;
    set<pair<int,int>> _visited;
    int _rows;
    int _cols;

    void bfs(int r, int c){
        queue<pair<int,int>> q;
        q.push(make_pair(r,c));
        vector<pair<int,int>> idx{{1,0},{-1,0},{0,1},{0,-1}};
       

        while(!q.empty()){
            auto top = q.front();
            _visited.insert(top);
            q.pop();
            
            int r = top.first;
            int c = top.second;

            for(int i=0; i<idx.size();i++){
                int dr = r + idx.at(i).first;
                int dc = c + idx.at(i).second;
                if((dr>=0 && dr < _rows && dc>=0 && dc < _cols) && (_grid.at(dr).at(dc) == '1') && (_visited.find(make_pair(dr,dc))==_visited.end())){
                    q.push(make_pair(dr,dc));
                    _visited.insert(make_pair(dr,dc));
                }
            }
            
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        _grid = grid;
        _rows = _grid.size();
        _cols = _grid[0].size();
        
        int islands=0; 

        for(int i=0; i<_rows; i++){
            for(int j=0; j<_cols; j++){
                if(_grid.at(i).at(j) == '1' && _visited.find(make_pair(i,j))==_visited.end()){
                    bfs(i,j);
                    islands++;
                }
            }
        }
        return islands;
    }
};

int main(){
    Solution sol;
    vector<vector<char>> grid{{'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}};

    int result = sol.numIslands(grid);
    cout<<result;
}

     