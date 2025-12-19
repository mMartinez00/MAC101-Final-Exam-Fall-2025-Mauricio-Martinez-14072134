/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: Mauricio Martinez
 * Date: 12/18/25
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 *
 * HINTS:
 * - Use 'double' or 'float' for decimal numbers
 * - Use 'cin' to get input from the user
 * - Use 'cout' to display messages and results
 *
 * BMI CATEGORIES (BONUS):
 * - Underweight: BMI < 18.5
 * - Normal weight: BMI 18.5 - 24.9
 * - Overweight: BMI 25 - 29.9
 * - Obese: BMI >= 30
 *
 * GRADING FOCUS:
 * - Can you get input from the user?
 * - Can you perform the calculation correctly?
 * - Can you display the result in a user-friendly way?
 */

#include <iostream>
using namespace std;

int main()
{
  // TODO: Declare variables for weight, height, and BMI
  // Use 'double' so you can handle decimal values
  // Hint: You'll need three double variables
  double weight;
  double height;
  double BMI;

  // TODO: Greet the user and explain what the program does
  cout << "Welcome to the BMI Calculator!" << endl;
  cout << "This program will calculate your Body Mass Index." << endl;
  cout << endl;

  // TODO: Ask for the user's weight in kilograms
  // Hint: Use cout to ask the question, then cin to store the answer in your weight variable

  // Get user input for weight in kg
  cout << "Enter your weight in kilograms: ";
  cin >> weight;

  // TODO: Ask for the user's height in meters
  // Hint: Same pattern as weight - ask with cout, capture with cin

  // Get user input for user height in meters
  cout << "Enter your height in meters: ";
  cin >> height;

  // TODO: Calculate the BMI
  // Formula: BMI = weight / (height × height)
  // Hint: Divide weight by height squared. Remember to use * for multiplication in C++

  // Get BMI using formula
  BMI = weight / (height * height);

  // TODO: Display the result
  // Hint: Use cout to display a message and the bmi variable
  cout << "Your BMI is : " << BMI;

  // BONUS TODO: Add if-else statements to tell the user their BMI category
  // THINK ABOUT:
  // - You need to check the bmi value against the category thresholds
  // - Use if, else if, and else to handle the different ranges
  // - Start with the lowest threshold (< 18.5) and work your way up
  //
  // STRUCTURE HINT:
  // if(bmi is less than first threshold) {
  //     tell user first category
  // } else if(bmi is less than second threshold) {
  //     tell user second category
  // } ... continue for all categories

  // If statements to display message
  if(BMI < 18.5) {
    cout << "You are under weight";
  } else if (BMI > 18.5 && BMI < 24.9) {
    cout << "You are normal weight";
  } else if (BMI > 25 && BMI < 29.9) {
    cout << "You are overweight";
  } else if (BMI >= 30) {
    cout << "You are obese";
  }

  cout << "\nThank you for using the BMI Calculator!" << endl;

  return 0;
}
