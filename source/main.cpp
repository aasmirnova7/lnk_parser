#include "utils/ParserUtils.h"

using namespace std;

/**
 * @brief Точка входа в программу.
 *  Выполнение программы начинается с данного метода.
 *
 * @param argc Количество аргементов программы
 * @param argv Список аргументов программы
 * @return int Статус завершения программы
 */
int main(int argc, char* argv[]) {
    ParserUtils::startParsing();

    char c;
    cout << "Press any key to continue . . . " << endl;
    cin >> c;
    return 0;
}