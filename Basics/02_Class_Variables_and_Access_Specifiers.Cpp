#include <iostream>
using namespace std;

class Player
{
public:
    int score; // data members
    int health;

    void showHealth() // member functions
    {
        cout << "Health is : " << health << endl;
    }

    void showScore()
    {
        cout << "Score is : " << score;
    }
};

int main()
{
    Player Sandipan;
    Sandipan.score = 90;
    Sandipan.health = 100;
    cout << Sandipan.score << endl;
    cout << Sandipan.health << endl;

    Sandipan.showHealth();
    Sandipan.showScore();

    return 0;
}
