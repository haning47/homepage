#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
	cout << "請輸入一正整數：";
	int n, sum;		//n末數，sum暫存的和 
	cin >> n;
	
	//使用for
	sum=0; 
	for(int i=1;i<=n;i++){
		sum=sum+i; 
	} 
	cout << "for:" << sum << endl;
	
	//使用while
	sum=0;
	int j=1; 
	while(j<=n){
		sum=sum+j;
		j++; 
	} 
	cout << "while:" << sum << endl;
	
	//使用do-while
	sum=0;
	int k=1;
	do{
		sum=sum+k;
		k++; 
	}while(k<=n); 
	cout << "do-while:" << sum << endl;
	
	system("pause"); 
	return 0; 
} 
