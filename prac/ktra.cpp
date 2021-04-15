#include<iostream>
using namespace std;

acData[i] = *(acData + i) ————————->1D array in form of pointer
                 a[i] = *(a + i) ————————->ith element of an 1D array
                             acData[i][j] = *(acData[i] + j);
————————–> 2D array in form of 1D array and pointer.acData[i][j] = *(*(acData + i) + j) ———————->2D array in form of pointer.int main()
{
    int height; int length;
    cin >> height >> length;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if (i == 1 || j == 1 || i == height || j == length)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
