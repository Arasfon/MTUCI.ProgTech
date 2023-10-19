#pragma once

using namespace System::Windows::Forms;

namespace Labs::SharedDll
{
    public ref class Tasks sealed
    {
    public:
        // Лабораторная работа №1

        // Функция считывания числа
        static bool ReadDouble(TextBox^ textBox, double% value);

        // Функция вывода числа
        static void WriteDouble(double value, TextBox^ textBox);

        // Функция нахождения площади пятиугольника
        static double PentagonArea(double x1, double y1,
            double x2, double y2,
            double x3, double y3,
            double x4, double y4,
            double x5, double y5);

        // Функция нахождения площади треугольника
        static double TriangleArea(double x1, double y1, double x2, double y2, double x3, double y3);

        // Лабораторная работа №2

        // Генерирует массив из случайных вещественных чисел
        static double* GenerateArray(int length);

        // Выводит массив в DataGridView
        static void OutputArray(DataGridView^ dataGridView, double* arr, const int length);

        // Трансформирует массив, получая новый из тех элементов исходного массива, значения которых по модулю меньше найденного максимального положительного элемента.
        static double* TransformArray(const double* arr, const int length, const double maxPositive, int% transformedLength);

        // Получает максимальное положительное число в массиве
        static double GetMaxPositive(const double* arr, const int n);

        // Лабораторная работа №3

        // Строка подключения к базе данные Microsoft Access
        literal System::String^ ConnectionString = "Provider=Microsoft.ACE.OLEDB.16.0;Data Source=1dim_array.accdb";

        // Создаёт новый файл базы данных Microsoft Access
        static void CreateAccessDbFile();

        // Создаёт таблицы в базе данных Microsoft Access для записи в них одномерного массива
        static void CreateAccessDbTables();

        // Заполняет таблицы в базе данных Microsoft Access содержимым исходного и трансформированного одномерного массива
        static void FillAccessDb(const double* sourceArray, const double* transformedArray, const int sourceArrayLength, const int transformedArrayLength);

        // Лабораторная работа №4

        // Заполняет таблицы в документе Microsoft Word содержимым исходного и трансформированного одномерного массива
        static void FillWordDocument(const double* sourceArray, const double* transformedArray, const int sourceArrayLength, const int transformedArrayLength);

        // Лабораторная работа №5

        // Удаляет первое вхождение элемента по значению из массива
        static void RemoveArrayItem(const double item, double* arr, int& arrayLength);

        // Сортирует массив с помощью оптимизированной сортировки пузырьком
        static void OptimizedBubbleSort(double* arr, const int arrayLength);
    };
}
