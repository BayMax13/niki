
#include<bits/stdc++.h>
using namespace std;

#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pri(x) printf("%d",x)
#define pll(x) printf("%lld",x)
#define sstr(s) scanf("%s",s)
#define nl printf("\n")

#define ll long long int
#define pii pair<int,int>
#define pLL pair<ll,ll>
#define vi vector<int>

#define pb push_back
#define mp make_pair
#define fr first
#define se second
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define mod 1000000007
#define pi 2*acos(0)
#define endl '\n'
/*const int MAXN = 10009;
ll dp[MAXN][10];
ll recur(ll pos,int prv){
    if(pos==0)
	return 1;
    if(dp[pos][prv+1]!=-1)
	return dp[pos][prv+1]%mod;
    if(prv==0)
	return dp[pos][prv+1] = recur(pos-1,1)%mod;
    return dp[pos][prv+1] = (recur(pos-1,0)%mod + recur(pos-1,1)%mod)%mod;
}*/
void fib(ll n, ll&x, ll&y){
    if(n==0){
	x = 0;
	y = 1;
	return ;
    }

    if(n&1){
	fib(n-1, y, x);
	y=(y+x)%mod;
    }else{
	ll a, b;
	fib(n>>1, a, b);
	y = (a*a+b*b)%mod;
	x = (a*b + a*(b-a+mod))%mod;
    }
}
void solve(){
    ll n;
    cin>>n;
/*    for(int i=0;i<MAXN;i++){
	for(int j=0;j<10;j++){
	    dp[i][j] = -1;
	}
    }
    //ll ans = -1;
    //if(n<=10000)
    //	ans = recur(n,-1);
*/
    ll x , y;
    fib(n+1,x,y);
    cout<<y<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
	solve();
}
