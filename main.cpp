#include <iostream>
#include "calculate.h"

int main() {
    float result;
    int choice;
    float num1, num2;
    while(1) {
        choice = 0;
        std::cout << "Choose method:\n1 > Compare\n2 > Plus\n3 > Subtract\n4 > Multiply\n5 > Division\n6 > Quit\n";
        std::cin >> choice;
            switch (choice) {
                case 1:
                    std::cout << "Compare chose\n";
                    std::cout << "The First and Secound Num: ";
                    std::cin >> num1 >> num2;
                    if ( num1 == num2 )
                        std::cout << "Equal\n";
                    else {
                        result = compare(num1, num2);
                        std::cout << "Max num is " << result <<"\n";
                    }
                    break;
                case 2:
                    std::cout << "Plus chose\n";
                    std::cout << "The First and Secound Num: ";
                    std::cin >> num1 >> num2;
                    result = plus(num1, num2);
                    std::cout << "Sum is " << result <<"\n";
                    break;
                case 3:
                    std::cout << "Subtract chose\n";
                    std::cout << "The First and Secound Num: ";
                    std::cin >> num1 >> num2;
                    result = subtract(num1, num2);
                    std::cout << "Difference is " << result <<"\n";
                    break;
                case 4:
                    std::cout << "Multiply chose\n";
                    std::cout << "The First and Secound Num: ";
                    std::cin >> num1 >> num2;
                    result = multiply(num1, num2);
                    std::cout << "Product is " << result <<"\n";
                    break;
                case 5:
                    std::cout << "Division chose\n";
                    std::cout << "The First and Secound Num: ";
                    std::cin >> num1 >> num2;
                    if (num2 != 0) {
                        result = division(num1, num2);
                        std::cout << "Quotient is " << result <<"\n";
                    } else
                        std::cout << "Divisor can not be 0\n";
                    break;
                case 6:
                    std::cout << "Bye\n";
                    return 1;
                default:
                    std::cout << "Undefined Input, try again\n";
            }
    }
}