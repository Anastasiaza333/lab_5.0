#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    char A = 26;
    char B = 86;

    cout << "Boolean expression truth table: " << " (x " << B << "(y " << B << " z))" << A<< "(!x" << B << "(!y" << B << "!z))" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "|        x          |     y         |     z          |       y" << B << "z       |     x" << B <<" (y" << B << "z)     |    !y" << B << "!z    | !x " << B << "(!y" << B << "!z) | x" << B << "(y" << B << "z)" << A << "!x" << B << "(!y" << B << " !z) | " << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;

    for (int xx = 1;xx >= 0;xx--)
    {

        for (int yy = 1; yy >= 0;yy--)
        {

            for (int zz = 1;zz >= 0; zz--)
            {
                cout << "| " << setw(5) << xx << setw(6) << " |" << setw(6) << yy << setw(7) << "| "
                    << setw(5) << zz << setw(5) << " |" << setw(7) << (xx |(yy | zz)) << setw(6) << " |"
                    << setw(8) << ((xx |(yy|zz) && (!xx |(!yy | !zz))) << setw(8) << " |" << setw(9);
                bool result;
                if ((xx |(yy | zz)) == 1 && (!xx | (!yy | !zz)) == 0)
                    result = 0;
                else
                    result = 1;
                cout << result << setw(12) << " |" << endl;
            }

        }
    }
    cout << "----------------------------------------------------------------------------------" << endl;
    system("pause");
}