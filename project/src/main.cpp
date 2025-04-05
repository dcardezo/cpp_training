#include <iostream>

int main()
{
    const float tax{6.6};
    const int prize_small_room{25};
    const int prize_large_room{35};
    int small_rooms{0};
    int large_rooms{0};
    int cost{0};
    float cost_with_taxes{0.0};

    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> small_rooms;
    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> large_rooms;

    cost = ((small_rooms * prize_small_room) + (large_rooms * prize_large_room));
    cost_with_taxes = cost * tax;

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_rooms << std::endl;
    std::cout << "Number of large rooms: " << large_rooms << std::endl;
    std::cout << "Prize per small room: " << prize_small_room << std::endl;
    std::cout << "Prize per large room: " << prize_large_room << std::endl;
    std::cout << "Cost: " << cost << std::endl;
    std::cout << "Tax: " << tax << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "Total estimate: " << cost_with_taxes << std::endl;
    std::cout << "This estimate is valid for 30 days\n"
              << std::endl;

    return 0;
}