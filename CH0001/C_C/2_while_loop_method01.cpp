#include <iostream>

using namespace std;

int main()
{
    cout<< "Calcu   1 x 2 x 3 x 4 x 5"<< endl;
    // S1
    int t = 1;
    // S2
    int i = 2;

    /*
    S3： 使 t × i, 乘積仍然放在在變數 t 中，可表示為 t × i → t （即 t=t*i）
    S4： 使 i 的值 +1，即 i +1→  i（即 i=i+1）
    S5： 如果 i < 5, 返回重新執行步驟S3以及其後的S4和S5；否則，演算法結束。
    */
    while(i<=5)
    {
        // S3
        t = t*i;
        // S4
        i = i+1;
    }
    // print out result
    cout << "Output result: "<< t << endl;


    return 0;
}
