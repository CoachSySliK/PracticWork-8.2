#include <iostream>

using namespace std;

int main()
{
    float orkHealth;
    float orkResist;
    float playerAttack;
    cout << "Вы встретили Орка! Его здоровье где-то от 0 до 1\n";
    do {
        cout << "Здоровье Орка: ";        
        cin >> orkHealth;
        cin.ignore(100, '\n');
        if (orkHealth < 0 || orkHealth > 1) cout << "Его здоровье где - то от 0 до 1\n";
    } while (orkHealth < 0 || orkHealth > 1);
    do {
        cout << "Сопротивлении магии Орка в %: ";
        cin >> orkResist;
        cin.ignore(100, '\n');
        if (orkResist < 0 || orkResist > 100) cout << "Его сопротивление где - то от 0 до 100\n";
        orkResist /= 100;
        orkResist = 1 - orkResist;
    } while (orkResist < 0 || orkResist > 100);
    
    while (orkHealth > 0) {
        do {
            cout << "Вы стреляете огненным шаром, Вам урон от 0 до 1: ";
            cin >> playerAttack;
            cin.ignore(100, '\n');
            if (playerAttack < 0 || playerAttack > 1) cout << "Ваш урон от 0 до 1\n";
        } while (playerAttack < 0 || playerAttack > 1);
        orkHealth -= playerAttack * orkResist;
        if (orkHealth < 0) orkHealth = 0;
        cout << "Урон " << playerAttack << " сопротивляемость " << 1 - orkResist << " , по орку будет нанесено " << playerAttack * orkResist << " урона.\n";
        cout << "Здоровье Орка: " << orkHealth << endl;
    }

    cout << "Спите спокойно, Вы больше не увидите этого Орка\n";






    return 0;
}
