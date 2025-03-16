// In C++, memory allocation can be categorized into **static allocation** and **dynamic allocation**. **Static allocation** occurs at compile time, where memory is assigned to variables before the program runs. This type of allocation is efficient as the memory is fixed and automatically managed by the compiler. However, it lacks flexibility since the size and lifetime of variables are predetermined. Examples include global, static, and local variables declared without `new`.

// On the other hand, **dynamic allocation** occurs at runtime using the `new` operator, which allows for flexible memory management by allocating memory from the heap. The allocated memory remains in use until it is explicitly released using the `delete` operator. This is particularly useful when the required memory size is unknown beforehand or varies during execution. However, improper memory management can lead to memory leaks if allocated memory is not freed. While **static allocation** is simpler and faster, **dynamic allocation** provides greater control and scalability at the cost of potential overhead and complexity.

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

    bool isAlive()
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
    Player Sandipan; // object, static allocation
    Player Raghav;   // object, static allocation

    Player *Urvi = new Player; // pointer to object, dynamic allocation

    Sandipan.setAge(20);
    Sandipan.setHealth(95);
    Sandipan.setScore(100);
    Sandipan.setisAlive(true);

    Raghav.setAge(21);
    Raghav.setHealth(60);
    Raghav.setScore(75);
    Raghav.setisAlive(true);

    Urvi->setAge(24);
    Urvi->setHealth(65);
    Urvi->setScore(90);
    Urvi->setisAlive(true);

    cout << addScore(Sandipan, Raghav) << endl;
    Player newPlayer = getmaxScore(Sandipan, Raghav);
    cout << newPlayer.getScore() << endl;
    cout << newPlayer.getHealth() << endl;

    cout << Urvi->getAge() << endl;
    cout << Urvi->getScore() << endl;

    return 0;
}
