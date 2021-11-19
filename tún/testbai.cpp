#include<iomanip>
#include<iostream>
using namespace std;
int main ()
{
    cout << setw(8) << "tong chi phi" << endl;
    cout << "========+++++++========" << endl;
    cout << showpoint << right << setprecision(8);
    cout << setw(8) << "sach:" << setw(20) << 400.000 << endl;
    cout << setw(8) << "thuc an:" << setw(20) << 2000.00 << endl;
    cout << setw(8) << "quan ao:" << setw(20) << 3.200 << endl;

    return 0;
    
}