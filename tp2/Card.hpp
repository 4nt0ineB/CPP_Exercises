#pragma once
#include <string>
#include <iostream>

enum class CardColor
{
    CARREAU,
    TREFLE,
    PIQUE,
    COEUR
};

enum class CardValue 
{
    DEUX = 2,
    TROIS,
    QUATRE,
    CINQ,           
    SIX,
    SEPT,
    HUIT,
    NEUF,
    DIX,
    VALET,
    DAME,
    ROI,
    AS
};

class Card
{
    friend std::ostream& operator<<(std::ostream& stream, const Card& card);

public:

    Card(const CardValue& value, const CardColor& color);
    void print() const;
    bool operator==(const Card& other) const;
    bool operator<(const Card& other) const;
private:
    CardValue _value;
    CardColor _color;
};