#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int input;
    int myArray;
    cout << "Iteration Count: "; // no endl; want to leave the cursor

    // https://study.com/academy/lesson/validating-input-data-in-c-plus-plus-programming.html
    while (!(cin >> input))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');// ref: https://stackoverflow.com/questions/2075898/good-input-validation-loop-using-cin-c
        cout << "Please enter a valid integer: ";
    }

    for (int index = 0; index < input; index++)
    {
        cout << "Ha";
    }
    return 0;
}
