// Application developed as a requirement of Assessment 2 of the DevOps Tools
// Torrens University - Sydney
#include <iostream>

int main()
{
    std::cout << "##### Calculator Software #####\n";
    std::cout << "Ver 1.2\n\n";

    int A;
    int B;

    std::cout << "Please insert variable A:\n";
    std::cin >> A;

    std::cout << "\nPlease insert variable B:\n";
    std::cin >> B;

    //This function sums variable A and variable B and prints the result
    void addAB(int A, int B);
    {
        std::cout << "\nAddition example:\n";
        std::cout << A << " + " << B << " = " << A + B << "\n\n";
    }

    //This function subtracts variable B from variable A and prints the result
    void subtractAB(int A, int B);
    {
        std::cout << "Subtraction example:\n";
        std::cout << A << " - " << B << " = " << A - B << "\n\n";
    }

    //This function multiplies variable A by variable B and prints the result
    void multiplyAB(int A, int B);
    {
        std::cout << "Multiplication example:\n";
        std::cout << A << " * " << B << " = " << A * B << "\n\n";
    }

    //This function divides variable A by variable B and prints the result
    void divideAB(int A, int B);
    {
        std::cout << "Division example:\n";
        std::cout << A << " / " << B << " = " << A / B << "\n\n";
    }

    //This function sums variable A and variable B, then multiplies the result by variable A and prints the final result
    void functionAB(int A, int B);
    {
        std::cout << "Function example:\n";
        std::cout << "(" << A << " + " << B << ") * " << A << " = " << (A + B) * A << "\n\n";
    }
}