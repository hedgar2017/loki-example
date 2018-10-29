#include <iostream>
#include <string>

#include "mouse.h"
#include "keyboard.h"

int main()
{
    Mouse mouse;
    try {
        mouse.initialize();
    } catch (const std::runtime_error &e) {
        std::cout << std::string("Mouse initialization: ") + e.what() << std::endl;
        return EXIT_FAILURE;
    }

    Keyboard keyboard;
    try {
        keyboard.initialize();
    } catch (const std::runtime_error &e) {
        std::cout << std::string("Keyboard initialization: ") + e.what() << std::endl;
        return EXIT_FAILURE;
    }

    Sleep(5000);

    bool withdraw = false;
    bool deposit = false;

    if (withdraw) {
        for (int i = 0; i < 24; ++i) {
            mouse.moveCursor(136, 271); // Офис
            mouse.leftButtonClick();
            Sleep(500);
            mouse.moveCursor(56, 315); // Мои шмотки
            mouse.leftButtonClick();
            Sleep(500);
            mouse.moveCursor(283, 350); // Х
            mouse.leftButtonClick();
            Sleep(500);
            mouse.moveCursor(275, 271); // Назад
            mouse.leftButtonClick();
            Sleep(500);
        }
    }

    if (deposit) {
        bool isCOL = false;
        mouse.moveCursor(211, 272); // Добавить
        mouse.leftButtonClick();
        Sleep(500);
        for (int i = 0; i < 4; ++i) {
            mouse.moveCursor(64, 327); // Заточенное
            mouse.leftButtonClick();
            Sleep(500);
            mouse.moveCursor(94, 355); // Первая вещь
            mouse.leftButtonClick();
            Sleep(500);
            if (isCOL) {
                mouse.moveCursor(234, 405); // Комбо бокс
                mouse.leftButtonClick();
                Sleep(500);
                mouse.moveCursor(186, 440); // Монета удачи
                mouse.leftButtonClick();
                Sleep(500);
            }
            mouse.moveCursor(55, 407); // Количество
            mouse.leftButtonClick();
            Sleep(500);
            keyboard.type(KEY_1);
            keyboard.type(KEY_9);
            Sleep(500);
            mouse.moveCursor(51, 460); // Продолжить
            mouse.leftButtonClick();
            Sleep(500);
            mouse.moveCursor(52, 470); // Продолжить
            mouse.leftButtonClick();
            Sleep(500);
            mouse.moveCursor(275, 271); // Назад
            mouse.leftButtonClick();
            Sleep(15000);
        }
    }

    return EXIT_SUCCESS;
}
