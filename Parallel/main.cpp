//***************************************************************************
// File:         main.cpp
// Author:       
// Date:         
// Class:        Intro to C++ I
// Assignment:   Parallel Arrays
// Purpose:      Test techniques for handling arrays including parallel 
//                arrays in conjunction with functions
//***************************************************************************

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void printTitle (string title);
void printArray (const int arry[], int size);
int sumOfArray (const int arry[], int size);
void insertLastArray (int arryDest[], int &size, int max, int value);
void insertFirstArray (int arryDest[], int &size, int max, int value);
void copyArray (int arryDest[], int &sizeDest,
  const int arrySrc[], int sizeSrc, int max);
bool isSame (const int array1[], int size1, const int array2[], int size2);
void reverseArray (int arry[], int size);
bool isSorted (const int arry[], int size);

int main () {
  const int MAX = 10;

  int arrayA[MAX] = { 1, 2, 3, 4, 5 }, sizeA = 5;
  int arrayB[MAX] = { 10, 9, 8, 7, 6 }, sizeB = 5;
  int arrayC[MAX], sizeC = 0;

  //printTitle ("** Printing Array A: ");
  //printArray (arrayA, sizeA);

  //printTitle ("\n\n** Printing Array B: ");
  //printArray (arrayB, sizeB);

  //printTitle ("\n\n** Sum Of Array A: ");
  //cout << sumOfArray (arrayA, sizeA);

  //printTitle ("\n\n** Sum Of Array B: ");
  //cout << sumOfArray (arrayB, sizeB);

  //printTitle ("\n\n** Print arrayA after adding 6 at the end: ");
  //insertLastArray (arrayA, sizeA, MAX, 6);
  //printArray (arrayA, sizeA);

  //printTitle ("\n\n** Print arrayA after adding 6 at the beginning: ");
  //insertFirstArray (arrayA, sizeA, MAX, 6);
  //printArray (arrayA, sizeA);

  //printTitle ("\n\n** Print arrayC after copying arrayA to arrayC: ");
  //copyArray (arrayC, sizeC, arrayA, sizeA, MAX);
  //printArray (arrayC, sizeC);

  //printTitle ("\n\n** Is arrayC equal to arrayA: ");
  //if (isSame (arrayC, sizeC, arrayA, sizeA)) {
  //  printTitle ("Arrays are equal");
  //}
  //else {
  //  printTitle ("Arrays are not equal");
  //}

  //printTitle ("\n\n** Printing Array A Reversed: ");
  //reverseArray (arrayA, sizeA);
  //printArray (arrayA, sizeA);

  //printTitle ("\n\n** Reverse Array B and check isSorted: ");
  //reverseArray (arrayB, sizeB);
  //if (isSorted (arrayB, sizeB)) {
  //  cout << "Array B is sorted" << endl;
  //}
  //else {
  //  cout << "Array B is NOT sorted" << endl;
  //}

  return EXIT_SUCCESS;
}

/****************************************************************************
Function:     printTitle

Description:  prints the title

Parameters:   title - string to be printed

Returned:     None
****************************************************************************/
void printTitle (string title) {

}

/****************************************************************************
Function:     printArray

Description:  prints each element of an array right justified in a field of
three

Parameters:   arry - the array to be printed
              size - the number of elements in the array to be printed

Returned:     None
****************************************************************************/
void printArray (const int arry[], int size) {

}

/****************************************************************************
Function:     sumOfArray

Description:  adds all the elements in the array

Parameters:   arry - the array that is used
              size - the number of elements in the array

Returned:
****************************************************************************/
int sumOfArray (const int arry[], int size) {

  return 0; // change 0
}

/****************************************************************************
Function:     insertLastArray

Description:  adds value at the end of the array if space is available

Parameters:   arryDest - the array that is used
              size     - the number of elements in the array
              max      - maximum number of elements that can be saved to the array
              value     - the value to be added to the end of the array

Returned:     None
****************************************************************************/
void insertLastArray (int arryDest[], int &size, int max, int value) {

}

/****************************************************************************
Function:     insertFirstArray

Description:  adds value at the beginning of the array if space is available

Parameters:   arryDest - the array that is used
              size     - the number of elements in the array
              max      - maximum number of elements that can be saved to the array
              value    - the value to be added to the end of the array

Returned:     None
****************************************************************************/
void insertFirstArray (int arryDest[], int &size, int max, int value) {

}

/****************************************************************************
Function:     copyArray

Description:  copies each element from arrySrc to arryDest if space is available

Parameters:   arryDest - the array that elements are copied too
              sizeDest - the number of elements in the array
              arrySrc  - the array that elements are copied from
              sizeSrc  - the number of elements in the array
              max      - the maximum number of elements that can be saved to the
                         array

Returned:     None
****************************************************************************/
void copyArray (int arryDest[], int &sizeDest,
  const int arrySrc[], int sizeSrc, int max) {

}

/****************************************************************************
Function:     isSame

Description:  checks if two arrays are identical

Parameters:   arry1 - the array that elements are copied too
              size1 - the number of elements in the array
              arry2  - the array that elements are copied from
              size2  - the number of elements in the array

Returned:     true if arrays are identical; otherwise, fals
****************************************************************************/
bool isSame (const int array1[], int size1, const int array2[], int size2) {

  return true; // change true
}

/****************************************************************************
Function:     reverseArray

Description:  reverses the elements in an array

Parameters:   arry - the array used
              size - the number of elements in the array

Returned:     None
****************************************************************************/
void reverseArray (int arry[], int size) {

}

/****************************************************************************
Function:     isSorted

Description:  returns true is the array is in order from smallest to largest

Parameters:   arry - the array used
              size - the number of elements in the array

Returned:     True if array is sorted, otherwise false
****************************************************************************/
bool isSorted (const int arry[], int size) {

  return true; // change true
}