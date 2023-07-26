#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> a;
	vector<pair<int,int>> score;
	int sum;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		a.push_back(num);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < n-2; i++)
	{
		for (int j= i+1; j < n-1; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				sum = a[i] + a[j] + a[k];

				if (sum <= m)
				{
					score.push_back({ sum, m - sum });
				}
			}
		}
	}

	sort(score.begin(), score.end(), greater<>());

	
	cout << score[0].first << endl;

}
