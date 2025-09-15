#include <iostream>
#include <fstream>
using namespace std;

void enterArrayData(double* array);
void outputArrayData(double* array);
double sumArray(double* array);
int main()
{
    double* arr = new double[5];
    enterArrayData(arr);
    outputArrayData(arr);

    double s = sumArray(arr);
    cout << "Sum of values: " << s << endl;

    delete [] arr;

    return 0;


}
void enterArrayData(double* array)
{
    cout << "Data entry for the array:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "> Element #" << i << ": " << endl;
        cin >> array[i];
    }
    cout << endl;
    cout << "Data entry complete." << endl;
}
void outputArrayData(double* array)
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