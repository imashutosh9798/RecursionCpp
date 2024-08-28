#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>> &visited) {
    return (newx >= 0 && newx < row &&
            newy >= 0 && newy < col &&
            maze[newx][newy] == 1 &&
            visited[newx][newy] == false);
}

void PrintAllPath(int maze[][4], int row, int col, int srcx, int srcy, string output, int &pathCount, vector<vector<bool>> &visited) {
    // destination coordinates are [row - 1], [col - 1]
    if (srcx == 0 && srcy == 0) {
        cout << output << endl;
        pathCount++;
        return;
    }

    // Go UP
    int newx = srcx - 1;
    int newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        PrintAllPath(maze, row, col, newx, newy, output + 'U', pathCount, visited);
        visited[newx][newy] = false;
    }

    // Go RIGHT
    newx = srcx;
    newy = srcy + 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        PrintAllPath(maze, row, col, newx, newy, output + 'R', pathCount, visited);
        visited[newx][newy] = false;
    }

    // Go DOWN
    newx = srcx + 1;
    newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        PrintAllPath(maze, row, col, newx, newy, output + 'D', pathCount, visited);
        visited[newx][newy] = false;
    }

    // Go LEFT
    newx = srcx;
    newy = srcy - 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, visited)) {
        visited[newx][newy] = true;
        PrintAllPath(maze, row, col, newx, newy, output + 'L', pathCount, visited);
        visited[newx][newy] = false;
    }
}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int row = 4;
    int col = 4;
    int srcx = 3;
    int srcy = 3;
    int pathCount = 0;
    string output = "";
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0) {
        cout << "No path exists." << endl;
    } else {
        PrintAllPath(maze, row, col, srcx, srcy, output, pathCount, visited);
    }

    cout << "Total paths found: " << pathCount << endl;

    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe(int srcx,int srcy, int newx, int newy, int maze[][4], int row, int col, vector <vector<bool>> &visited){
//     if((newx >=0 && newy<row)&&
//     (newy >=0 && newy<col)&&
//     maze[newx][newy]==1 &&
//     visited [newx][newy]== false;
//     ){
// return true;
//     }
// else{
//     return false;

// }
// }


//      PrintAllPath(int maze[][4], int row , int col , int srcx, int srcy, int &output, vector <vector<bool>> &visited);
//             // destination coordinates are [row -1] , [col-1]
//             if (srcx==0 && srcy==0){
//                 cout<<output<<endl;
//                 return;
//             }
// // if i go UP
// int newx=srcx-1;
// int newy=srcy;
// if (isSafe(srcx, srcy,newx,newy,maze,row, col,visited)){
// visited = [newx][newy]=true;
// PrintAllPath(maze,row, col,newx, newy,output+'U' visited)
// visited = [newx][newy]=false;

// }
// // right 
// int newx=srcx;
// int newy=srcy+1;
// if (isSafe(srcx, srcy,newx,newy,maze,row, col,visited)){
// visited = [newx][newy]=true;
// PrintAllPath(maze,row, col,newx, newy,output+'R' visited)
// visited = [newx][newy]=false;

// }
// // Down
// int newx=srcx+1;
// int newy=srcy;
// if (isSafe(srcx, srcy,newx,newy,maze,row, col,visited)){
// visited = [newx][newy]=true;
// PrintAllPath(maze,row, col,newx, newy,output+'D' visited)
// visited = [newx][newy]=false;

// }
// // Left
// int newx=srcx;
// int newy=srcy-1;
// if (isSafe(srcx, srcy,newx,newy,maze,row, col,visited)){
// visited = [newx][newy]=true;
// PrintAllPath(maze,row, col,newx, newy,output+'L' visited)
// visited = [newx][newy]=false;

// }




// int main(){
//      int maze [4][4]= {
//         {1,0,0,0},
//         {1,1,0,0},
//         {1,1,0,0},
//         {1,1,1,1}
//      };
//      int row = 4;
//      int col=4;
//      int strx=0;
//      int stry=0;
//      string output =" ";
//      vector<vector<bool>> visited(row , vector<bool>(col,false));
//      if (maze [0][0]==0){
//         cout<<"No path Exists "<<endl;

//      }
//      else {
//              PrintAllPath(maze, row , col , srcx, srcy, output, visited);

//      }






//     return 0;
// }