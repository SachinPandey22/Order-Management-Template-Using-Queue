//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 2
#ifndef ORDER_H
#define ORDER_H

#include <string>

template <typename T>
class Order {
public:
    Order(T item, std::string customerName);  // Templated constructor
    T getItem() const;                        // Templated method to return item
    std::string getCustomerName() const;
private:
    T item;                                   // Templated data type
    std::string customerName;
};

// Constructor implementation
template <typename T>
Order<T>::Order(T item, std::string customerName) : item(item), customerName(customerName) {}

// Method to return the item
template <typename T>
T Order<T>::getItem() const {
    return item;
}

// Method to return the customer's name
template <typename T>
std::string Order<T>::getCustomerName() const {
    return customerName;
}

#endif
