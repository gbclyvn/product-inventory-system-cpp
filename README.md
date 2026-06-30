# product-inventory-system-cpp

A simple, modern C++ console application that tracks and manages a custom product inventory using object-oriented programming principles.

## Features
- **Object-Oriented Architecture**: Utilizes a robust custom `Product` class encapsulation.
- **Clean Namespace Management**: Explicitly uses `std::` prefixes without global namespace pollution (`using namespace std`).
- **Dynamic Memory Allocation**: Employs `std::vector` for standard-compliant data storage instead of non-standard Variable Length Arrays (VLAs).
- **Automated Calculations**: Computes individual product inventory valuation automatically.

## Requirements
- A modern C++ compiler supporting C++11 or higher (e.g., GCC/MinGW, Clang, MSVC).

## Compilation and Execution

Compile the source code using `g++`:
```bash
g++ main.cpp -o main
```

Run the compiled executable:
```bash
.\main
```

## Example Usage
```text
Enter number of products: 2

Entering details for Product 1
Enter Product Name: Laptop
Enter Product ID: LPT-100
Enter Price: 899.99
Enter Quantity: 5

Entering details for Product 2
Enter Product Name: Mouse
Enter Product ID: MS-200
Enter Price: 25.50
Enter Quantity: 10

===== PRODUCT INVENTORY =====

--- Product Details ---
Product Name: Laptop
Product ID: LPT-100
Price: 899.99
Quantity: 5
Total Value: 4499.95

--- Product Details ---
Product Name: Mouse
Product ID: MS-200
Price: 25.50
Quantity: 10
Total Value: 255
```
