#include <iostream>
#include <string>
using namespace std;
string a[10][5] =
	{{" - ", "| |", "   ", "| |", " - "},
	 {"   ", "  |", "   ", "  |", "   "},
	 {" - ", "  |", " - ", "|  ", " - "},
	 {" - ", "  |", " - ", "  |", " - "},
	 {"   ", "| |", " - ", "  |", "   "},
	 {" - ", "|  ", " - ", "  |", " - "},
	 {" - ", "|  ", " - ", "| |", " - "},
	 {" - ", "  |", "   ", "  |", "   "},
	 {" - ", "| |", " - ", "| |", " - "},
	 {" - ", "| |", " - ", "  |", " - "}};
string s;
int k;
void fun(int p)
{
	for (int m = 0; m < s.size(); m++)
	{
		int y = s[m] - '0';
		if (m != 0)
		{
			cout << " ";
		}
		cout << a[y][p][0];
		for (int x = 0; x < k; x++)
		{
			cout << a[y][p][1];
		}
		cout << a[y][p][2];
	}
}
int main()
{
	cin >> k;
	cin >> s;
	for (int p = 0; p < 5; p++)
	{
		if (p % 2 == 0)
		{
			fun(p);
			cout << endl;
		}
		else
		{
			for (int x = 0; x < k; x++)
			{
				fun(p);
				cout << endl;
			}
		}
	}
	system("pause");
	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k;
//     string s, m[10] = {"-|| ||-", "  |  | ", "- |-| -",
//                        "- |- |-", " ||- | ", "-| - |-", "-| -||-",
//                        "- |  | ", "-||-||-", "-||- |-"};
//     cin >> k >> s;
//     for (int p = 0; p < 7; p++)
//     {
//         if (p == 2 || p == 5)
//             continue;
//         if (p % 3 == 0)
//         {
//             for (int i = 0; i < s.size(); i++)
//             {
//                 cout << ' ';
//                 for (int j = 0; j < k; j++)
//                 {
//                     cout << m[s[i] - 48][p];
//                 }
//                 cout << "  ";
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (int q = 0; q < k; q++)
//             {
//                 for (int i = 0; i < s.size(); i++)
//                 {
//                     cout << m[s[i] - 48][p];
//                     for (int j = 0; j < k; j++)
//                     {
//                         cout << ' ';
//                     }
//                     cout << m[s[i] - 48][p + 1] << ' ';
//                 }
//                 cout << endl;
//             }
//         }
//     }
//     system("pause");
//     return 0;
// }