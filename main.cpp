#include <iostream>
#include <string>
#include <vector>

class Product {
private:
    std::string productName;
    std::string productID;
    double price;
    int quantity;
    double totalValue;

public:
   
    void inputProduct() {
        std::cout << "Enter Product Name: ";
        std::getline(std::cin >> std::ws, productName);

        std::cout << "Enter Product ID: ";
        std::getline(std::cin >> std::ws, productID);

        std::cout << "Enter Price: ";
        std::cin >> price;

        std::cout << "Enter Quantity: ";
        std::cin >> quantity;
    }

   
    void calculateTotalValue() {
        totalValue = price * quantity;
    }

    void displayProduct() {
        std::cout << "\n--- Product Details ---\n";
        std::cout << "Product Name: " << productName << "\n";
        std::cout << "Product ID: " << productID << "\n";
        std::cout << "Price: " << price << "\n";
        std::cout << "Quantity: " << quantity << "\n";
        std::cout << "Total Value: " << totalValue << "\n";
    }
};

int main() {
    int numProducts;

    std::cout << "Enter number of products: ";
    std::cin >> numProducts;

    std::vector<Product> products(numProducts);

    for (int i = 0; i < numProducts; i++) {
        std::cout << "\nEntering details for Product " << i + 1 << "\n";
        products[i].inputProduct();
        products[i].calculateTotalValue();
    }

    std::cout << "\n===== PRODUCT INVENTORY =====\n";
    for (int i = 0; i < numProducts; i++) {
        products[i].displayProduct();
    }

    return 0;
}
