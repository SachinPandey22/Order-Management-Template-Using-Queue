//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 2
#include "Order.h"
#include "OrderQueue.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    OrderQueue<string> chickfilaQueue;  // Now templated to handle string item types
    int choice;
    string item, customerName;

    while (true) {
        cout << "1. Place Order\n2. Prepare Order\n3. Serve Order\n4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            cin.ignore();  // Skip newline
            cout << "Enter food item: ";
            getline(cin, item);
            cout << "Enter customer name: ";
            getline(cin, customerName);
            chickfilaQueue.placeOrder(Order<string>(item, customerName));  // Use templated version of Order
        } else if (choice == 2) {
            chickfilaQueue.prepareOrder();
        } else if (choice == 3) {
            chickfilaQueue.serveOrder();
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }

        chickfilaQueue.displayQueue();
    }

    return 0;
}
