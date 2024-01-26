#pragma once

#include <vector>
#include <string>

#include "Card.hpp"

class Player 
{
    friend std::ostream& operator<<(std::ostream& os, Player player);

public:
    static inline unsigned short turn_number;

    Player(const std::string& _name);
    static void deal_all_cards(Player& p1, Player& p2);
    Card operator[](int index) const;
    static bool play(Player& p1, Player& p2);
    unsigned int get_score() const;

private:
    std::string _name;
    std::vector<Card> _cards;
    unsigned int _score = 0;
};