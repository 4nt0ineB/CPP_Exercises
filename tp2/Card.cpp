#include "Card.hpp"
#include <string>
#include <iostream>

Card::Card(const CardValue& value, const CardColor& color)
    : _value{value}, _color{color}
{
}

void Card::print() const
{   
    std::cout << static_cast<int>(_value) << " de " << static_cast<int>(_color) << std::endl;
}

std::string cardValue_to_str(const CardColor& cardColor)
{
    switch(cardColor)
    {
        case CardColor::CARREAU: return "Carreau";
        case CardColor::TREFLE:  return "Trèfle";
        case CardColor::PIQUE:   return "Pique";
        case CardColor::COEUR:   return "Coeur";
    }
    return "";
}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
    switch(card._value)
    {   
        case CardValue::VALET   : os << "Valet"; break;
        case CardValue::DAME    : os << "Dame";  break;
        case CardValue::ROI     : os << "Roi";   break;
        case CardValue::AS      : os << "As";    break;
        default: 
            os << static_cast<int>(card._value);
    }
    os << " de " << cardValue_to_str(card._color);
    return os;
}

bool Card::operator==(const Card& other) const
{
    return (_value == other._value) && (_color == other._color);
}

bool Card::operator<(const Card& other) const
{
    return _value < other._value;    
}