//Problem Link: https://codeforces.com/contest/1851/problem/A

//Solution:
/***********   *****     ********   ||   ********  **   ** ******** ******* *******   ||   ********      *****      ****     ****
 ***********  *******     ******    ||   **        **   ** **    ** **      **        ||   **    **     *******     ** **   ** **
       ***    **   **       **      ||   **        **   ** **   **  **      **        ||   **   **      **   **     **  ** **  **
       ***    **   **       **      ||   ********  ******* ******   ******  ******    ||   ******       **   **     **   ***   **
      ***    *********      **      ||         **  **   ** **  **   **      **        ||   **  **      *********    **    *    **
  *  ***    **       **   ******    ||         **  **   ** **   **  **      **        ||   **   **    **       **   **         **
   ****    **         ** ********   ||   ********  **   ** **    ** ******* *******   ||   **    **  **         **  **         **/
//--------------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
//--------------------------------------------------------------------------------------
const long long INF = 10e9;
const long long mod = 1e9 + 7;
const long long MAXN = 2e5;
const long long NN = 1e5 + 10;
const long long INFY = 0x3f3f3f3f3f3f;
const long long N = 1e5 + 10;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//--------------------------------------------------------------------------------------
#define all(x) (x).begin(), (x).end() //to do any operation in ascending order
#define allr(x) (x).rbegin(), (x).rend() //to do any operation in descending order
#define ll long long
#define lli long long int
#define fi first
#define se second
#define pb push_back
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define v1d vector<ll>
#define v2d vector<vector<ll>>
#define sum(arr) accumulate(all(arr),0);
#define rep(i,s,e) for(ll i = s; i < e; i++)
#define rev_rep(i,s,e) for(ll i = s; i >= e; i -- )
//--------------------------------------------------------------------------------------

//INPUT or OUTPUT

void r(v1d &arr) {
	ll n = arr.size();
	rep(i, 0, n) cin >> arr[i];
}
void p(v1d &arr, string s) {
	ll n = arr.size();
	rep(i, 0, n) cout << arr[i] << s;
}
string to_string(char c) {
	return string(1, c);
}
int min(vector<int> arr) {
	return *min_element(all(arr));
}
ll min(vector<ll> arr) {
	return *min_element(all(arr));
}
int max(vector<int> arr) {
	return *max_element(all(arr));
}
ll max(vector<ll> arr) {
	return *max_element(all(arr));
}

//--------------------------------------------------------------------------------------

ll modpow(ll a, ll b)
{
	ll m = mod;
	ll ans = 1;
	while (b)
	{
		if (b & 1)
		{
			ans = (ans * a) % m;
		}
		b = b >> 1;
		a = (a * a) % m;
	}
	return ans;
}
v1d factors(ll x) {
	v1d result;
	ll i = 1;
	while (i * i <= x) {
		if (x % i == 0) {
			result.push_back(i);
			if (x / i != i) {
				result.push_back(x / i);
			}
		}
		i++;
	}
	return result;
}

ll countfactors(ll x) {
	v1d vect = factors(x);
	ll c = 0;
	for (auto i : vect) c++;
	return c;
}
//--------------------------------------------------------------------------------------







void solve() {
	ll n, m, k, H;
	cin >> n >> m >> k >> H;
	v1d h(n); r(h);
	queue<ll> q;
	q.push(1);
	q.push(2);
	int sum  = 0;
	for (int i = 0; i < n; i++) {
		int diff = abs(H - h[i]);
		bool flag1 = q.size() && diff % k == 0;
		bool flag2 = q.size() && diff <= (m - 1) * k;
		bool flag3 = q.size() && diff;
		if (q.size() && flag1 && flag2 && flag3) sum++;
	}
	cout << sum << endl;
}


void testsolve()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
}


int main() {
	//-----------------------------------------------
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//-----------------------------------------------

	fastio;
	testsolve();

}