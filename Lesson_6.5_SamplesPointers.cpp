/*
Lesson 6.5 Samples Pointers
Pawelski
5/10/2021
Here are the samples for this lesson!
*/
#include <iostream>
using namespace std;

void myFunction(int arr[])
{
    cout << arr << "\n";
}

int main()
{
    /*
    Example #1
    This example show how to use the address-of
    and dereference operators.
    */
    int x = 5;
    cout << x << "\n";
    cout << &x << "\n";
    cout << *(&x) << "\n\n";

    /*
    Example #2
    This example shows how to declare and
    initialize a pointer. Just like variables, you
    cannot use a pointer unless it is initialized.
    Since pointers store memory addresses, the value
    needs to be a valid memory address.
    */
    int* iPtr;
    int* xPtr = &x;
    
    /*
    Example #3
    These show that the pointer "points" to the
    variable.
    */
    cout << &x << "\n";
    cout << xPtr << "\n\n";

    /*
    Example #4
    This shows how to use the dereference operator with
    pointers.
    */
    int value = 10;
    cout << &value << "\n";
    cout << value << "\n";

    int* ptr3 = &value;
    cout << ptr3 << "\n";
    cout << *ptr3 << "\n\n";

    /*
    Example #5
    This shows that arrays a just a pointer to the
    first element.
    */
    int myArray[20] = { 2 };
    int* myPointer = myArray;
    cout << myArray[0] << "\n";
    cout << *myPointer << "\n\n";

    /*
    Example #6
    This shows that passing an array as a parameter
    is really passing a pointer!
    */
    int sample[] = { 101, 102, 103, 104 };
    myFunction(sample);
    return 0;
}
