#include <iostream>
#include <cstdlib>
using namespace std;
int main(void){
    cout << "請輸入分數(整數)：" ; 
    
    //宣告變數"score"並且將使用者輸入的數字丟給score 
    int score;
    cin >> score;
    
    //用if/else區分出三個部份，並且在最後default     
    if(score>=80 && score<=100){
        cout << "成績不錯嘛!!" << endl; 
    }else if(score>=60 && score<80){
        cout << "成績還可以啦~不過再加油一點應該會更好"  << endl; 
    }else if(score>=0 && score<60) 
        cout << "成績不及格耶!小心要補考呦~" << endl;
    else
        cout << "有這種分數嗎??" <<endl;  

    system("pause");
    return 0;
}
