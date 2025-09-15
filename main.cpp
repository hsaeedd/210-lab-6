#include <iostream>
#include <fstream>
using namespace std;

const int SIZE = 5;
void enterArrayData(double* array);
void outputArrayData(double* array);
double sumArray(double* array);
int main()
{
    double* arr = new double[SIZE];
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
    for(int i = 0; i < SIZE; i++)
    {
        cout << "> Element #" << i << ": ";
        cin >> *(array + i);
    }
    cout << "Data entry complete." << endl;
}
void outputArrayData(double* array)
{
    cout << "Outputting array elements: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}
double sumArray(double* array)
{
    double sum = 0;
    for(int i= 0; i <SIZE; i++)
    {
        sum = sum + *(array + i);
    }
    return sum;

}