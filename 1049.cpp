#include<iostream>
using namespace std;
int dp1[2010],dp2[2010];
int v[105],w[105];
int main()
{
	int W,N;
	cin>>N>>W;
	for(int i=0;i<N;i++)
	{
		cin>>v[i]>>w[i];
	}
	for(int i=0;i<N;i++)
		for(int j=W;j>=w[i];j--)
		{
			if(dp1[j-w[i]]+v[i]>=dp1[j])
			{
				dp1[j]=dp1[j-w[i]]+v[i];
				dp2[j]=dp2[j-w[i]]+1;
			}
		}
	cout<<dp1[W]<<" "<<dp2[W];
	return 0;
}
