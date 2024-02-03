#pragma once

#include "Department.hpp"

#include <list>
#include <string>
#include <iostream>

class HRSoftSystem
{
public:
    Department& add_department(const std::string& name)
    {
        return _departments.emplace_back(name);
    }

    void print_all_employees() const
    {
        for(auto& department: _departments)
        {
            department.print_employees();
        }
    }

    void print_all_departments() const
    {
        for(auto& department: _departments)
        {
            std::cout << department << std::endl; 
        }
    }

    void remove_employee(Employee& employee)
    {
        
    }

private:
    std::list<Department> _departments;
};
