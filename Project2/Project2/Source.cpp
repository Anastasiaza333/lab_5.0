
#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main()
{   
    int temp;
    int rezult_1[25];
    const int fora = 10;
    const int forb = 9;
    const int forc = 10;
    const int foru = 25;
    int A[fora] = { 1,5,6,9,10,14,15,16,21,22};
    int B[forb] = {1,2,11,16,17,20,21,24,25};
    int C[forc] = {1,2,6,7,8,12,17,21,22,25};
    int U[foru] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
    int q;

    cout << "A [10] = { ";
    for (int i = 0; i < fora; i++)
        cout << A[i] << " ";
    cout << "}" << endl;

    cout << "B [9] = { ";
    for (int i = 0; i < forb; i++)
        cout << B[i] << " ";
    cout << "}" << endl;

    cout << "C [10] = { ";
    for (int i = 0; i < forc; i++)
        cout << C[i] << " ";
    cout << "}" << endl;

    cout << "U [25] = { ";
    for (int i = 0; i < foru; i++)
        cout << U[i] << " ";
    cout << "}" << endl;


    cout << "zaperechenniaB = { ";
    for (int i = 0; i <= foru; i++)
    {
        temp = 0;
        for (int j = 0; j <= forb; j++)
        {
            if (U[i] != B[j])
                temp = temp + 1;
        }
        if (temp == forb + 1)
            cout << U[i] << " ";
    }
    cout << "}" << endl;

    const int forzapb = 16;
    //int zaperechenniaB[forzapb];
    /*for (int i = 0; i < forzapb; i++)
    {
      cout << zaperechenniaB[i] << " ";
    } cout << endl;*/

    int zaperechenniaB[forzapb] = { 4, 5, 6, 7, 8, 9, 10, 11,
      12, 13, 19, 20, 21, 22, 24, 25 };
    cout << "spilni_A_and_zapB = { ";
    for (int i = 0; i < forzapb; i++)
    {
        for (int j = 0; j < fora; j++)
        {
            if (zaperechenniaB[i] == A[j])
            {
                cout << zaperechenniaB[i] << " ";
            }
        }
    }
    cout << "}" << endl;

    const int A_and_B = 6;
    int spilni_A_and_zapB[A_and_B] = { 10, 11, 12, 13, 20, 25 };

    //zaperechenniaB
    //spilni_A_and_zapB
    //zaperechennia (spilni_A_and_zapB) = result_1
    //все, що зверху = result_1
    cout << "result_1 = { ";
    for (int i = 0; i <= foru; i++)
    {
        q = 0;
        for (int j = 0; j <= A_and_B; j++)
        {
            if (U[i] != spilni_A_and_zapB[j])
                q = q + 1;
        }
        if (q == A_and_B + 1)
        {
            cout << U[i] << " ";
        }

    }
    cout << "}" << endl;

    const int for_result_1 = 19;
    int result_1[for_result_1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24 };

    cout << "result_2 = {";
    for (int i = 0; i < for_result_1; i++)
    {
        for (int j = 0; j < forzapb; j++)
        {
            if (result_1[i] == zaperechenniaB[j])
                cout << result_1[i] << " ";
        }

    } cout << "}" << endl;

    const int for_result_2 = 10;
    int result_2[for_result_2] = { 4, 5, 6, 7, 8, 9, 19, 21, 22, 24 };

    const int for_result_3 = 19;
    int result_3[for_result_3];

    for (int i = 0; i < forb; i++)
    {
        result_3[i] = B[i];
    }

    for (int i = forb; i < for_result_3; i++)
    {
        result_3[i] = result_2[i - forb];
    }

    cout << "result_3 = { ";
    for (int i = 0; i < 19; i++)
    {
        cout << result_3[i] << " ";
    }
    cout << "}" << endl;
    //виведення результату_3 від більшого до найменшого
    //сортування масиву
    /*int k = 0;
    int j;
    for (int i = 0; i < for_result_3; i++)
    {
      j = i;
      for (int t = i; i < for_result_3; t = t + 1)
      {
        if (result_3[j] > result_3[t])
        {
          j = k;
        }
      }
      swap(result_3[i], result_3[j]);
    }*/


    //result_3 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24 };
    const int for_result_4 = 23;
    int result_4[for_result_4];

    for (int i = 0; i < forc; i++)
    {
        result_4[i] = C[i];
    }
    for (int i = forc; i < for_result_4; i++)
    {
        result_4[i] = result_3[i - forc];
    }
    cout << "result = { ";
    for (int i = 0; i < for_result_4; i++)
    {
        cout << result_4[i] << " ";
    }
    cout << "}" << endl << endl;


    //for (int i = 0; i < for_result_4; i++)
      //cout << result_4[i] << " ";