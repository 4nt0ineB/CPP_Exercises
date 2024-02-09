#pragma once
#include <vector>
#include <ostream>

class PhoneNumber 
{

    friend std::ostream& operator<<(std::ostream& os, const PhoneNumber& phoneNumber);


public:
    PhoneNumber(int n1, int n2, int n3, int n4, int n5 )
        : _numbers { std::vector<int> {n1, n2, n3, n4, n5} }
    {}

    bool is_valid() const
    {
        for(auto number: _numbers)
        {
            if(number < 0 || number > 99)
            {
                return false;
            }
        }
        return true;
    }

    int operator[](int index) const
    {   
        if(index >= _numbers.size()){
            return -1;
        }
        return _numbers[index];
    }


private:
    std::vector<int> _numbers;
};


inline std::ostream& operator<<(std::ostream& os, const PhoneNumber& phoneNumber)
{
    for(auto number: phoneNumber._numbers)
    {
        if(number < 10){
            os << 0;
        }
        os << number;
    }
    return os;
}