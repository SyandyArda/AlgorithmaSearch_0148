#include <iostream>
using namespace std;

int arr[20]; // array to be searched
int n;       // number of elements in the array
int i;       // index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    // Accept array elements
    cout << "\n----------------------\n";
    cout << " Enter array element \n";
    cout << "---------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin << arr[i];
    }
}

void LinearSearch()
{
    char ch;
    int ctr; // Number of comparisons
    int item;

    do
    {
        // Accept the number to be searched
        cout << "\nEnter the element you want to search: "; // step 1
    }
}







int main()

{
    std::cout << "Hello World!\n";
}
