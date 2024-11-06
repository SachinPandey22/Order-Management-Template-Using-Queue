//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 2
#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H

#include "Order.h"
#include <queue>
#include <iostream>

template <typename T>
class OrderQueue {
public:
    void placeOrder(const Order<T>& order);  // Templated order parameter
    void prepareOrder();
    void serveOrder();
    void displayQueue() const;
private:
    std::queue<Order<T> > queue;             // Queue holding templated `Order<T>`
};

// Method to place an order in the queue
template <typename T>
void OrderQueue<T>::placeOrder(const Order<T>& order) {
    queue.push(order);
    std::cout << "Order placed: " << order.getItem() << " for " << order.getCustomerName() << std::endl;
}

// Method to prepare the next order in the queue
template <typename T>
void OrderQueue<T>::prepareOrder() {
    if (queue.empty()) {
        std::cout << "No orders to prepare." << std::endl;
    } else {
        Order<T> order = queue.front();
        std::cout << "Order being prepared: " << order.getItem() << " for " << order.getCustomerName() << std::endl;
    }
}

// Method to serve the next order in the queue
template <typename T>
void OrderQueue<T>::serveOrder() {
    if (queue.empty()) {
        std::cout << "No orders ready to serve." << std::endl;
    } else {
        Order<T> order = queue.front();
        queue.pop();
        std::cout << "Order served: " << order.getItem() << " for " << order.getCustomerName() << std::endl;
    }
}

// Method to display all pending orders
template <typename T>
void OrderQueue<T>::displayQueue() const {
    if (queue.empty()) {
        std::cout << "No pending orders." << std::endl;
    } else {
        std::queue<Order<T> > tempQueue = queue;
        std::cout << "Current orders in queue:" << std::endl;
        while (!tempQueue.empty()) {
            Order<T> order = tempQueue.front();
            std::cout << order.getItem() << " for " << order.getCustomerName() << std::endl;
            tempQueue.pop();
        }
    }
}

#endif
