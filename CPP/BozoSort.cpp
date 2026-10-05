#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <random>

using namespace std;

bool isSorted(const vector<int> &arr)
{
    if (arr.empty()) return true;
    for (size_t i = 1; i < arr.size(); ++i)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

void shuffleVector(vector<int> &arr, mt19937 &g)
{
    swap(arr[g() % arr.size()], arr[g() % arr.size()]);
}

void BozoSort(vector<int> &arr)
{
    random_device rd;
    mt19937 g(rd());

    while (!isSorted(arr))
    {
        shuffleVector(arr, g);
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

    BozoSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}