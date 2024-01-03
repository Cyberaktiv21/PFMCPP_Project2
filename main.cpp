#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 char
 double
 bool
 float
 void




2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type
'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of
type 'void'. b) at the end of the function, call ignoreUnused once and pass all
of your variables to it. see line 71 for an example

3) Declare 10 free functions
    each declaration should have a random number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name. remember: Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
    for each of those functions declared,
        a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variables to ignoreUnused() as you did in
2b) see main() for an example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() {
  // example:
  // int number = 2; //declaration of a variable named "number", that uses the
  // primitive type 'int', and the variable's initial value is '2'

  int age = 20;
  int count = 0;
  int rollNumber = 21;

  float price = 23.47f;
  float temperature = 36.5f;
  float weight = 52.7f;

  bool isStudent = true;
  bool isHungry = false;
  bool isSick = true;

  double pi = 3.14;
  double defVal = 33.9836;
  double balance = 399.99;

  ignoreUnused(
      age, count, rollNumber, price, temperature, weight, isStudent, isHungry,
      isSick, pi, defVal,
      balance); // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
// bool rentACar(int rentalDuration, int carType = 0)  //function declaration
// with random number of arguments, arbitrary number of arguments have default
// value
//{
//   ignoreUnused(rentalDuration, carType); //passing each function parameter to
//   the ignoreUnused() function
//  return {}; //if your function returns something other than void, add 'return
//  {};' at the end of it.
//}

// 1
bool carVal(int rentalDuration, int carType = 0) {
  ignoreUnused(rentalDuration, carType);
  return {};
}

// 2
int calculateSum(int a, int b) {
  ignoreUnused(a, b);
  return {};
}

// 3
double computeAverage(double firstNumber, double secondNumber,
                      double thirdNumber = 0.0) {
  ignoreUnused(firstNumber, secondNumber, thirdNumber);
  return {};
}

// 4
float updateTemperature(float currentTemperature, float adjustment = 0.0f) {
  ignoreUnused(currentTemperature, adjustment);
  return {};
}

// 5
int addNumbers(int num1, int num2, int num3 = 0, int num4 = 0) {
  ignoreUnused(num1, num2, num3, num4);
  return {};
}

// 6
double calculateDistance(double x1, double y1, double x2, double y2) {
  ignoreUnused(x1, y1, x2, y2);
  return {};
}

// 7
void processInput(int input) { ignoreUnused(input); }

// 8
bool sayYesOrNo(bool yesOrNo) {
  ignoreUnused(yesOrNo);
  return {};
}

// 9
float calculateTax(int income, int taxBracket = 0) {
  ignoreUnused(income, taxBracket);
  return {};
}

// 10
int findRank(int numberOfPlayers, int numberOfTeams) {
  ignoreUnused(numberOfPlayers, numberOfTeams);
  return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() {
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()

  auto rented = carVal(5, 1);
  auto sum = calculateSum(10, 20);
  auto average = computeAverage(4.5, 5.5);
  auto updatedTemp = updateTemperature(22.5f, 1.0f);
  auto sumNumbers = addNumbers(1, 2, 3);
  auto distance = calculateDistance(0.0, 0.0, 3.0, 4.0);
  processInput(5);
  auto decision = sayYesOrNo(true);
  auto tax = calculateTax(50000, 1);
  auto rank = findRank(10, 2);

  ignoreUnused(rented, sum, average, updatedTemp, sumNumbers, distance,
               decision, tax, rank);
  std::cout << "good to go!" << std::endl;
  return 0;
}
