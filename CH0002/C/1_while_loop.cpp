/*
Author: Mark Pei
Day: 11/06/2017
*/
#include <iostream>

using namespace std;

int main()
{
    cout<< "Calcu   1 x 3 x 5 x 7 x 9 x 11"<< endl;
    // S1
    int t = 1;
    // S2
    int i = 3;

    /*
    S3： t×i→t（即 t=t*i）
    S4： i+2→t（即i=i+2）
    S5：若i<=11, 返回S3，否則，結束。
    該演算法不僅正確，而且是電腦較好的演算法，因為電腦是高速運算的自動機器，實現迴圈輕而易舉。
    */
    while(i<=11)
    {
        // S3
        t = t*i;
        // S4
        i = i+2;
    }
    // print out result
    cout << "Output result: "<< t << endl;


    return 0;
}
