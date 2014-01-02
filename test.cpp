#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
 
using namespace std;
 
vector<string> grid;
 
bool visited[183][183];
 
int distances[183][183];
 
int n, m;
 
int xD[4] = {1, -1, 0 ,0};
int yD[4] = {0, 0, 1, -1};
 
void clear_visited();
int calculate(int x, int y);
 
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--)
    {
        // Getting the input
        cin >> n >> m;
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            grid.push_back(s);
        }
 
        // Calculating the minimum distances
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                distances[i][j] = calculate(i,j);
                clear_visited();
            }
        }
 
 
        // Printing out the output
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if (j== m-1)
                    cout << distances[i][j] << endl;
                else
                    cout << distances[i][j] << ' ';
            }
        }
    }
 
 
    return 0;
}
 
 
int calculate(int x, int y)
{
    int originalX = x;
    int originalY = y;
    queue<pair<int, int> > q;
    q.push(make_pair(x, y));
    visited[x][y] = true;
 
    while(!q.empty())
    {
        x = q.front().first; y = q.front().second;
        if(grid[x][y] == '1')
        {
            return abs(originalX - x) + abs(originalY - y);
        }
        q.pop();
        for(int i=0; i<4;i++)
        {
            if(x+xD[i] >= 0 && x+xD[i] < n && y+yD[i] >= 0 && y+yD[i] < m && !visited[x+xD[i]][y+yD[i]])
            {
                q.push(make_pair(x+xD[i], y+yD[i]));
                visited[x+xD[i]][y+yD[i]] = true;
            }
        }
    }
}
 
void clear_visited()
{
    for(int i=0; i<183; i++)
        for(int j=0; j<183; j++)
            visited[i][j] = false;
}
 
