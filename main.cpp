#include <iostream>
#include <fstream>
using namespace std;

void enterArrayData(double* array);
void outputArrayData(double* array);
double sumArray(double* array);
int main()
{
    arr
    enterArrayData(arr);
    outputArrayData(arr);

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
void outputArrayDate(double* array)
{
    cout << "Outputting array elements: ";
    for(int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
}
double sumArray(double* array)
{
    double sum = 0;
    for(int i= 0; i <5; i++)
    {
        sum = sum + array[i];
    }
    return sum;

}