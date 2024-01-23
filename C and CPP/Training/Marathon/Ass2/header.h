enum Category
{
    ELECTRONICS,
    COSMETICS,
    CLOTHING
};

struct Product
{
    int product_code;
    char name[20];
    int price;
    enum Category category;
};

void accept(struct Product *);

void searchProduct(struct Product *, int );

void searchInRange(struct Product *, int ,int);

void DisplayCat(struct Product *,int );

void DisplayM(struct Product *);
