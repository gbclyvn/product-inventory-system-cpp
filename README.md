# product-inventory-system-cpp

A console-based inventory management system that utilizes an object-oriented approach to register, track, and analyze multiple product records dynamically.

## Features
- **Object-Oriented Architecture**: Groups attributes and interactions into a unified `Product` class to guarantee data isolation.
- **Dynamic Dataset Sizing**: Resizes storage allocations safely at runtime according to user-defined inventory limits.
- **Automated Financial Tracking**: Calculates itemized product inventory financial value automatically by evaluating price against stock counts.
- **Batch Processing Flow**: Handles multi-item operational routines via independent dataset collection and structured terminal reports.

## Requirements
- A modern C++ compiler (e.g., GCC/MinGW, Clang, MSVC).

## Compilation and Execution

Compile the source code using `g++`:
```bash
g++ main.cpp -o inventory
```

Run the compiled executable:
```bash
.\inventory
```

## Example Usage
```text
Enter number of products: 2

Entering details for Product 1
Enter Product Name: Monitor
Enter Product ID: MON-4K
Enter Price: 299.99
Enter Quantity: 3

Entering details for Product 2
Enter Product Name: Keyboard
Enter Product ID: KB-MECH
Enter Price: 89.50
Enter Quantity: 5

===== PRODUCT INVENTORY =====

--- Product Details ---
Product Name: Monitor
Product ID: MON-4K
Price: 299.99
Quantity: 3
Total Value: 899.97

--- Product Details ---
Product Name: Keyboard
Product ID: KB-MECH
Price: 89.50
Quantity: 5
Total Value: 447.5
```
