#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct edge
{
	int t1;
	int t2;
	int weight;
};

void vvid(edge* p, int n, int m)
{
	cout << "Enter edges(first vertex | second vertex | weight) :\n";
	for (int i = 0;i < m;i++)
	{
		cout << "Edge" << i + 1 << ": ";
		cin >> p[i].t1 >> p[i].t2 >> p[i].weight;
		while (p[i].t1<0 || p[i].t1>n || p[i].t2<0 || p[i].t2>n || p[i].weight < 0)
		{
			cout << "The data entered incorrectly" << endl;
			cout << "Try again please" << endl;
			cin >> p[i].t1 >> p[i].t2 >> p[i].weight;
		}
	}
}

void bu1b(edge* p, int n)
{
	edge temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (p[j].weight > p[j + 1].weight)
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;

			}
		}
	}
}

bool vkluchene(int* a, int n, int f)
{
	for (int i = 0; i < n; i++)
	{
		if (f == a[i])
		{
			return true;
		}
	}
	return false;
}

bool minn(int w, edge* ed, int m, int* v, int n)
{
	for (int j = 1; j < m; j++)
	{
		if ((((!vkluchene(v, n, ed[j].t1) && vkluchene(v, n, ed[j].t2)) || (vkluchene(v, n, ed[j].t1) && !vkluchene(v, n, ed[j].t2)))) && ed[j].weight < w)
		{
			return false;
		}

	}
	return true;#include <iostream>
#include <stdlib.h>
#include <math.h>

		using namespace std;

	struct edge
	{
		int t1;
		int t2;
		int weight;
	};

	void vvid(edge * p, int n, int m)
	{
		cout << "Enter edges(first vertex | second vertex | weight) :\n";
		for (int i = 0;i < m;i++)
		{
			cout << "Edge" << i + 1 << ": ";
			cin >> p[i].t1 >> p[i].t2 >> p[i].weight;
			while (p[i].t1<0 || p[i].t1>n || p[i].t2<0 || p[i].t2>n || p[i].weight < 0)
			{
				cout << "The data entered incorrectly" << endl;
				cout << "Try again please" << endl;
				cin >> p[i].t1 >> p[i].t2 >> p[i].weight;
			}
		}
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (p[j].weight > p[j + 1].weight)
				{
					temp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = temp;

				}
			}
		}
	}

	bool vkluchene(int* a, int n, int f)
	{
		{
			return true;
		}
	}
	return false;
}

bool minn(int w, edge* ed, int m, int* v, int n)
{
	for (int j = 1; j < m; j++)
	{
		if ((((!vkluchene(v, n, ed[j].t1) && vkluchene(v, n, ed[j].t2)) || (vkluchene(v, n, ed[j].t1) && !vkluchene(v, n, ed[j].t2)))) && ed[j].weight < w)
		{
			return false;
		}

	}
}

void pryma(edge* ed, int* v, edge* tree, int n, int m, int& i, int& j)
{
	if (i == n)
	{
		return;
	}
	else if (j == n)
		(j = 1);
	if (vkluchene(v, n, e#include <iostream>
#include <stdlib.h>
#include <math.h>

		using namespace std;

	struct edge
	{
		int t1;
		int t2;
		int weight;
	};

	void vvid(edge * p, int n, int m)
	{
		cout << "Enter edges(first vertex | second vertex | weight) :\n";
		for (int i = 0;i < m;i++)
		{
			cout << "Edge" << i + 1 << ": ";
			cin >> p[i].t1 >> p[i].t2 >> p[i].weight;
			while (p[i].t1<0 || p[i].t1>n || p[i].t2<0 || p[i].t2>n || p[i].weight < 0)
			{
				cout << "The data entered incorrectly" << endl;
				cout << "Try again please" << endl;
				cin >> p[i].t1 >> p[i].t2 >> p[i].weight;
			}
		}
	}

	void bu1b(edge * p, int n)
	{
		edge temp;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (p[j].weight > p[j + 1].weight)
				{
					temp = p[j];
					p[j] = p[j + 1];
					p[j + 1] = temp;

				}
			}
		}
	}

	bool vkluchene(int* a, int n, int f)
	{
		for (int i = 0; i < n; i++)
		{
			if (f == a[i])
			{
				return true;
			}
		}
		return false;
	}

	bool minn(int w, edge * ed, int m, int* v, int n)
	{
		for (int j = 1; j < m; j++)
		{
			e* tree, int n, int m, int& i, int& j)
	{
		if (i == n)
		{
			return;
		}d[j].t1) && vkluchene(v, n, ed[j].t2))
	{
	j++;
	pryma(ed, v, tree, n, m, i, j);
	}
		else if (!vkluchene(v, n, ed[j].t1) && vkluchene(v, n, ed[j].t2) && minn(ed[j].weight, ed, m, n, v))
		{
			tree[i - 1] = ed[j];
			v[i] = ed[j].t1;
			j++;
			i++;
			pryma(ed, v, tree, n, m, i, j);
		}
	}

			int main()
			{
				int n, m;
				cout << "How many vertexes do you want to add? ";
				cin >> n;
				v[0] = ed[0].t1;
				v[1] = ed[0].t2;
				tree[0] = ed[0];
				int i = 2;
				int j = 1;
				pryma(ed, v, tree, n, m, i, j);
				cout << "\nV = {";
				for (int x = 0, x < n, x++)
				{
					cout << v[x] << " ,";
					{
						cout << "(" << tree[x].t1 << "," << tree[x].t2 << ") ";
					}
					cout << "}\n";
					return 0;
				}