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
    S3�G t��i��t�]�Y t=t*i�^
    S4�G i+2��t�]�Yi=i+2�^
    S5�G�Yi<=11, ��^S3�A�_�h�A�����C
    �Ӻt��k���ȥ��T�A�ӥB�O�q�����n���t��k�A�]���q���O���t�B�⪺�۰ʾ����A��{�j�黴�ө��|�C
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
