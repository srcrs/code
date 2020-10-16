#include<iostream>
using namespace std;
int n=100000;
bool prim[100000];
bool flag=false;
void init(){
	for(int i=0;i<n;i++){
		if(i%2){
			prim[i]=true;
		} else{
			prim[i]=false;
		}
	}
	prim[1]=false;
	prim[2]=true;
	for(int i=3;i*i<n;i++){
		if(prim[i]){
			for(int j=2*i;j<n;j+=i){
				prim[j]=false;
			}
		}
	}
}
int main()
{
	init();
	int d=0;
	for(int i=1;i<n;i++){
		for(int j=2;j<n;j++){
			if(prim[j]){
				for(int k=0;k<10;k++){
					if(!prim[k*i+j]){
						break;
					}
					if(k==9){
						d=i;
						flag=true;
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
	cout << d;
	return 0;
}
