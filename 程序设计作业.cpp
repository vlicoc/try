#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int x[1001],y[1001],res[1001];

int main()
{
    int n;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        //�ص�
        //���ǵ�һ��ʱҪ����������
        if(k>1)
        {
            //�������
            for(int i=0;i<1001;i++)
            {
                x[i]=0;
                y[i]=0;
                res[i]=0;
            }
            //������з�
            cout<<endl<<endl;
        }
        string a,b;
        cin>>a>>b;
        for(int i=a.length()-1;i>=0;i--)
            x[a.length()-1-i]=a[i]-'0';
        for(int j=b.length()-1;j>=0;j--)
            y[b.length()-1-j]=b[j]-'0';
        int l=max(a.length(),b.length());
        for(int i=0;i<=l;i++)
        {
            int t = x[i]+y[i];
            if(t>9)
            {
                t-=10;
                x[i+1]++;
            }
            res[i]=t;
        }
        int s;
        for(int i=1000;i>=0;i--)
        {
            if(res[i])
            {
                s=i;
                break;
            }
        }
        cout<<"Case "<<k<<":"<<endl;
        cout<<a<<" + "<<b<<" = ";
        for(int i=s;i>=0;i--)
            cout<<res[i];
        //��������һ�飬���β�������
        if(k==n)
            cout<<endl;
    }
    return 0;
}

