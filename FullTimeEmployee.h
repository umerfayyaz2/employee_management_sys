#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.h"

class FullTimeEmployee : public Employee
{
private:
    int monthlySalary;

public:
    FullTimeEmployee(); // Default constructor
    FullTimeEmployee(int) : Employee(1) {}
    FullTimeEmployee(const FullTimeEmployee &other);
    ~FullTimeEmployee(); // Destructor

    // Friend function to set full-time employee data
    void set_fulltime_employee_data();

    int calculateSalary() const override; // Override calculateSalary
    void displayInfo() const;          // Override displayInfo

    // Setter methods
    void setMonthlySalary();

    // Getter methods
    int getMonthlySalary() const;

    friend ostream &operator<<(ostream &out, const FullTimeEmployee &ftEmp);
};

ostream &operator<<(ostream &out, const FullTimeEmployee &ftEmp);

#include "FullTimeEmployee.cpp"

#endif // FULLTIMEEMPLOYEE_H
