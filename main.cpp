#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Функция чтения из файла в вектор
void ReadFile(vector<string>& vector_stroka)
{
    ifstream file("Test.txt");
    if (!file)
    {
        cout << "Error" << endl;
    }
    string line;

    while (getline(file, line))
    {
        vector_stroka.push_back(line);
    }
    file.close();

}

// Функция вывода на экран
void Print(vector<string>& vector_stroka)
{

}

// Функция записи в файл
void WriteFile(vector<string>& vector_stroka)
{

}

int main()
{
    vector<string> vector_stroka;

    ReadFile(vector_stroka);   // 1. Читаем
    Print(vector_stroka);  // 2. Выводим на экран
    WriteFile(vector_stroka);    // 3. Записываем в файл


    return 0;
}
