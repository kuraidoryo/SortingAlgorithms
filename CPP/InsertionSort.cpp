#include <iostream>
#include <vector>

using namespace std;

void InsertionSort(vector<int> &arr)
{
    const size_t N = arr.size();

    for (size_t i = 1; i < N; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void PrintVector(const vector<int> &arr, const string &msg)
{
    cout << msg << ": ";
    for (const auto &el : arr)
    {
        cout << el << ' ';
    }
    cout << '\n';
}

int main()
{
    vector<int> arr = {2, 1, 3, 7, 6, 9};

    PrintVector(arr, "Original array");

    InsertionSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
