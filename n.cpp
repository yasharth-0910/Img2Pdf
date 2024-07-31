// Write a CPP program to take input from user for 10 vendors who supply computer
// accessories. Design attributes and functions to satisfy the below mentioned
// requirements. Write function to
// (i) input accessory details of individual vendors.
// (ii) print the above details.
// (iii) Compare between the prices of the same component/accessory of different
// vendors.
// (iv) Find the vendor who has maximum quantity of “LAN Cable” currently available.
// (v) Find the vendor who has the lowest selling price of “Keyboard”.

#include <iostream>
#include <bits/stdc++/h>

using namespace std;

class Vendor
{
    string name;
    string address;
    string phone;
    string email;
    string accessory;
    int quantity;
    float price;

public:

    void input()
    {
        cout << "Enter the name of the vendor: ";
        cin >> name;
        cout << "Enter the address of the vendor: ";
        cin >> address;
        cout << "Enter the phone number of the vendor: ";
        cin >> phone;
        cout << "Enter the email of the vendor: ";
        cin >> email;
        cout << "Enter the accessory: ";
        cin >> accessory;
        cout << "Enter the quantity: ";
        cin >> quantity;
        cout << "Enter the price: ";
        cin >> price;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Accessory: " << accessory << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }

    float getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }

    string getAccessory()
    {
        return accessory;
    }
};


int main()
{
    Vendor vendors[10];
    for (int i = 0; i < 10; i++)
    {
        vendors[i].input();
    }

    for (int i = 0; i < 10; i++)
    {
        vendors[i].print();
    }

    float minPrice = vendors[0].getPrice();
    string minPriceVendor = vendors[0].getAccessory();
    for (int i = 1; i < 10; i++)
    {
        if (vendors[i].getPrice() < minPrice)
        {
            minPrice = vendors[i].getPrice();
            minPriceVendor = vendors[i].getAccessory();
        }
    }

    cout << "Vendor with lowest price of Keyboard: " << minPriceVendor << endl;

    int maxQuantity = vendors[0].getQuantity();
    string maxQuantityVendor = vendors[0].getAccessory();
    for (int i = 1; i < 10; i++)
    {
        if (vendors[i].getQuantity() > maxQuantity)
        {
            maxQuantity = vendors[i].getQuantity();
            maxQuantityVendor = vendors[i].getAccessory();
        }
    }

    cout << "Vendor with maximum quantity of LAN Cable: " << maxQuantityVendor << endl;

    return 0;
}




