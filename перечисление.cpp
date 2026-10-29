#include <iostream>

using namespace std;

enum class CharacterType {
    Warrior = 1,
    Mage,
    Archer,
    Rogue
};

enum class WeaponQualty {
    Common = 1,
    Uncommon,
    Rare,
    Epic,
    Legendary
};
int main()
{
    setlocale(LC_ALL, "rus");

    int characterInput = 0;
    int weponInput = 0;

    cout << "Выберите игрового персанажа: \n";
    cout << "1. Воин\n";
    cout << "2. Маг\n";
    cout << "3. Лучник\n";
    cout << "4. Разбойник\n";
    cin >> characterInput;



    CharacterType selectedCharacter = static_cast<CharacterType>(characterInput);

    switch (selectedCharacter) {

    case CharacterType::Warrior:
        cout << "Вы выбрали воина. Он обладает высоким заасом здоровья и сильной броней\n";
        break;
    case CharacterType::Mage:
        cout << "Вы выбрали мага. Он наносит огромный урон заклинаниями\n";
        break;
    case CharacterType::Archer:
        cout << "Вы выбрали лучника. Меткий стрелок, поражающий цели на расстоянии\n";
        break;
    case CharacterType::Rogue:
        cout << "Вы выбрали разойника. Мастер скрытности и быстрых критических ударов\n";
        break;


    }   
    cout << "Выберите оружие: \n";
    cout << "1. обычный\n";
    cout << "2. необычный\n";
    cout << "3. редкий\n";
    cout << "4. эпический\n";
    cout << "4. легендарный\n";
    cin >> weponInput;

    WeaponQualty selectedWeapon = static_cast<WeaponQualty>(weponInput);
    switch (selectedWeapon) {

    case WeaponQualty::Common:
        cout << "Обычное оружие. \n";
        break;

    case WeaponQualty::Uncommon:
        cout << "Необычное оружие\n";
        break;
    case WeaponQualty::Rare:
        cout << "Редкое оружие\n";
        break;
    case WeaponQualty::Epic:
        cout << "Эпическое оружие\n";
        break;
    case WeaponQualty::Legendary:
        cout << "Легендарное оружие.\n";
        break;


    }

    cout << "Внутренний индекс персонажа: " << static_cast<int>(selectedCharacter) << "\n";
    cout << "Внутренний индекс качества оружия: " << static_cast<int>(selectedWeapon) << "\n";







}

