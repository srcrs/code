#include<iostream>
using namespace std;
int main(){
	int n=900;
	int m=0;
	bool flag = true;
	int sum=0;
	while(n>0){
		if(flag&&n>0){
			n -= 10;
			m++;
			sum++;
			if(sum==60){
				flag=false;
				sum=0;
			}
		}
		if(!flag&&n>0){
			n += 5;
			m++;
			sum++;
			if(sum==60){
				flag=true;
				sum=0;
			}
		}
	}
	cout << n << "\n";
	cout << m;
}
