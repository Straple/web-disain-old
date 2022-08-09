#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void build(vector<ll>& V, vector<ll> &T, int v, int tl, int tr) 
{	// build Tree of segments
	if (tl == tr)
	{
		T[v] = V[tl];
	}
	else 
	{
		int tm = (tl + tr) / 2;
		build(V, T, v * 2, tl, tm);
		build(V, T, v * 2 + 1, tm + 1, tr);
		T[v] = T[v * 2] + T[v * 2 + 1];
	}
}

ll getsum(vector<ll>& T, int v, int tl, int tr, int l, int r)
{ // get sum in Tree
	if (l > r)
	{
		return 0;
	}
	if (l == tl && r == tr)
	{
		return T[v];
	}

	int tm = (tl + tr) / 2; 
	return getsum(T, v * 2, tl, tm, l, min(r, tm))
		+ getsum(T, v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}


void update(vector<ll> &T, int v, int tl, int tr, int pos, int new_val) 
{ // update tree 
	if (tl == tr)
	{
		T[v] = new_val;
	}
	else {
		int tm = (tl + tr) / 2;
		if (pos <= tm)
		{
			update(T, v * 2, tl, tm, pos, new_val);
		}
		else
		{
			update(T, v * 2 + 1, tm + 1, tr, pos, new_val);
		}
		T[v] = T[v * 2] + T[v * 2 + 1];
	}
}


int main()
{
	//ifstream cin("input.txt");
	ios_base::sync_with_stdio(false);
	
	ll n;
	cin >> n;
	vector<ll> V(n);
	for (int i = 0; i < n; i++) // input
	{
		cin >> V[i];
	}

	vector<ll> T(4 * n); // build Tree Sum
	build(V, T, 1, 0, n - 1);



	ll m;
	cin >> m;
	char c; 
	ll l, r; ll ind, val;
	for (int i = 0; i < m; i++)
	{
		cin >> c;
		if (c == 's')
		{
			cin >> l >> r;
			cout << getsum(T, 1, 0, n - 1, l-1, r-1) <<  " ";
		}
		else
		{
			cin >> ind >> val; ind--;
			update(T, 1, 0, n - 1, ind, val);
		}
	}

	

	return 0;
}