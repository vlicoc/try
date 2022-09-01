#include<iostream>
using namespace std;
int main() {
	int n, m, a[1010], sum = 0, p = 0, q = 0;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	while (p < n) {
		if (sum < m) {
			sum += a[q];
			q++;
		}
		if (sum > m) {
			sum -= a[p];
			p++;
		}
		if(sum==m){		 
			cout << p << " " << q-1<< endl;
			sum+=a[q];
			q++; 
		} 
	}
	return 0;
}
