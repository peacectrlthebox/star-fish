// ============================================================
// C++ Basics: Introduction to `int`
// ============================================================
// This file is meant to be read top to bottom, then compiled and run.
// Every C++ program needs a main() function — it's where the program
// starts running.

#include <iostream>  // brings in std::cout (print) and std::cin (read input)

int main() {
    // ------------------------------------------------------------
    // 1. Declaring a variable
    // ------------------------------------------------------------
    // `int` means "this variable holds a whole number" (no decimals).
    // Here we create a variable named `age`, of type int, and give it
    // the starting value 25.
    int age = 25;

    // std::cout is how you print text to the screen.
    // The << operator sends things into the output stream, in order.
    // "\n" starts a new line.
    std::cout << "age = " << age << "\n";

    // ------------------------------------------------------------
    // 2. Changing a variable's value
    // ------------------------------------------------------------
    // Unlike a math variable, a C++ variable can be reassigned any time.
    age = 26;
    std::cout << "after a birthday, age = " << age << "\n";

    // ------------------------------------------------------------
    // 3. Doing arithmetic with ints
    // ------------------------------------------------------------
    int apples = 10;
    int orangesGiven = 3;

    // Basic math operators: + - * / all work the way you'd expect.
    int applesLeft = apples - orangesGiven;
    std::cout << "applesLeft = " << applesLeft << "\n";

    // % is the "modulo" operator — it gives the REMAINDER of division,
    // not the result. 10 divided by 3 is 3 remainder 1, so 10 % 3 == 1.
    int remainder = apples % orangesGiven;
    std::cout << "10 % 3 = " << remainder << "\n";

    // Careful: dividing two ints in C++ throws away any decimal part.
    // 10 / 3 is mathematically 3.333..., but as ints it becomes 3.
    int divided = apples / orangesGiven;
    std::cout << "10 / 3 as ints = " << divided << " (the .333 is dropped!)\n";

    // ------------------------------------------------------------
    // 4. Reading an int from the user
    // ------------------------------------------------------------
    int favoriteNumber;  // declared but not given a value yet
    std::cout << "Enter your favorite whole number: ";

    // std::cin reads what the user types and stores it into the variable.
    // The >> operator here means "read into", the opposite direction of <<.
    std::cin >> favoriteNumber;

    // We can use the value we just read right away, like any other int.
    std::cout << "Your favorite number doubled is " << (favoriteNumber * 2) << "\n";

    return 0;  // 0 means "the program finished successfully"
}
