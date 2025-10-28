Chick-fil-A Order Queue (C++)

A tiny console app for managing a fast-food order queue. Customers place orders, the kitchen prepares them (moves to the front of the line), and the counter serves them. The queue is generic (templated) over the item type.

Features

Place, prepare, and serve orders via a menu

Displays the queue after each action

Uses Order<T> and OrderQueue<T> (templated)

Requirements

C++17 or newer (e.g., g++, clang++)

Files:

main.cpp (the sample below)

Order.h (and possibly Order.cpp if not header-only)

OrderQueue.h (templated; implementation should be in the header or a .tpp included by it)

Build
# If OrderQueue is header-only (typical for templates):
g++ -std=cpp17 -O2 -Wall -Wextra main.cpp -o order_queue

# If you also have .cpp files:
g++ -std=cpp17 -O2 -Wall -Wextra main.cpp Order.cpp OrderQueue.cpp -o order_queue


⚠️ Note on templates: For OrderQueue<T>, keep the implementation in the header (or include a .tpp) so the compiler can instantiate templates.

Run
./order_queue

Example Session
1. Place Order
2. Prepare Order
3. Serve Order
4. Exit
1
Enter food item: Spicy Chicken Sandwich
Enter customer name: Alex
[Queue] Alex - Spicy Chicken Sandwich

1. Place Order
2. Prepare Order
3. Serve Order
4. Exit
2
Preparing: Alex - Spicy Chicken Sandwich
[Queue] Alex - Spicy Chicken Sandwich (Prepared)

1. Place Order
2. Prepare Order
3. Serve Order
4. Exit
3
Serving: Alex - Spicy Chicken Sandwich
[Queue] (empty)

Notes

Update the app name, class names, or prompts if your assignment rubric needs specific wording.

Tested with OrderQueue<string> but works with any Order<T> where T is printable.
