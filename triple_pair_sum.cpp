#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in vector:-";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter the value of element " << i + 1 << ":- ";
        cin >> arr[i];
    }
    cout << "Array is:- ";
    cout << "{";
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j];
        if (j != n - 1)
        {
            cout << ", ";
        }
    }
    cout << "}";
    cout << endl;

    int sum = 80;
    for (int k = 0; k < arr.size(); k++)
    {
        int element1 = arr[k];
        for (int l = k + 1; l < arr.size(); l++)
        {
            int element2 = arr[l];
            for (int m = l + 1; m < arr.size(); m++)
            {
                int element3 = arr[m];
                if (element1 + element2 + element3 == sum)
                {
                    cout << "Triplet Pair sum is:- ";
                    cout << "{" << element1 << "," << element2 << "," << element3 << "}" << endl;
                }
            }
        }
    }
}