#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Функция чтения из файла в вектор
void ReadFile(vector<string>& vector_stroka)
{
    ifstream file("Test.txt"); //открываем файл для чтения
    if (!file) //проверяем открылся ли файл
    {
        cout << "Error" << endl;
    }
    string line; //переменная для хранения одной строки

    while (getline(file, line)) //построчное чтение из файла в переменную line
    {
        vector_stroka.push_back(line); //добавляем прочитанную строку в вектор
    }
    file.close(); //закрываем файл

}

// Функция вывода на экран
void Print(vector<string>& vector_stroka)
{
    for (const auto& stroka : vector_stroka) //для каждой строки в векторе
    {
        cout << stroka << endl; //выводим строку на экран
    }

}

// Функция записи в файл
void WriteFile(vector<string>& vector_stroka)
{
    ofstream file("ofTest.txt"); //создаем новый файл

    for (const auto& stroka : vector_stroka)
    {
        file << stroka << endl; //записываем строку в файл
    }
    file.close();

}

int main()
{
    vector<string> vector_stroka;

    ReadFile(vector_stroka);   // 1. Читаем
    Print(vector_stroka);  // 2. Выводим на экран
    WriteFile(vector_stroka);    // 3. Записываем в файл


    return 0;
}
