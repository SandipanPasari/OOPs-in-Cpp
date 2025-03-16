#include <iostream>
using namespace std;

class Player
{
public:
    int score; // data members
    int health;
};

int main()
{
    Player Sandipan;
    Sandipan.score = 90;
    Sandipan.health = 100;
    cout << Sandipan.score << endl;
    cout << Sandipan.health << endl;

    Player Pasari;
    Pasari.score = 70;
    Pasari.health = 50;
    cout << Pasari.score << endl;
    cout << Pasari.health << endl;
    return 0;
}

/* Three types of Access modifiers
   Public: Accessible from anywhere.
   Private: Accessible only within the class.
   Protected: Accessible within the class and its subclasses. */