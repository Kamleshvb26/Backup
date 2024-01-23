#include <iostream>

enum Rating
{
    NORATING,
    POOR,
    AVERAGE,
    DECENT,
    GOOD
};


class Hospital
{
protected:
    std::string  hospitalId;
    std::string hospitalName;
    enum Rating rt;

public:
    Hospital();

    Hospital(std::string id, std::string name, int r);

    Hospital(Hospital &h);

    void accept();

    void display();

    friend std::ostream& operator<<(std::ostream &,Hospital &);

    ~Hospital();
};
