#include "NPC.h"
#include <iostream>

using namespace std;

unsigned int NPC::GetDamage()   
{
    return damage;
};
unsigned int NPC::GetHealth()   // геттер
{
    return health;
};
 void NPC::GetInfo() {
    cout << "Имя: " << name << endl;
    cout << "Здоровье: " << health << endl;
    cout << "Урон: " << damage << endl;
    cout << "Уровень: " << lvl << endl;
    cout << "Броня: " << armor << endl;
};

void NPC::Create()   {}

void NPC::LvlUp() {
    lvl += 1;
    cout << name << " повысил уровень персонажа\n";
    Recalculate();
};

void NPC::Recalculate()   // кастомизировать для война и волшебника зависимости от интеллекта/силы
{
    damage += (1 + lvl * 0.1);
    health += (1 + lvl * 0.1);
    armor += (1 + lvl * 0.1);
};