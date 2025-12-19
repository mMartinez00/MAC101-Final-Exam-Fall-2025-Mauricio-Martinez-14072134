/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: Mauricio Martinez
 * Date: 12/18/25
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

void bubbleSort() {

}

int main()
{
  // An unsorted array of numbers 1-100 for you to sort
  int numbers[100] = {
      63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
      82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
      98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
      21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
      52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
      54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
      35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
      51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
      33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
      28, 90, 55, 17, 79, 4, 64, 2, 53, 60};

  // Initialize array_length variable and assign numbers array length
  int array_length = sizeof(numbers) / sizeof(numbers[0]);

  // TODO: Display the array BEFORE sorting
  cout << "Array before sorting:" << endl;

  // Print numebrs array before sorting
  for(int i = 0; i < array_length; i++) {
    cout << numbers[i] << endl;
  }
  // Hint: Use a loop to print the first 10-20 elements from the numbers array
  // Example approach: for(int i = 0; i < 10; i++) { cout << numbers[i] << " "; }

  // TODO: Implement your sorting algorithm here
  // BUBBLE SORT APPROACH:
  // - Outer loop: goes through the array multiple times (think: how many passes do you need?)
  // - Inner loop: compares adjacent elements (compare each pair in the array)
  // - If elements are in wrong order, swap them
  //
  // THINK ABOUT:
  // - What condition determines if two numbers are in the "wrong order"?
  // - How do you compare element at position j with element at position j+1?
  // - What three steps are needed to swap two values? (Hint: you need a temporary variable)
  //
  // STRUCTURE HINT:
  // for(outer loop - controls how many times we pass through) {
  //     for(inner loop - goes through comparing adjacent pairs) {
  //         if(need to swap?) {
  //             // perform the swap using a temp variable
  //         }
  //     }
  // }

  // Initializing loop bounds
  for(int i = 0; i < array_length - 1; i++) {
    // Assume array hasnt been sorted
    bool swapped = false;

    // Loop through unsorted portion of array
    for(int j = 0; j < array_length - i - 1; j++) {
      
      // If left side is larger than right side (ascending sort)
      if(numbers[j] > numbers[j+1]) {
        // declare temp variable to swap values
        int temp;
        swapped = true;
        // Move larger int to the right
        temp = numbers[j];
        numbers[j] = numbers[j+1];
        numbers[j+1] = temp;
      }

      
    }
    if(!swapped) break;
  }

  // TODO: Display the array AFTER sorting
  cout << "\nArray after sorting:" << endl;
  for(int i = 0; i < array_length; i++) {
    cout << numbers[i] << endl;
  }
  // Hint: Print the first 10-20 elements to verify they're now in order (should be 1, 2, 3, ...)

  return 0;
}
