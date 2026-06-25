/*
Written & Produced By: Czhearth
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using l = long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;

#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ff first
#define ss second
#define sz(x) (int)(x).size()

const ll INF = 1e18;
const int MOD = 1e9 + 7;

ll gcdll(ll a, ll b){
    return b ? gcdll(b, a % b) : a;
}

ll lcmll(ll a, ll b){
    return a / gcdll(a, b) * b;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n,l,r;
        cin >> n >> l >> r;
        vi v1;
        for(int i = 0;i<n;i++){
            int k; cin >> k;
            v1.push_back(k);
        }
        if(r == n){
            int sum = 0;
            for(int i = 1;i<l;i++){
                sum += v1[i-1];
            }
            cout << sum << "\n";
        }
        else if(l == 1){
            int sum2 = 0;
            for (int i = n-1;i>r-1;i--){
                sum2 += v1[i];
            }
            cout << sum2 << "\n";
        }
        else{
            int sum = 0;
            for(int i = 1;i<l;i++){
                sum += v1[i-1];
            }
            int sum2 = 0;
            for (int i = n-1;i>r-1;i--){
                sum2 += v1[i];
            }
            cout << max(sum,sum2) << "\n";
        }
        
    }

    return 0;
}