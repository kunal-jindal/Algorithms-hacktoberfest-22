#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;


#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void d_m_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input_rec.txt", "r", stdin);
	freopen("output_rec.txt", "w", stdout);
#endif
}

int power(int n, int x)
{
	if (x == 0)
		return 1;

	int small = power(n, x / 2);
	small = (small * small);

	if (1 & x)
		small = (n * small);

	return small;
}

void move(int n, char src, char helper, char dest)
{
	if (n == 0)
		return;

	move(n - 1, src, dest, helper);
	cout << "Shift disk " << n << " from " << src << " to " << dest << endl;
	move(n - 1, helper, src, dest);

	return;
}

int32_t main()
{

	d_m_c();

	int n;
	cin >> n;

	move(n, 'A', 'B', 'C');

	return 0;
}
