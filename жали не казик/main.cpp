#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);


    int count = 0;

    std::cout << "\n\n";

    // общие кол-во
    for (int i = 0; i <= 9999; ++i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (!dublic) {
            count++;
        }
    }

    std::cout << "пин коды из разных цифр\n";
    std::cout << "Общее количество: " << count << "\n";

    // вывод  10
    std::cout << "Первые 10 кодов: ";
    int kolv = 0;
    for (int i = 0; i <= 9999 && kolv < 10; ++i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (!dublic) {
            if (i < 10) std::cout << "000";
            else if (i < 100) std::cout << "00";
            else if (i < 1000) std::cout << "0";
            std::cout << i << " ";
            kolv++;
        }
    }
    std::cout << "\n";

    // вывод 10 с конца
    std::cout << "Последние 10 кодов: ";
    kolv = 0;
    int soslo = 9999;
    for (int i = 9999; i >= 0 && kolv < 10; --i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (!dublic) {
            soslo = i;
            kolv++;
        }
    }
    // от границы по возрастанию
    for (int i = soslo; i <= 9999; ++i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (!dublic) {
            if (i < 10) std::cout << "000";
            else if (i < 100) std::cout << "00";
            else if (i < 1000) std::cout << "0";
            std::cout << i << " ";
        }
    }
    std::cout << "\n\n\n\n";




   
    int coc = 0;

    // общие кол-во
    for (int i = 0; i <= 9999; ++i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (dublic) {
            coc++;
        }
    }

    std::cout << "пин коды с повторяющимися цифрами\n";
    std::cout << "Общее количество: " << coc << "\n";

    // вывод 10 додиков
    std::cout << "Первые 10 кодов: ";
    kolv = 0;
    for (int i = 0; i <= 9999 && kolv < 10; ++i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (dublic) {
            if (i < 10) std::cout << "000";
            else if (i < 100) std::cout << "00";
            else if (i < 1000) std::cout << "0";
            std::cout << i << " ";
            kolv++;
        }
    }
    std::cout << "\n";

    // вывод 10 педиков от 0
    std::cout << "Последние 10 кодов: ";
    kolv = 0;
    soslo = 9999;
    for (int i = 9999; i >= 0 && kolv < 10; --i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (dublic) {
            soslo = i;
            kolv++;
        }
    }
    // вывож от гранизе по возрастанию
    for (int i = soslo; i <= 9999; ++i) {
        int cufra4 = i % 10;
        int cufra3 = (i / 10) % 10;
        int cufra2 = (i / 100) % 10;
        int cufra1 = (i / 1000) % 10;

        bool dublic = (cufra1 == cufra2 || cufra1 == cufra3 || cufra1 == cufra4 ||
            cufra2 == cufra3 || cufra2 == cufra4 ||
            cufra3 == cufra4);
        if (dublic) {
            if (i < 10) std::cout << "000";
            else if (i < 100) std::cout << "00";
            else if (i < 1000) std::cout << "0";
            std::cout << i << " ";
        }
    }
    std::cout << "\n\n\n\n";

    return 0;
}
