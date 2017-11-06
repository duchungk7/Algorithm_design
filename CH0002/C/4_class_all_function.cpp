/*
Author: Mark Pei
Day: 11/06/2017
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    S3�G �� t �� i, ���n���M��b�b�ܼ� t ���A�i��ܬ� t �� i �� t �]�Y t=t*i�^
    S4�G �� i ���� +1�A�Y i +1��  i�]�Y i=i+1�^
    S5�G �p�G i < 5, ��^���s����B�JS3�H�Ψ�᪺S4�MS5�F�_�h�A�t��k�����C
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


    // check n
    for (int i=0; i< 3; i++)
    {
        cout << "Please input number 3,5,7,9,11...: ";
        cin >> n;
        if (n%2 != 0)
        {
            break;
        }else
        {
            cout<< "input error !"<<endl;
            continue;
        }
    }
    cout << "You's input the number: "<< n << endl;

    cout << "=========================="<< endl<<endl;
}

int Calcu::while_loop()
{
    cout << "Use while loop !"<< endl;
    int t = 1;
    int i = 3;
    while(i<=n)
    {
        t = t*i;
        i = i+2;
    }
    return t;
}

int Calcu::do_while()
{
    cout << "Use do-while loop !"<< endl;
    int t = 1;
    int i = 3;
    do
    {
        t = t*i;
        i = i+2;
    }while(i<=n);
    return t;
}

int Calcu::for_loop()
{
    cout << "Use for-loop !"<< endl;
    int i, t = 1;
    for(i=3; i<=n; i+=2)
    {
        t = t*i;
    }
    return t;
}

int main()
{
    cout<< "Calcu   1 x 3 x 5 x 7 x 9 x 11..."<< endl;
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
