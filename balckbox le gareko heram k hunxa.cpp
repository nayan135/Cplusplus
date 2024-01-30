#include <iostream>

using namespace std;

class Numbers {
public:
  // Default constructor
  Numbers() {
    m_number1 = 0;
    m_number2 = 0;
  }

  // Constructor with two parameters
  Numbers(int number1, int number2) {
    m_number1 = number1;
    m_number2 = number2;
  }

  // Function to get the multiplication of two numbers
  int getMultiplication() {
    return m_number1 * m_number2;
  }

private:
  // Member variables
  int m_number1;
  int m_number2;
};

int main() {
  // Get the input from the user
  int number1, number2;
  cout << "Enter the first number: " << endl;
  cin >> number1;
  cout << "Enter the second number: " << endl;
  cin >> number2;
Numbers num;
  // Create an object of the Numbers class
  Numbers numbers(number1, number2);

  // Get the multiplication of two numbers
  int multiplication = numbers.getMultiplication();

  // Print the multiplication of two numbers
  cout << "The multiplication of two numbers is: " << multiplication << endl;

  return 0;
}