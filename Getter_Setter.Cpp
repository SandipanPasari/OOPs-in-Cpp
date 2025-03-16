#include <iostream>
using namespace std;

class Player
{
private:
    int score;
    int health;

public:
    // Setter methods
    void setScore(int s)
    {
        score = s;
    }

    void setHealth(int h)
    {
        health = h;
    }

    // Getter methods
    int getScore()
    {
        return score;
    }

    int getHealth()
    {
        return health;
    }

    void showHealth()
    {
        cout << "Health is : " << health << endl;
    }

    void showScore()
    {
        cout << "Score is : " << score << endl;
    }
};

int main()
{
    Player Sandipan;
    Sandipan.setScore(90);
    Sandipan.setHealth(100);

    cout << "Score: " << Sandipan.getScore() << endl;
    cout << "Health: " << Sandipan.getHealth() << endl;

    Sandipan.showHealth();
    Sandipan.showScore();

    return 0;
}
