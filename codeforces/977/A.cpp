#include <bits/stdc++.h>

using namespace std;

int main()
{
int num,n;
cin>>num>>n;
for(int i=0;i<n;i++){
    if(num%10==0)
        num/=10;
    else
        num--;
}
cout<<num<<endl;

return 0;
}