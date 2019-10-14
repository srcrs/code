#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
long long opt[25][25];
int dir[9][2] = {-1, -2, -2, -1, 1, -2, 2, -1, 2, 1, 1, 2, -1, 2, -2, 1};
bool vis[25][25];
int n, m;
bool isok(int x, int y)
{
	if (x < 0 || y < 0 || x > n || y > m)
	{
		return false;
	}
	return true;
}
void build(int x, int y)
{
	for (int i = 0; i < 9; i++)
	{
		if (isok(x - dir[i][0], y - dir[i][1]))
		{
			vis[x - dir[i][0]][y - dir[i][1]] = false;
			opt[x - dir[i][0]][y - dir[i][1]] = 0;
		}
	}
	int t = 1;
	for (int i = 0; i <= n; i++)
	{
		if (vis[0][i] && t)
		{
			opt[0][i] = 1;
		}
		else
		{
			opt[0][i] = 0;
		}
	}
	int t = 1;
	for (int i = 0; i <= m; i++)
	{
		if (vis[i][0] && t)
		{
			opt[i][0] = 1;
		}
		else
		{
			opt[i][0] = 0;
		}
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (vis[i][j])
			{
				cout << 1 << ' ';
			}
			else
			{
				cout << 0 << ' ';
			}
		}
		cout << endl;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			cout << opt[i][j] << ' ';
		}
		cout << endl;
	}
}
void dp(int x, int y)
{
	for (int i = x; i <= n; i++)
	{
		for (int j = y; j <= m; j++)
		{
			if (vis[i][j])
			{
				if (vis[i - 1][j] || vis[i][j - 1])
				{
					opt[i][j] = opt[i - 1][j] + opt[i][j - 1];
				}
				else if (!vis[i - 1][j] && !vis[i][j - 1])
				{
					opt[i][j] = 0;
				}
			}
		}
	}
}
int main()
{
	int x, y;
	cin >> n >> m >> x >> y;
	for (int i = 0; i <= n; i++)
	{
		fill(vis[i], vis[i] + m + 1, true);
	}
	build(x, y);
	dp(0, 0);
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			printf("%-5d", opt[i][j]);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}