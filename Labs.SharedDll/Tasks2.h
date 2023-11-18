#pragma once

using namespace System::Windows::Forms;

namespace Labs::SharedDll
{
    public ref class Tasks2 sealed
    {
    public:
        // Лабораторная работа №7

        // Генерирует квадратную матрицу с заданным размером
        static int** GenerateMatrix(const int sideLength);

        // Выводит матрицу в DataGridView
        static void OutputMatrix(DataGridView^ dgw, int** matrix, const int sideLength);

        // Очищает выделенную под матрицу память
        static void DeleteMatrix(int** matrix, int sideLength);

        // Подсчитывает количество чисел, заканчивающихся на 3, и количество чисел ниже главной диагонали, заканчивающихся на 5
        static void EndsWith3AndWith5UnderMinorDiagonalCount(int** matrix, const int sideLength, int& endsWith3Count, int& endsWith5UnderMinorDiagonalCount);

        // Создаёт массив из элементов матрицы, которые больше заданной границы
        static int* CreateArrayAboveThreshold(int** matrix, const int sideLength, const int threshold, int& arrayLength);
    };
}