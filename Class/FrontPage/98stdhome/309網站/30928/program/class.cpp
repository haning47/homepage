#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
	int num, mod;				// num:�s���Amod���H4���l�� 
	cout << "��J�����(0�N����):"; 
    while(cin >> num){			//�ϥ����n�u���J�@��(²���g�k) 
		if(num==0)
			break;
		else{ 
              mod = num%4;		//��num���H4���l�Ƶ�mod 
              switch(mod){
                case 1:
                     cout << "�@�Z" << endl;
                     break;
                case 2:
                     cout << "�G�Z" << endl;
                     break;
                case 3:
                     cout << "�T�Z" << endl;
                     break;
                case 0:
                     cout << "�|�Z" << endl;
                     break; 
            	default:
					 cout << "��J���~" << endl; 
               }
               cout << "��J�����(0�N����):"; 
        } 
    }
	return 0; 
} 
