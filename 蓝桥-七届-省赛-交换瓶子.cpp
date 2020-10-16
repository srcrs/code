#include<iostream>
using namespace std;
int a[10005];
int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int sum = 0;
	for(int i=0;i<n*(n-1);i++){
		bool flag=true;
		for(int j=0;j<n;j++){
			if(a[j]!=j+1){
				flag=false;
				sum++;
				int x = a[j];
				int temp = a[j];
				a[j] = a[x-1];
				a[x-1] = temp;
			}
		}
		if(flag) break;
	}
	cout << sum;
	return 0;
}
