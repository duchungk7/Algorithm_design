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
    S3�G �� t �� i, ���n���M��b�b�ܼ� t ���A�i��ܬ� t �� i �� t �]�Y t=t*i�^
    S4�G �� i ���� +1�A�Y i +1��  i�]�Y i=i+1�^
    S5�G �p�G i < 5, ��^���s����B�JS3�H�Ψ�᪺S4�MS5�F�_�h�A�t��k�����C
    */

    for(i=2; i<=5; i++)
    {
        t = t*i;
    }
    // print out result
    cout << "Output result: "<< t << endl;


    return 0;
}
