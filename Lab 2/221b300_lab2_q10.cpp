#ifndef EMPLOYEEDATABASE_H
#define EMPLOYEEDATABASE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

struct Employee {
    int emp_id;
    std::string emp_name;
    std::string emp_city;
};

class EmployeeDatabase {
private:
    std::map<int, Employee> database;

public:
    void addEmployee(int emp_id, const std::string& emp_name, const std::string& emp_city) {
        Employee emp = {emp_id, emp_name, emp_city};
        database[emp_id] = emp;
    }

    Employee getEmployee(int emp_id) {
        return database[emp_id];
    }

    std::vector<Employee> getAllEmployees() {
        std::vector<Employee> employees;
        for (const auto& pair : database) {
            employees.push_back(pair.second);
        }
        return employees;
    }
};
#include <iostream>
#include <EmployeeDatabase.h>

int main() {
    EmployeeDatabase empDb;

    empDb.addEmployee(1, "John Doe", "New York");
    empDb.addEmployee(2, "Jane Smith", "Los Angeles");
    empDb.addEmployee(3, "Alice Johnson", "Chicago");
    empDb.addEmployee(4, "Bob Williams", "Houston");
    empDb.addEmployee(5, "Eva Brown", "Miami");

    std::vector<Employee> allEmployees = empDb.getAllEmployees();
    for (const Employee& emp : allEmployees) {
        std::cout << "Employee ID: " << emp.emp_id << ", Name: " << emp.emp_name << ", City: " << emp.emp_city << std::endl;
    }

    return 0;
}

