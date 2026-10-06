#include <iostream>
#include <vector>

using namespace std;

void ThanosSort(vector<int> &arr)
{
    const size_t N = arr.size();

    if (N == 1)
    {
        return;
    }

    const int mid = N / 2;

    vector<int> half_of_arr;

    for (size_t i = 0; i < mid; i++)
    {
        half_of_arr.push_back(arr[i]);
    }

    arr = half_of_arr;

    ThanosSort(arr);
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

    ThanosSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
