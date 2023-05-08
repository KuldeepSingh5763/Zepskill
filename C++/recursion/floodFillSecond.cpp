#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Only one step Can Go And go only these direction (Left, Right, Top, Bottom)

int floodfill(vector<vector<int>>maze, int sr, int sc, string asf, vector<vector<bool>>vis){
    if(sr == maze.size()-1 && sc == maze[0].size()-1){
        cout<<asf<<endl;
        return 1;
    }
    if(sr<0 || sc<0 || sr>=maze.size() || sc>=maze[0].size() || vis[sr][sc] == true || maze[sr][sc]== 1 ){
        return 0;
    }
    int c=0;
    vis[sr][sc] = true;
    c+=floodfill(maze,sr-1,sc,asf+"t",vis);
    c+=floodfill(maze,sr,sc-1,asf+"l",vis);
    c+=floodfill(maze,sr+1,sc,asf+"d",vis);
    c+=floodfill(maze,sr,sc+1,asf+"r",vis);
    vis[sr][sc]=false;
    return c;
}


int main(){
    int n=3;
    int m=3;
    vector<vector<int>>maze(n, vector<int>(m));
    vector<vector<bool>>vis(n, vector<bool>(m));

    cout<<floodfill(maze,0,0,"",vis);
    return 0;
}



