#include<iostream>
using namespace std;
int a[1000];
int sum=0;
bool isok(int m){
	for(int i=0;i<m;i++){
		if(a[i]==a[m]){
			return false;
		}
	}
	return true;
}
void dfs(int m){
	if(m==9){
		if((a[0]*a[2]+a[1])*(a[6]*100+a[7]*10+a[8])+a[2]*(a[3]*100+a[4]*10+a[5])==10*a[2]*(a[6]*100+a[7]*10+a[8])){
			sum++;
		}
		return ;
	}
	for(int i=1;i<=9;i++){
		a[m]=i;
		if(isok(m)){
			dfs(m+1);
		}
	}
}
int main(){
	dfs(0);
	cout << sum;
	return 0;
}
