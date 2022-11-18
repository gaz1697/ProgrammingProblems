#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int arr[N];
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	multimap<int, int> mp;

	unordered_set<int> pos;
	int last = 1;
	int ind = 1;
	while (t--)
	{
		int e;
		cin >> e;
		if (e == 1)
		{
			int b;
			cin >> b;
			arr[ind] = b;
			mp.insert(make_pair(b, ind));
			ind++;
		}
		else if (e == 2)
		{
			while (pos.find(last) != pos.end())
			{
				last++;
			}
			int lastval = arr[last];
			auto it = mp.find(lastval);
			mp.erase(it);
			std::cout << last << ' ';
			pos.insert(last);
			last++;
		}
		else
		{
			if (mp.size())
			{

				pair<int, int> pr;
				pr = *prev(mp.end());
				int y = pr.first;
				auto it = mp.find(y);
				pr = *it;
				int g = pr.second;
				cout << g << ' ';
				pos.insert(g);
				mp.erase(it);
			}
		}
	}

	return 0;
}
