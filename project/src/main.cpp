#include <iostream>
#include <vector>

int main()
{
    /*
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents
        1 penny is 1 cent
    */

    /* Var initialization */
    int dollar{0};
    int quarter{0};
    int dime{0};
    int nickel{0};
    int penny{0};
    int amount{0};
    std::vector<int> rests;

    /* Ask user to enter an amount in cents, and store it in amount */
    std::cout << "Enter an amount in cents: ";
    std::cin >> amount;
    /* Use a vector to discard higher values (0:dollar, 1:quarter, 2:dime, 3:nickel) */
    rests.push_back(amount % 100);
    rests.push_back(rests[0] % 25);
    rests.push_back(rests[1] % 10);
    rests.push_back(rests[2] % 5);
    /* Implement calculations */
    dollar = amount / 100;
    quarter = rests[0] / 25;
    dime = rests[1] / 10;
    nickel = rests[2] / 5;
    penny = rests[3];
    /* Print the results */
    std::cout << "Dollars: " << dollar << std::endl;
    std::cout << "Quarters: " << quarter << std::endl;
    std::cout << "Dimes: " << dime << std::endl;
    std::cout << "Nickels: " << nickel << std::endl;
    std::cout << "Pennys: " << penny << std::endl;

    return 0;
}