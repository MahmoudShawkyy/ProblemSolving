#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define PB push_back
#define len(s) (int)s.length()
#define sz(v)  (int)v.size()
#define all(v)  v.begin(),v.end()
#define array(arr)  arr,arr+n
#define endl '\n'
#define loop(n) for(int i = 0; i < (n); i++)
#define loop2(n) for(int j = 0; j < (n); j++)
//int freq[20,0005]={0};
char s[100001];
void solve()
{
    cin>>s;
   char *sub;
   if(((sub=strstr(s,"AB"))!=NULL)&&((sub=strstr(sub+2,"BA"))!=NULL))
    cout<<"YES\n";
   else if(((sub=strstr(s,"BA"))!=NULL)&&((sub=strstr(sub+2,"AB"))!=NULL))
   cout<<"YES\n";
   else
    cout<<"NO\n";}
int main()
{
    cin.tie(0);
        cin.sync_with_stdio(0);
        int t=1;//cin>>t;
        while(t--)
            solve();

    }
