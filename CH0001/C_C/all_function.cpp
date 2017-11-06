#include <iostream>

using namespace std;

/*
    S3�G �� t �� i, ���n���M��b�b�ܼ� t ���A�i��ܬ� t �� i �� t �]�Y t=t*i�^
    S4�G �� i ���� +1�A�Y i +1��  i�]�Y i=i+1�^
    S5�G �p�G i < 5, ��^���s����B�JS3�H�Ψ�᪺S4�MS5�F�_�h�A�t��k�����C
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
    int t1 = while_loop(5); // �I�s�禡, ��^���G
    cout << "Output result: "<< t1 << endl;
    cout << "=========================="<< endl<<endl;

    // use while loop method
    int t2 = do_while(5); // �I�s�禡, ��^���G
    cout << "Output result: "<< t2 << endl;
    cout << "=========================="<< endl<<endl;

    // use while loop method
    int t3 = for_loop(5); // �I�s�禡, ��^���G
    cout << "Output result: "<< t3 << endl;
    cout << "=========================="<< endl<<endl;

    return 0;
}
