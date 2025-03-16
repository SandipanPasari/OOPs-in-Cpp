/*Question:
Consider the following C++ class definition for Book. The class contains three attributes: name, price, and numOfPages, along with two methods:

countBooks(int p): Returns 1 if the book's price is less than p, otherwise returns 0.
isBookPresent(char book): Returns true if the book's name matches the given character, otherwise returns false.*/

#include <iostream>
using namespace std;

class Book
{
    public:
    char name;
    int price;
    int numOfPages;

    int countBooks(int p)
    {
        if (price < p)
            return 1;
        else
            return 0;
    }

    bool isBookPresent(char book)
    {
        if (name == book)
            return true;
        else
            return false;
    }
};

main()
{
    Book harryPotter;
    harryPotter.name = 'M';
    harryPotter.price = 800;
    harryPotter.numOfPages = 500;
    
    cout <<harryPotter.countBooks(100);
    cout << harryPotter.isBookPresent('M');
    return 0;
}