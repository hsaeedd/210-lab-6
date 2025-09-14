#include <iostream>
#include <fstream>
using namespace std;

void enterArrayData(double* array);
void outputArrayData(double* array);
double sumArray(double* array);
int main()
{
    
}
void enterArrayData(double* array)
{
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "> Element #" << i << ": " << endl;
        cin >> array[i];
    }
}