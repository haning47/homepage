#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
	int num, mod;				// num:編號，mod除以4的餘數 
	cout << "輸入正整數(0代表結束):"; 
    while(cin >> num){			//使它不要只能輸入一次(簡易寫法) 
		if(num==0)
			break;
		else{ 
              mod = num%4;		//把num除以4的餘數給mod 
              switch(mod){
                case 1:
                     cout << "一班" << endl;
                     break;
                case 2:
                     cout << "二班" << endl;
                     break;
                case 3:
                     cout << "三班" << endl;
                     break;
                case 0:
                     cout << "四班" << endl;
                     break; 
            	default:
					 cout << "輸入錯誤" << endl; 
               }
               cout << "輸入正整數(0代表結束):"; 
        } 
    }
	return 0; 
} 
