#include <iostream>
using namespace std;

class Player
{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth()
    {
        return health;
    }

    int getAge()
    {
        return age;
    }

    int getScore()
    {
        return score;
    }

    int isAlive()
    {
        return alive;
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setScore(int score)
    {
        this->score = score;
    }

    void setisAlive(bool alive)
    {
        this->alive = alive;
    }
};

int addScore(Player a, Player b)
{
    return a.getScore() + b.getScore();
}

Player getmaxScore(Player a, Player b)
{
    if (a.getScore() > b.getScore())
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    Player Sandipan;
    Player Raghav;

    Sandipan.setAge(20);
    Sandipan.setHealth(95);
    Sandipan.setScore(100);
    Sandipan.setisAlive(true);

    Raghav.setAge(21);
    Raghav.setHealth(60);
    Raghav.setScore(75);
    Raghav.setisAlive(true);

    cout << addScore(Sandipan, Raghav) << endl;
    Player newPlayer = getmaxScore(Sandipan, Raghav);
    cout << newPlayer.getScore() << endl;
    cout << newPlayer.getHealth(); // It should be printed for Sandipan as Sandipan is stored in newPlayer

    return 0;
}
