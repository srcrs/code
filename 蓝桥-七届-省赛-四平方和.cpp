#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int dir[5000005]={0};
int n;
void init(){
	fill(dir,dir+n,0);
	for(int i=0;i*i<=n;i++){
		for(int j=0;j*j<=n;j++){
			if(i*i+j*j<=n){
				dir[i*i+j*j]=1;
			}
		}
	}
}
int main()
{
	cin >> n;
	init();
	bool flag=false;
	for(int i=0;i*i<=n;i++){
		for(int j=0;j*j<=n;j++){
			if(dir[n-i*i-j*j]){
				for(int k=0;k*k<=n;k++){
					int d = (int)sqrt(n-(i*i+j*j+k*k));
					if(d*d==(n-(i*i+j*j+k*k))){
						cout << i << " " << j << " " << k << " " << d;
						flag=true;
						break;
					}
				}
			}
			if(flag){
				break;
			}
		}
		if(flag){
			break;
		}
	}
	return 0;
}
