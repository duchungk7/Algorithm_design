/*
Author: Mark Pei
Day: 11/06/2017
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    S3： 使 t × i, 乘積仍然放在在變數 t 中，可表示為 t × i → t （即 t=t*i）
    S4： 使 i 的值 +1，即 i +1→  i（即 i=i+1）
    S5： 如果 i < 5, 返回重新執行步驟S3以及其後的S4和S5；否則，演算法結束。
*/

class Calcu
{
private:
    int n;

public:
    //Initial
    Calcu();

    // method
    int while_loop();
    int do_while();
    int for_loop();

};

Calcu::Calcu()
{
    cout << "Please input number n: ";
    cin >> n;
    cout << "You's input the number: "<< n << endl;
    cout << "=========================="<< endl<<endl;
}

int Calcu::while_loop()
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

int Calcu::do_while()
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

int Calcu::for_loop()
{
    cout << "Use for-loop !"<< endl;
    int i, t = 1;
    for(i=2; i<=n; i++)
    {
        t = t*i;
    }
    return t;
}

int main()
{
    cout<< "Calcu   1 x 2 x 3 x 4 x 5"<< endl;
    cout << "=========================="<< endl<<endl;

    Calcu C1;

    // use for loop method
    cout << "Output result: "<< C1.for_loop() << endl;
    cout << "=========================="<< endl<<endl;

    // use while loop method
    cout << "Output result: "<< C1.while_loop() << endl;
    cout << "=========================="<< endl<<endl;

    // use do-while loop method
    cout << "Output result: "<< C1.do_while() << endl;
    cout << "=========================="<< endl<<endl;

    system("PAUSE");
    return 0;
}
