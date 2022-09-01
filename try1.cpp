#include<iostream>
using namespace std;
int main()
{
    int m,n,ans=0;
    char a[5][1000000000];
    cin>>m>>n;
    for(int j=0;j<m;j++)
        for(int i=0;i<n;i++)
            {
                cin>>a[j][i];
            }
    for(int j=0;j<m;j++)
        for(int i=1;i<n;i++)
        {
            if(a[j][i]==a[j][i-1])
            {
                ans++;
                break;
            }
        }
    cout<<ans;
    return 0;
}
