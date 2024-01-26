#include "Player.hpp"
#include <algorithm>
#include <random>

Player::Player(const std::string& name)
    : _name { name }
{}

void Player::deal_all_cards(Player& p1, Player& p2)
{
    std::vector<Card> all_cards;
    auto values = std::vector<CardValue> {
            CardValue::DEUX,
            CardValue::TROIS,
            CardValue::QUATRE,
            CardValue::CINQ,           
            CardValue::SIX,
            CardValue::SEPT,
            CardValue::HUIT,
            CardValue::NEUF,
            CardValue::DIX,
            CardValue::VALET,
            CardValue::DAME,
            CardValue::ROI,
            CardValue::AS
    };

    auto colors = std::vector<CardColor> {
            CardColor::CARREAU,
            CardColor::COEUR,
            CardColor::PIQUE,
            CardColor::TREFLE,
    };

    for(auto& value: values){
        for(auto& color: colors)
        {
            all_cards.emplace_back(value, color);
        }
    }

    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), 
        std::default_random_engine(rd()));
    
    p1._cards.assign(all_cards.begin(), all_cards.begin() + 16);
    p2._cards.assign(all_cards.begin() + 16, all_cards.end());
}

bool Player::play(Player& p1, Player& p2)
{   
    auto& i = Player::turn_number;
    std::cout << p1 << " draws " << p1[i] << std::endl;
    std::cout << p2 << " draws " << p2[i] << std::endl;
    if(p1[i] < p1[i])
    {
        p2._score++;
    } 
    else if (p2[i] < p1[i])
    {
        p1._score++;
    }
    i++;
    return i != 16;
}

Card Player::operator[](int index) const
{
    return _cards[index];
}

unsigned int Player::get_score() const
{
    return _score;
}

std::ostream& operator<<(std::ostream& os, Player player)
{
    os << player._name;
    return os;
}