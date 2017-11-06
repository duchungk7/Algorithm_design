#include <iostream>

using namespace std;

/*
    S3： 使 t × i, 乘積仍然放在在變數 t 中，可表示為 t × i → t （即 t=t*i）
    S4： 使 i 的值 +1，即 i +1→  i（即 i=i+1）
    S5： 如果 i < 5, 返回重新執行步驟S3以及其後的S4和S5；否則，演算法結束。
*/


int while_loop(int n)
{
    cout << "Use while loop !"<< endl;
    int t = 1;
    int i = 2;
    while(i<=n)
    {
        t = t*i;
        i = i+1;
    }

    return t;
}

int do_while(int n)
{
    cout << "Use do-while loop !"<< endl;
    int t = 1;
    int i = 2;
    do
    {
        t = t*i;
        i = i+1;
    }while(i<=n);

    return t;
}

int for_loop(int n)
{
    cout << "Use for-loop !"<< endl;
    int i, t = 1;
    for(i=2; i<=5; i++)
    {
        t = t*i;
    }

    return t;
}

int main()
{
    cout<< "Calcu   1 x 2 x 3 x 4 x 5"<< endl;
    cout << "=========================="<< endl<<endl;

    // use while loop method
    int t1 = while_loop(5); // 呼叫函式, 返回結果
    cout << "Output result: "<< t1 << endl;
    cout << "=========================="<< endl<<endl;

    // use while loop method
    int t2 = do_while(5); // 呼叫函式, 返回結果
    cout << "Output result: "<< t2 << endl;
    cout << "=========================="<< endl<<endl;

    // use while loop method
    int t3 = for_loop(5); // 呼叫函式, 返回結果
    cout << "Output result: "<< t3 << endl;
    cout << "=========================="<< endl<<endl;

    return 0;
}
