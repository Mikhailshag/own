// 06,02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
//#include "Shag_db_Struct.h"
#include "Shad_db_foo.h"
#include "ShagDB_file.h"
#include <string>

using namespace std;
//const int N = 1;

void InputStudentInfo(Student *stud);		// ввод информации о студентах
void InputStudentVisit(Student *stud, int n); //ввод посещения студента
void InputStudentAc(Student *stud, int n); //ввод информации об оценках на уроке
void InputStudentAcHome(Student *stud, int n); //ввод информации об оценках за домашнюю работу
void InputStudentAcLab(Student *stud, int n); //ввод информации об оценках за лабораторную работу
void InputStudentAcTest(Student *stud, int n); //ввод информации об оценках за контрольную работу
void CalcStudentMiddleAc(Student *stud, int m); //расчет средней оценки
void InputStudentAcperf(Student *stud, int m);
void InputStudentFacultet(Student *stud); //ввод информации о факультете
void OtputStudentInfo(Student *stud);
//void StudentPointsOutputFile(Student *stud);

int vibor;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Добро пожаловать в базу данный Академии ШАГ\nВ программе можно:\n"; 

	/*cout << "Ввод данных:\nС клавиатуры - 1\nИмпорт из файла - 2\n"; cin >> vibor;
	switch (vibor)
	{
	case 1:

		break;
	case 2:

		break;
	default:
		break;
	}
	cout << "Вывод данных:\nНа экран - 1\nЭкспорт в файла - 2\n"; cin >> vibor;
	switch (vibor)
	{
	case 1:

		break;
	case 2:

		break;
	default:
		break;
	}
	cout << "Очистить базу?\nДа - 1\nНет - 2\n"; cin >> vibor;
	switch (vibor)
	{
	case 1:

		break;
	case 2:

		break;
	default:
		break;
	}
	cout << "Сортировка:\nСартировать и вывести по имени - 1\nСартировать и вывести по фамилии - 2\n"; cin >> vibor;
	switch (vibor)
	{
	case 1:

		break;
	case 2:

		break;
	default:
		break;
	}
	cout << "Поиск записи:\nВывести искомую запись - 1\nИзменить искомую запись - 2\n"; cin >> vibor;
	switch (vibor)
	{
	case 1:

		break;
	case 2:

		break;
	default:
		break;
	}
*/
	for (int i = 0; i < N; i++)
	{
		StudentInputFile(&student_shag[i]);

		student_shag[i].id = i + 1;

		InputStudentInfo(&student_shag[i]);

		InputStudentVisit(&student_shag[i], N);

		InputStudentAcperf(&student_shag[i], N);

		InputStudentFacultet(&student_shag[i]);
	}
	for (int i = 0; i < N; i++)
	{
		OtputStudentInfo(&student_shag[i]);
		//StudentOutputFile(&student_shag[i]); //запись в файл
		//StudentPointsOutputFile(&student_shag[i]);
	}

	
}
