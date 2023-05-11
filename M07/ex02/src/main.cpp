#include "Array.hpp"

#include <iostream>

// Test case for the Array class
void testArrayClass()
{
    // Test default constructor
    Array<int> arr1;
    std::cout << "arr1.size(): " << arr1.size() << std::endl;

    // Test constructor with size parameter
    Array<int> arr2(5);
    std::cout << "arr2.size(): " << arr2.size() << std::endl;

    // Test copy constructor
    Array<int> arr3(arr2);
    std::cout << "arr3.size(): " << arr3.size() << std::endl;

    // Test assignment operator
    Array<int> arr4;
    arr4 = arr3;
    std::cout << "arr4.size(): " << arr4.size() << std::endl;

    // Test element access using []
    arr4[0] = 10;
    std::cout << "arr4[0]: " << arr4[0] << std::endl;

    // Test out-of-range access
    try {
        int value = arr4[10]; // Accessing an element outside the array's size
        std::cout << "arr4[10]: " << value << std::endl;
    } catch (std::exception& e) {
        std::cout << "Out of range exception caught: " << e.what() << std::endl;
    }

    // Test size() function
    std::cout << "arr4.size(): " << arr4.size() << std::endl;

    // Destructor is implicitly called at the end of the test
}


void testArrayClass2()
{
    // Create an Array<int> object
    Array<char> arr1(3);
    arr1[0] = 'a';
    arr1[1] = 'd';
    arr1[2] = 'c';

    // Create an Array<float> object using the Array<int> object
    Array<float> arr2(arr1);

    // Print the elements of the Array<float> object
    for (size_t i = 0; i < arr2.size(); i++)
    {
        std::cout  << std::fixed << "arr2[" << i << "]: " << arr2[i] << std::endl;
    }
}

int main()
{
    std::cout << "- - - - - - - test 1 - - - - - - - - -" << std::endl;
    testArrayClass();
    std::cout << "\n- - - - - - - test 2 - - - - - - - - -" << std::endl;
    testArrayClass2();
    std::cout << "- - - - - - - - - - - - - - - -" << std::endl;

	// system("leaks Array");
    return 0;
}
