#include "Card.hpp"
#include "Player.hpp"

#include <iostream>
#include <thread>         
#include <chrono>

int main()
{
    // const Card c1 { CardValue::HUIT, CardColor::CARREAU };
    // c1.print();

    // const Card c2 { CardValue::HUIT, CardColor::CARREAU };
    // std::cout << (c2 == c1) << std::endl; // -> 1
    // const Card c3 { CardValue::DIX, CardColor::CARREAU };
    // std::cout << (c2 == c3) << std::endl; // -> 0 

    // std::cout << (c1 < c2) << std::endl; // -> 0
    // std::cout << (c1 < c3) << std::endl; // -> 1
    // std::cout << (c3 < c1) << std::endl; // -> 0

    // std::cout << c3 << std::endl;

    // Player p1 { "Gerald" };
    // Player p2 { "Julien" };
    // Player::deal_all_cards(p1, p2);
    // std::cout << "----" << std::endl; 
    // for (auto i = 0; i < 16; ++i)
    // {
    //     std::cout << p1[i] << std::endl;
    //     std::cout << p2[i] << std::endl;
    // }

    Player p1 { "Gerald" };
    Player p2 { "Julien" };
    std::cout << Player::turn_number << std::endl; 
    Player::deal_all_cards(p1, p2);

    while(Player::play(p1, p2)){
        std::cout << "--" << std::endl; 
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    std::cout << p1 << " score: "<< p1.get_score() << std::endl; 
    std::cout << p1 << " score: "<< p2.get_score() << std::endl; 

    return 0;
}