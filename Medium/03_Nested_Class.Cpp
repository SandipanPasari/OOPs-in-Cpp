#include <iostream>
using namespace std;

class Gun
{
public:
    int ammo;
    int damage;
    int scope;
};

class Player
{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;

    class Helmet
    {
    private:
        int hp;
        int level;

    public:
        void setHp(int hp) { this->hp = hp; }
        void setLevel(int level) { this->level = level; }
        int getHp() { return hp; }
        int getLevel() { return level; }
    };

    Helmet helmet;

public:
    int getHealth() { return health; }
    int getAge() { return age; }
    int getScore() { return score; }
    bool isAlive() { return alive; }
    Gun getGun() { return gun; }

    void setHealth(int health) { this->health = health; }
    void setAge(int age) { this->age = age; }
    void setScore(int score) { this->score = score; }
    void setisAlive(bool alive) { this->alive = alive; }
    void setGun(Gun gun) { this->gun = gun; }

    void setHelmet(int level)
    {
        int health = 0;
        if (level == 1)
        {
            health = 25;
        }
        else if (level == 2)
        {
            health = 50;
        }
        else if (level == 3)
        {
            health = 100;
        }
        else
        {
            cout << "Error! Invalid helmet level." << endl;
            return;
        }

        helmet.setHp(health);
        helmet.setLevel(level);
    }
    void getHelmet()
    {
        cout << helmet.getHp() << endl;
        cout << helmet.getLevel() << endl;
    }
};

int addScore(Player a, Player b)
{
    return a.getScore() + b.getScore();
}

Player &getMaxScore(Player &a, Player &b)
{
    return (a.getScore() > b.getScore()) ? a : b;
}

int main()
{
    Player Sandipan;
    Player Raghav;
    Player *Urvi = new Player;

    Gun akm;
    akm.ammo = 100;
    akm.damage = 20;
    akm.scope = 2;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;

    Sandipan.setAge(20);
    Sandipan.setHealth(95);
    Sandipan.setScore(100);
    Sandipan.setisAlive(true);
    Sandipan.setGun(akm);

    Gun gun123 = Sandipan.getGun();
    cout << gun123.damage << endl;
    cout << gun123.ammo << endl;
    cout << gun123.scope << endl;

    Raghav.setAge(21);
    Raghav.setHealth(60);
    Raghav.setScore(75);
    Raghav.setisAlive(true);
    Raghav.setGun(awm);
    Raghav.setHelmet(3);

    Raghav.getHelmet();

    Urvi->setAge(24);
    Urvi->setHealth(65);
    Urvi->setScore(90);
    Urvi->setisAlive(true);

    cout << "Total Score (Sandipan + Raghav): " << addScore(Sandipan, Raghav) << endl;

    Player &newPlayer = getMaxScore(Sandipan, Raghav);
    cout << "Player with max score: " << newPlayer.getScore() << endl;
    cout << "Health of max scorer: " << newPlayer.getHealth() << endl;

    cout << "Urvi's Age: " << Urvi->getAge() << endl;
    cout << "Urvi's Score: " << Urvi->getScore() << endl;

    delete Urvi;

    return 0;
}
