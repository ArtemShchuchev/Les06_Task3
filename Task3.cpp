#include <iostream> // консоль - cout

#include "Figura.h"
#include "Triangle.h"
#include "TriRight.h"
#include "TriIsos.h"
#include "TriEquil.h"
#include "Quad.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parall.h"
#include "Rhombus.h"
#include "myFunc.h"

// как старое задание, только с внешними файлами
// добавил исключения

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout << "Задача 2. Исключения в конструкторах\n"
              << "------------------------------------\n\n";

    Figura* fig = nullptr;    // указатель на объект типа Figura
    MyFigData data = {"Фигура",0,0,0,0,0,0,0,0};

    try
    {
        std::cout << "Фигура (число сторон 0) ";
        Figura asd(0);
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    std::cout << std::endl;

    // треугольники ----------------------
    try
    {
        data.name = "Треугольник";
        data.lenA = 10;
        data.lenB = 20;
        data.lenC = 30;
        data.angA = 50;
        data.angB = 60;
        data.angC = 70;
        print_info(data);

        Triangle triangle;
        triangle.setLengh(data.lenA, data.lenB, data.lenC);
        triangle.setAngle(data.angA, data.angB, data.angC);
        fig = &triangle;

        std::cout << "создан" << std::endl;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data.name = "Прямоугольный треугольник";
        data.lenA = 10;
        data.lenB = 20;
        data.lenC = 30;
        data.angA = 50;
        data.angB = 40;
        data.angC = 90;
        print_info(data);

        fig = new TriRight(data.lenA, data.lenB, data.lenC, data.angA, data.angB, data.angC);
        
        std::cout << "создан" << std::endl;
        delete fig; // спасибо за подсказку - не догадался
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data.name = "Равнобедренный треугольник";
        data.lenA = 10;
        data.lenB = 20;
        data.lenC = 10;
        data.angA = 65;
        data.angB = 50;
        data.angC = data.angA;
        print_info(data);

        fig = new TriIsos(data.lenA, data.lenB, data.lenC, data.angA, data.angB, data.angC);

        std::cout << "создан" << std::endl;

        delete fig;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data.name = "Равносторонний треугольник";
        data.lenA = 30;
        data.lenB = data.lenA;
        data.lenC = data.lenA;
        data.angA = 60;
        data.angB = data.angA;
        data.angC = data.angA;
        print_info(data);

        fig = new TriEquil(data.lenA, data.lenB, data.lenC, data.angA, data.angB, data.angC);

        std::cout << "создан" << std::endl;
        delete fig;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    std::cout << std::endl;

    // четырехугольники ----------------------
    try
    {
        data = { "Четырёхугольник" , 10,20,30,40,50,60,125,125 };
        print_info(data);

        Quad quad;
        quad.setLengh(data.lenA, data.lenB, data.lenC, data.lenD);
        quad.setAngle(data.angA, data.angB, data.angC, data.angD);

        std::cout << "создан" << std::endl;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data = { "Прямоугольник" , 10,20,10,20,90,100,80,90 };
        print_info(data);

        fig = new Rectangle(data.lenA, data.lenB, data.lenC, data.lenD,
            data.angA, data.angB, data.angC, data.angD);

        std::cout << "создан" << std::endl;
        delete fig;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data = { "Квадрат" , 20,20,20,20,90,90,90,90 };
        print_info(data);

        fig = new Square(data.lenA, data.lenB, data.lenC, data.lenD,
            data.angA, data.angB, data.angC, data.angD);
        fig->setQtySide(9);

        std::cout << "создан" << std::endl;
        delete fig;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data = { "Параллелограмм" , 20,30,20,30,85,95,85,95 };
        print_info(data);

        fig = new Parall(data.lenA, data.lenB, data.lenC, data.lenD,
            data.angA, data.angB, data.angC, data.angD);

        std::cout << "создан" << std::endl;
        delete fig;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }

    try
    {
        data = { "Ромб" , 30,30,30,30,80,100,80,100 };
        print_info(data);

        fig = new Rhombus(data.lenA, data.lenB, data.lenC, data.lenD,
            data.angA, data.angB, data.angC, data.angD);

        std::cout << "создан" << std::endl;
        delete fig;
    }
    catch (const FiguraExeption& s)
    {
        std::cout << "не был создан. Причина: "
            << s.what() << std::endl;
    }


    return 0;
}

/*
Задача 2. Исключения в конструкторах
В этом задании вы запретите создавать экземпляры классов геометрических фигур с неправильными данными.

Создайте собственный класс исключения для ошибки создания геометрической фигуры.
Подумайте, от какого типа его унаследовать, и не забудьте поместить новый класс в отдельную пару файлов.

Возьмите иерархию классов из предыдущего задания.
Теперь при создании экземпляров классов вам нужно проверять аргументы, которые поступают на вход конструктору.
Если аргументы не соответствуют ограничениям, объект не должен быть создан, а на консоль должно быть выведено
соответствующее сообщение. Причина ошибки должна быть сформулирована на уровне конструктора и выведена на
экран при обработке ошибок.

Ограничения:

фигура (количество сторон равно 0);
треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
прямоугольный треугольник (угол C всегда равен 90);
равнобедренный треугольник (стороны a и c равны, углы A и C равны);
равносторонний треугольник (все стороны равны, все углы равны 60);
четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
квадрат (все стороны равны, все углы равны 90);
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
ромб (все стороны равны, углы A,C и B,D попарно равны).

Для проверки попробуйте создать разные геометрические фигуры — правильные и неправильные.
В случае успешного создания выводите на экран сообщение об успешном создании и параметры фигуры.
В случае, если создание не удалось, выведите параметры фигуры и причину ошибки.


Пример работы программы
Консоль
Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан

Прямоугольный треугольник (стороны 3, 4, 5; углы 40, 60, 90) не был создан. Причина: сумма углов не равна 180
*/