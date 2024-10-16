#include<iostream>
#include<queue>
using namespace std;

string board[101];
int row, col;
int visited[101][101];

queue<pair<int, int>>que;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
	//처음 들어온 00 푸쉬함
	que.push({ x, y });
	//처음 시작은 항상 1
	visited[x][y] = 1;
	while (!que.empty())
	{
		//큐의 첫번째값을 x, y의 등록
		int x = que.front().first;
		int y = que.front().second;
		//팝을 통해 등록된 값을 이제 지우기(추후 경로가 없어 반환되었을 경우 다시 돌아가는걸 방지하기 위함)
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			//포문 i값에 따라 상하좌우 탐색할 예정인 좌표 설정.
			int nx = x + dx[i];
			int ny = y + dy[i]; // row 행사이즈, col 열사이즈

			//탐색할 좌표가 2차원배열을 벗어낫을 경우 못한다 판단하고 바로 넘기기
			if (nx >= row || ny >= col || nx < 0 || ny < 0) continue;
			
			//탐색할 좌표의 보드가 1(1은 지나갈 수 있는 길), 그리고 visited가 0(방문이 처음)인 경우
			if (board[nx][ny] == '1' && visited[nx][ny] == 0)
			{
				//큐에 좌표를 푸시함.
				que.push({ nx, ny });
				//visited로 탐색한 죄표에 이전 좌표에 1을 더해 결과값을 도출할 수 있도록 접근
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}
}
int main()
{
	cin >> row >> col; // 행사이즈 // 열사이즈 
	for (int i = 0; i < row; i++)
	{
		cin >> board[i];
	}
	BFS(0, 0);
	cout << visited[row - 1][col - 1];
}