#include <iostream>
#include "Matrix2D.h"
#include "Matrix3D.h"

using namespace std;

/*
 * Лабораторная работа №10
 *
 * Темы:
 *     классы (наследование, полиморфизм)
 *
 * ----------------------------------- Формулировка задания: -----------------------------------
 * Описать иерархию классов матриц произвольного размера со статическим выделением памяти под элементы.
 *
 * ------- Базовый класс матрицы MatrixBase -------
 * Для класса матрицы MatrixBase:
 *  - Конструктор по умолчанию удалить
 *  - Определить protected конструктор MatrixBase(unsigned int iSize), задающий размер матрицы
 *  - Определить приватное поле const unsigned int m_size, в котором хранится размерность матрицы
 *  - Метод unsigned int size() const возвращающий размерность матрицы
 *  - Абстрактный метод int element(unsigned int i, unsigned int j) const возвращающий элемент матрицы
 *  - Абстрактный метод int& element(unsigned int i, unsigned int j) возвращающий ссылку на элемент матрицы
 *  - перегрузить void operator*=(int iMult) умножения всех элементов матрицы на величину iMult
 *  - перегрузить void operator+=(MatrixBase iAdd) сложения матрицы с матрицей iAdd
 *  - перегрузить отдельно стоящий (не являющийся часть класса MatrixBase) оператор вывода
 *     содержимого матрицы в консоль std::ofstream& operator<<(std::ofstream& stream, const MatrixBase& iMatrix)
 *     объявление оператора разместить в заголовочном файле MatrixBase.h, определение -- в MatrixBase.cpp
 *
 * ------- Класс двухмерной матрицы Matrix2D -------
 * Определить класс двухмерной матрицы Matrix2D, являющийся public наследником класса MatrixBase.
 *
 * ------- Класс двухмерной матрицы Matrix3D -------
 * Определить класс трехмерной матрицы Matrix3D, являющийся public наследником класса MatrixBase.
 *
 * ------- Основная программа -------
 * Определить два экзмепляра Matrix2D и два экзмепляра Matrix3D.
 * Заполнить их упорядоченными значениями (1, 2, 3, ...)
 * Произвести с ними операции сложения и умножения, определёнными в соответствующих операторах класса MatrixBase.
 * Исходные данные и результаты вычислений вывести в консоль в человекочитаемом виде используя определённый по ТЗ
 * оператор вывода содержимого матрицы в виде такой конструкции: std::out << matrix << std::endl;
 *
*/

void output(Matrix2D m2a, Matrix2D m2b, Matrix3D m3a, Matrix3D m3b)
{
    cout << "m2a" << endl;
    cout << m2a << endl;
    cout << "m2b" << endl;
    cout << m2b << endl;

    cout << "m3a" << endl;
    cout << m3a << endl;
    cout << "m3b" << endl;
    cout << m3b << endl;
}

int main()
{
    Matrix2D m2a, m2b;
    Matrix3D m3a, m3b;
	for (auto i = 0; i < m2a.size(); i++)
        for(auto j = 0; j < m2a.size(); j++)
        {
            m2a.element(i, j) = i + j + 1;
            m2b.element(i, j) = i + j + 1;
        }
    for (auto i = 0; i < m3a.size(); i++)
        for (auto j = 0; j < m3a.size(); j++)
        {
            m3a.element(i, j) = i + j + 1;
            m3b.element(i, j) = i + j + 1;
        }

    setlocale(LC_ALL, "Russian");
    cout << "Исходные значения \n\n" << endl;
    output(m2a, m2b, m3a, m3b);
	
    m2a += m2b;
    m2b *= 20;
    m3a += m3b;
    m3b *= 10;
	
    cout << "Результаты вычислений \n\n" << endl;
    output(m2a, m2b, m3a, m3b);
    return 0;
}