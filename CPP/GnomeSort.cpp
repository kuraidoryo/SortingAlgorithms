#include <iostream>
#include <vector>

using namespace std;

void GnomeSort(vector<int> &arr)
{
    const size_t N = arr.size();

    size_t index = 0;

    while (index < N)
    {
        if (index == 0)
        {
            index++;
        }
        if (arr[index] >= arr[index - 1])
        {
            index++;
        }
        else
        {
            swap(arr[index], arr[index - 1]);
            index--;
        }
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

    GnomeSort(arr);

    PrintVector(arr, "Sorted array");

    return 0;
}
