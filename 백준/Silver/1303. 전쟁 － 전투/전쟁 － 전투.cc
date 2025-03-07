#include <iostream>

using namespace std;

int whiteValue_Freidly, blueValue_Enemy;

char grid[101][101];
bool visited[101][101];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// Dfs method
int DFS(int x, int y, char team, int rows, int cols)
{
    visited[x][y] = true;
    int answer = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols)
        {
            if (!visited[nx][ny] && grid[nx][ny] == team)
            {
                answer += DFS(nx, ny, team, rows, cols);
            }
        }
    }

    return answer;
}

int main()
{
    int rows, cols;
    cin >> cols >> rows;

    // input
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> grid[i][j];
        }
    }

    // Calc Power
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (!visited[i][j])
            {
                int result = DFS(i, j, grid[i][j], rows, cols);

                if (grid[i][j] == 'W')
                {
                    whiteValue_Freidly += result * result;
                }
                if (grid[i][j] == 'B')
                {
                    blueValue_Enemy += result * result;
                }
            }
        }
    }

    cout << whiteValue_Freidly << " " << blueValue_Enemy;

    return 0;
}
