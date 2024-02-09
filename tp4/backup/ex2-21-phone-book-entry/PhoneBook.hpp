#pragma once
#include "PhoneBookEntry.hpp"
#include <list>

class PhoneBook
{
public:
    bool add_entry(const PhoneBookEntry& entry)
    {
        if(!entry.get_number().is_valid())
        {
            return false;
        }
        for(const auto& saved_entry: _entries)
        {
            if(saved_entry.get_name() == entry.get_name())
            {
                return false;
            }
        }
        _entries.push_back(entry);
        return true;
    }

    const PhoneNumber* get_number(const std::string& name) const
    {
        for(const auto& entry: _entries)
        {
            if(entry.get_name() == name)
            {
                return &entry.get_number();
            }
        }
        return nullptr;
    }

private:
    std::list<PhoneBookEntry> _entries;
};