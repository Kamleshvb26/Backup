#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#include<cstring>


class InventoryException : public std::exception
{
    char *name;
    public:
    InventoryException(const char*msg)
    {
        name = new char[60];
        strcpy(name,msg);
    }
    const char * what()
    {
        return name;
    }

    ~InventoryException(){
        delete name;
    }
};

class Inventory
{
    private:
        int productCode;
        int balanceStock;
        std::string descriptionOfProduct;

    public:
        Inventory();

        Inventory(int ,int ,std::string);

        void purchase();

        void sale();

        friend std::ostream& operator<<(std::ostream&,Inventory &obj);

        void accept();

        void display();
        
        int getProductCode();

        int getBalanceStock();

        void setBalanceStock(int balanceStock_);

        std::string getDescriptionOfProduct();

        void setDescriptionOfProduct( std::string &descriptionOfProduct_);
    
};

#endif // INVENTORY_H


