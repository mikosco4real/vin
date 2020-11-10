// Application developed as a requirement of Assessment 2 of the DevOps Tools
// Torrens University - Sydney
#include <iostream>
#include <gtest/gtest.h>

    //This function sums variable A and variable B and prints the result
int addAB(int A, int B)
{
    std::cout << "\nAddition example:\n";
    std::cout << A << " + " << B << " = " << A + B << "\n\n";
    return A + B;
}

//This function subtracts variable B from variable A and prints the result
int subtractAB(int A, int B)
{
    std::cout << "Subtraction example:\n";
    std::cout << A << " - " << B << " = " << A - B << "\n\n";
    return A - B;
}

//This function multiplies variable A by variable B and prints the result
int multiplyAB(int A, int B)
{
    std::cout << "Multiplication example:\n";
    std::cout << A << " * " << B << " = " << A * B << "\n\n";
    return A * B;
}

//This function divides variable A by variable B and prints the result
int divideAB(int A, int B)
{
    std::cout << "Division example:\n";
    std::cout << A << " / " << B << " = " << A / B << "\n\n";
    return A / B;
}

//This function sums variable A and variable B, then multiplies the result by variable A and prints the final result
int functionAB(int A, int B)
{
    std::cout << "Function example:\n";
    std::cout << "(" << A << " + " << B << ") * " << A << " = " << (A + B) * A << "\n\n";
    return (A + B) * A;
}

int main(int argc, char* argv[])
{
    std::cout << "##### Calculator Software #####\n";
    std::cout << "Ver 1.2\n\n";

    int A;
    int B;

    std::cout << "Please insert variable A:\n";
    std::cin >> A;

    std::cout << "\nPlease insert variable B:\n";
    std::cin >> B;

    addAB(A, B);
    subtractAB(A, B);
    multiplyAB(A, B);
    divideAB(A, B);
    functionAB(A, B);

    std::cout << "Thanks for using this software!\n\n";

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}