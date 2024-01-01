#include <iostream>                 //把"iostream"的標頭檔include進來 
#include <cstdlib>                  //把"cstdlib"的標頭檔include進來 

using namespace std;                //設定名稱空間(name space)為"std"

int main(void){                     /*宣告一個main()主函數，
                                    引數void代表不需要傳入引數 */ 

    cout << "Hello, C++!" << endl;  //程式的主要內容-印出" "中的字，並且換行 
     
    system("pause");                //在執行之後不要立刻關閉，讓我們可以看到結果
     
    return 0;                       /* 利用return傳回整數0，此數值由系統接收，
                                        代表程式可順利執行完成 */ 
}                                   //main()函數結束 
