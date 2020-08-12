#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    // Declare loop counters
    int i, j, k;

    // Create a multidimensional array of ints
    array<int, 2>^ arr = gcnew array<int, 2>(3, 2);
    Console::WriteLine("Rank is {0}", arr->Rank);
    Console::WriteLine("Length is {0}", arr->Length);

    // Print out the array dimension information
    for (size_t i = 0; i < arr->Rank; i++)
    {
        Console::WriteLine("Dimension {0} is of size {1}", i, arr->GetLength(i));
    }

    // Fill the array with values
    for (size_t j = 0; j < arr->GetLength(0); j++)
    {
        for (k = 0; k < arr->GetLength(1); k++)
            arr[j, k] = (j + 1) * (k + 1);
    }

    //Print out the array data
    for (size_t j = arr->GetLowerBound(0); j <=arr->GetUpperBound(0); j++)
    {
        for (k = arr->GetLowerBound(1); k <= arr->GetUpperBound(1); k++)
            Console::WriteLine("pn[{0},{1}] = {2}", j, k, arr[j, k]);
    }

    // Create another multidimensional array of ints
    array<int, 2>^ arr2 = gcnew array<int, 2>(3, 2);

    // Fill the array with a constant value
    for (size_t j = 0; j < arr2->GetLength(0); j++)
        for (size_t k = 0; k < arr2->GetLength(1); k++)
            arr2[j, k] = 47;
        
    // Copy two values from arr to arr2
    System::Array::Copy(arr, 0, arr2, 2, 2);

    for (size_t j = arr2->GetLowerBound(0); j <= arr2->GetUpperBound(0); j++)
        for (size_t k = arr2->GetLowerBound(1); k <= arr2->GetUpperBound(1); k++)
            Console::WriteLine("pn[{0}, {1}] = {2}", j, k, arr2[j, k]);
        {

        }
    {

    }
    return 0;
}
