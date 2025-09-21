#include <iostream>
#include <cmath> // для abs
using namespace std;

int main()
{
    int task; // номер задачі

    // меню для вибору задачі
    cout << "Оберіть номер задачі (12, 31 або 41): ";
    cin >> task;

    if (task == 12) {
        // задача Begin12
        cout << "\nЗадача Begin12:" << endl;
        cout << "Дано три точки A, B, C на числовій осі." << endl;
        cout << "Знайти довжини відрізків AC і BC і їх суму.\n" << endl;

        // 1) декларація змінних
        double A, B, C;
        double AC, BC, sum;

        // 2) введення змінних
        cout << "Введіть координати A, B, C: ";
        cin >> A >> B >> C;

        // 3) розрахунок результатів
        AC = abs(A - C);
        BC = abs(B - C);
        sum = AC + BC;

        // 4) вивід результатів
        cout << "AC = " << AC << endl;
        cout << "BC = " << BC << endl;
        cout << "Сума = " << sum << endl;
    }
    else if (task == 31) {
        // задача Begin31
        cout << "\nЗадача Begin31:" << endl;
        cout << "Дано катети прямокутного трикутника a і b." << endl;
        cout << "Знайти квадрат гіпотенузи: c^2 = a^2 + b^2.\n" << endl;

        // 1) декларація змінних
        double a, b;
        double c2;

        // 2) введення змінних
        cout << "Введіть катети a і b: ";
        cin >> a >> b;

        // 3) розрахунок результату
        c2 = a * a + b * b;

        // 4) вивід результату
        cout << "Квадрат гіпотенузи = " << c2 << endl;
    }
    else if (task == 41) {
        // задача Begin41
        cout << "\nЗадача Begin41:" << endl;
        cout << "Дано основи a і b та висоту h трапеції." << endl;
        cout << "Знайти площу: S = (a + b) / 2 * h.\n" << endl;

        // 1) декларація змінних
        double a, b, h;
        double S;

        // 2) введення змінних
        cout << "Введіть основи a і b та висоту h: ";
        cin >> a >> b >> h;

        // 3) розрахунок результату
        S = (a + b) / 2 * h;

        // 4) вивід результату
        cout << "Площа трапеції = " << S << endl;
    }
    else {
        cout << "Невірний номер задачі! 🙃" << endl;
    }

    return 0;
}

