#include<bits/stdc++.h>
using namespace std;
int a[10][10];
bool isok(int x,int y,int value){
	for(int i=0;i<9;i++){
		if(a[x][i]==value||a[i][y]==value){
			return false;
		}
	}
	for(int i=(x/3)*3;i<(x/3+1)*3;i++){
		for(int j=(y/3)*3;j<(y/3+1)*3;j++){
			if(a[i][j]==value){
				return false;
			}
		}
	}
	return true;
}
void dfs(int x,int y){
	if(y>=9){
		dfs(x+1,0);
		return ;
	}
	if(x>=9){
		for(int m=0;m<9;m++){
		  for(int n=0;n<9;n++){
			cout << a[m][n];
		  }
		  cout << endl;
	    }
		return ;
	}
	if(a[x][y]==0){
		for(int i=1;i<=9;i++){
			if(isok(x,y,i)){
				a[x][y]=i;
				dfs(x,y+1);
				a[x][y]=0;
			}
		}
	} else{
		dfs(x,y+1);
	}
}
int main()
{
	for(int i=0;i<9;i++){
		string s;
		cin >> s;
		for(int j=0;j<9;j++){
			a[i][j]=s[j]-'0';
		}
	}
	dfs(0,0);
	return 0;
}
