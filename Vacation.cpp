#if defined _MSC_VER //if using Visual Studio
#include "std_lib_facilities.h" //include this local header file
#include <queue>
#else
#include<bits/stdc++.h> //include this non portable headerfile 
using namespace std; //and the standard namespace
#endif
#pragma warning(disable:4996)//necessary if we want to use freopen() 

using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vld = vector<ld>;
using pll = pair<ll, ll>;
using vpl = vector<pll>;

#define dx first
#define dy second
#define forx(n) for (ll x=1;x<=n;x++)
#define fory(n) for (ll y=1;y<=n;y++)
#define rall(v) (v).rbegin(),(v).rend()
#define all(v) (v).begin(),(v).end()
#define fork(n) for (ll k=0;k<n;k++)
#define forj(n) for (ll j=0;j<n;j++)
#define fori(n) for (ll i=0;i<n;i++)
#define in(t) ll t; cin >> t; while(t--)
#define fin(n) ll n; cin >> n; fori(n)
#define trav(v) for(auto &i:v)
#define pb(x) push_back(x)

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
#if defined _MSC_VER 
	freopen("Text.txt", "r", stdin);//read all input form this local file 
#endif
	vector<int>prevPoints(3, 0);
	vector<int>currentPoints(3, 0);
	fin(n) {
		int newPoints[3];
		cin >> newPoints[0] >> newPoints[1] >> newPoints[2];
		forj(3) {
			fork(3) {
				if (j != k) {
					currentPoints[j] = max(currentPoints[j], newPoints[j] + prevPoints[k]);
				}
			}
		}
		prevPoints = currentPoints;
	}
	cout << *max_element(begin(currentPoints), end(currentPoints));
}