#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    Calculator calc;

    cout << "\n\nWelcome to the Calculator class driver!"
            << "\n\n2 + 5: " << calc.evaluate("2 + 5")
            << "\n\n3 + 6 * 5: " << calc.evaluate("3 + 6 * 5")
            << "\n\n4 * ( 2 + 3 ): " << calc.evaluate("4 * ( 2 + 3 )")
            << "\n\n( 7 + 9 ) / 8: " << calc.evaluate("( 7 + 9 ) / 8")
            << "\n\n5 * 3 + ( 8 - 4 ) / 5: " << calc.evaluate("5 * 3 + ( 8 - 4 ) / 5")
            << "\n\n1: " << calc.evaluate("1")
            << "\n\n2 * 3 * 4: " << calc.evaluate("2 * 3 * 4")
            << "\n\n1 / 2 / 3: " << calc.evaluate("1 / 2 / 3")
            << "\n\n1 - 5 - 6 + ( 9 - 2 ): " << calc.evaluate("1 - 5 - 6 + ( 9 - 2 )")
            << "\n\n1 - ( ( 5 - 6 ) + ( 9 - 2 ) ): " << calc.evaluate("1 - ( ( 5 - 6 ) + ( 9 - 2 ) )")
            << "\n\n";

    return 0;
}
