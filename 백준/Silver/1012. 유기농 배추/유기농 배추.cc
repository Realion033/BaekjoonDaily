#include <iostream>

using namespace std;

int testcase, M, N, num, x, y, answer;
int board[51][51];
bool visited[51][51];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void DFS(int y, int x)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny >= 0 && ny < N && nx >= 0 && nx < M && !visited[ny][nx] && board[ny][nx] == 1)
		{
			DFS(ny, nx);
		}
	}
}

int main()
{
	cin >> testcase;
	while (testcase--)
	{
		for (int i = 0; i < 51; i++)
		{
			for (int j = 0; j < 51; j++)
			{
				board[i][j] = 0;
				visited[i][j] = false;
			}
		}

		int cnt = 0;
		cin >> M >> N >> num;
		
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[i][j] == 1 && !visited[i][j])
				{
					DFS(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	} 
}