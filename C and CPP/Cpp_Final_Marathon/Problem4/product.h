#include<iostream>


enum ProductType{MOBILE_PHONE,LAPTOP,TV};

class Product
{
    private:
        long int productId;
        std::string name;
        char brand[20];
        float price;
        enum ProductType typeOfProduct;
        int taxAmount;

    public:
        Product();

        void accept();

        int getPrice()
        {
            return price;
        }
        int getProductType()
        {
            return typeOfProduct;
        }
        int getProductId()
        {
            return productId;
        }
        int getTaxAmount()
        {
            return taxAmount;
        }
        char * getProductBrand()
        {
            return brand;
        }
        

        friend std::ostream& operator<<(std::ostream&os, Product &obj);

        char &operator[](int n);

        bool operator==(Product &p);
        


        
};