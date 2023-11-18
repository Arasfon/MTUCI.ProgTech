#include "Tasks2.h"

using namespace System;

using namespace Labs::SharedDll;

// Лабораторная работа №7

int** Tasks2::GenerateMatrix(const int sideLength)
{
    Random^ random = gcnew Random();

    int** matrix = new int*[sideLength];

    for (int i = 0; i < sideLength; i++)
    {
        matrix[i] = new int[sideLength];

        for (int j = 0; j < sideLength; j++)
            matrix[i][j] = random->Next(-10000, 10000);
    }

    return matrix;
}

void Tasks2::OutputMatrix(DataGridView^ dgw, int** matrix, const int sideLength)
{
    dgw->ColumnCount = sideLength;
    dgw->RowCount = sideLength;

    for (int i = 0; i < sideLength; ++i)
    {
        dgw->Columns[i]->HeaderCell->Value = String::Format("[{0}]", i);
        dgw->Rows[i]->HeaderCell->Value = String::Format("[{0}]", i);
    }

    for (int i = 0; i < sideLength; ++i)
        for (int j = 0; j < sideLength; ++j)
            dgw->Rows[i]->Cells[j]->Value = matrix[i][j];
}

void Tasks2::DeleteMatrix(int** matrix, int sideLength)
{
    for (int i = 0; i < sideLength; ++i)
        delete[] matrix[i];

    delete[] matrix;
}

void Tasks2::EndsWith3AndWith5UnderMinorDiagonalCount(int** matrix, const int sideLength, int& endsWith3Count, int& endsWith5UnderMinorDiagonalCount)
{
    endsWith3Count = 0;
    endsWith5UnderMinorDiagonalCount = 0;

    for (int i = 0; i < sideLength; i++)
    {
        for (int j = 0; j < sideLength; j++)
        {
            if (matrix[i][j] % 10 == 3)
                endsWith3Count++;

            if (matrix[i][j] % 10 == 5 && j > sideLength - i - 1)
                endsWith5UnderMinorDiagonalCount++;
        }
    }
}

int* Tasks2::CreateArrayAboveThreshold(int** matrix, const int sideLength, const int threshold, int& arrayLength)
{
    int* arr = new int[sideLength * sideLength];
    arrayLength = 0;

    for (int i = 0; i < sideLength; i++)
    {
        for (int j = 0; j < sideLength; j++)
        {
            if (matrix[i][j] > threshold)
                arr[arrayLength++] = matrix[i][j];
        }
    }

    return arr;
}
