#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);



    /*
пин коды из разных цифр
Общее количество: 5040
Первые 10 кодов: 0123 0124 0125 0126 0127 0128 0129 0132 0134 0135
Последние 10 кодов: 9864 9865 9867 9870 9871 9872 9873 9874 9875 9876



пин коды с повторяющимися цифрами
Общее количество: 4960
Первые 10 кодов: 0000 0001 0002 0003 0004 0005 0006 0007 0008 0009
Последние 10 кодов: 9990 9991 9992 9993 9994 9995 9996 9997 9998 9999
    */


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
