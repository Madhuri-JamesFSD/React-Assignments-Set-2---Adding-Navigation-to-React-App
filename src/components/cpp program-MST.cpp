#include<bits/stdc++.h>
using namespace std;
#define pu push_back
#define fi first
#define se second
#define mp make_pair
#define int long long
#define sz 2000005
int A[sz];
vector<int> NEB[sz],dist[sz];
int root(int a)
{
int i=a;
if(A[i]!=i)
{
A[i]=root(A[i]);
}
return A[i];
}
int unio(int a,int b)
{
int ra=root(a);
int rb=root(b);
if(ra!=rb)
{
A[ra]=rb;
}
}
signed main()
{
int n,m;
cin>>n>>m;
vector<pair<int,pair<int,int> > > X;
for(int i=0;i<m;i++)
{
int a,b,c;
cin>>a>>b;
c=(a+b)%1000;
X.pu(mp(c,mp(a,b)));
}
for(int i=1;i<=n;i++)
{
A[i]=i;
}
sort(X.begin(),X.end());
int sum=0;
for(int i=0;i<X.size();i++)
{
int cc=X[i].fi;
int aa=X[i].se.fi;
int bb=X[i].se.se;
if(root(aa)!=root(bb))
{
sum+=cc;
unio(aa,bb);
}
}
cout<<sum<<endl;
}