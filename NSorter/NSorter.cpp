#include <iostream>
using namespace std;

int main()
{
    int random[10]; // array of 10 integers
    int exit;
    cout << "Please give 10 numbers :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> random[i];
    }
    for (int j = 0; j < 10; j++) //main loop which sorts numbers from smallest to biggest
    {
        exit = 0;
        for (int l = 0; l < 9; l++)
        {
            int m = random[l];
            int n = random[l + 1];
            if (random[l] > random[l + 1])
            {
                random[l] = n;
                random[l + 1] = m;
                exit = 0;
            }
            else
            {
                exit++;
            }
        }
        if (exit == 9) // optimizer, which prevent lopp from repeating, in case of integers already sorted
        {
            cout << "sorted array :" << endl;
            for (int k = 0; k < 10; k++)
            {
                cout << random[k] << " ";
            }
            return 0;
        }
    }
}