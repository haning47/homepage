#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
	cout << "�п�J�@����ơG";
	int n, sum;		//n���ơAsum�Ȧs���M 
	cin >> n;
	
	//�ϥ�for
	sum=0; 
	for(int i=1;i<=n;i++){
		sum=sum+i; 
	} 
	cout << "for:" << sum << endl;
	
	//�ϥ�while
	sum=0;
	int j=1; 
	while(j<=n){
		sum=sum+j;
		j++; 
	} 
	cout << "while:" << sum << endl;
	
	//�ϥ�do-while
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
