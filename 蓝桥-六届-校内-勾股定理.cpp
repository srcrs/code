#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if((i+j)>n&&abs(i-j)<n){
				if(i*i+j*j==n*n){
					sum++;
				}
			}
		}
	}
	cout << sum;
	return 0;
}
