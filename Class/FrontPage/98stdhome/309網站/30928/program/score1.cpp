#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    cout << "�п�J����(���)�G" ; 
    
    //�ŧi�ܼ�"score"�åB�N�ϥΪ̿�J���Ʀr�ᵹscore 
    int score;
    cin >> score;
    
    //��if/else�Ϥ��X�T�ӳ����A�åB�b�̫�default     
    if(score>=80 && score<=100){
        cout << "���Z������!!" << endl; 
    }else if(score>=60 && score<80){
        cout << "���Z�٥i�H��~���L�A�[�o�@�I���ӷ|��n"  << endl; 
    }else if(score>=0 && score<60) 
        cout << "���Z���ή�C!�p�߭n�ɦ���~" << endl;
    else
        cout << "���o�ؤ��ƶ�??" <<endl;  

    system("pause");
    return 0;
}
