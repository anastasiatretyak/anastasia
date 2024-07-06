// concepts1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <concepts>
#include <string>

using namespace std;

template <typename T>
class MyClass {
public:
   MyClass(T _value)
   {
       value = _value;
   }

    void display() {
        cout << "Value: " << value << endl;
    }

private:
    T value;
};

template <std::integral T>
class MyClass<T> {
public:
    MyClass(T _value) 
    {
        value = _value;
    }

    T display(T a, T b, T c) {
        cout << "integer value: " << value << endl;
        return  a + b + c;
    }

private:
    T value;
};

template <std::floating_point T>
class MyClass<T> {
public:
    MyClass(T _value) 
    {
        value = _value;
    }

    T display(T a, T b, T c, T d) {
        cout << "floating point value: " << value << endl;
        return a * b * c * d;
    }

private:
    T value;
};

int main() {
    MyClass<int> mcl1(10);
    MyClass<float> mcl2(3.14);
    MyClass<string> mcl3("hello");
    auto a1 = mcl1.display(3, 4, 5);
    auto a2 = mcl2.display(2.2, 0.5, 1., 5.5);
    mcl3.display();
    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
