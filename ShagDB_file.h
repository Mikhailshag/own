#pragma once
#ifndef SHAGDB_FILE
#define SHAGDB_FiLE

using namespace std;

string record = "record.txt";
string points = "points.txt";
string buffer,str;
int semicolon = 0,k,i=0;

void StudentOutputFile(Student *stud)
{
	ofstream file;
	file.open(record, ios_base::app);

	if (!file.is_open())
	{
		cout << "\nФайл не открыт\n\n" << endl;
	}
	else
	{
		cout << "\nФайл  открыт\n\n" << endl;

		file << stud->id << ";" << stud->people.family << ";" << stud->people.name << ";" << stud->people.contact.address << ";" << stud->people.contact.tel << ";" << stud->middle_ac << ";" << stud->facult.group << ";" << stud->facult.actual << endl;
	}

	file.close();
	
}
void StudentPointsOutputFile(Student *stud) {

	ofstream filePoints;
	filePoints.open(points, ios_base::app);

	if (!filePoints.is_open())
	{
		cout << "\nФайл не открыт\n\n" << endl;
	}
	else
	{
		cout << "\nФайл  открыт\n\n" << endl;

		filePoints << "ID = " << stud->id << ";" << endl;

		for (int j = 0; j < N; j++)
		{
			filePoints << stud->visit[j].date.day << ":" << stud->visit[j].date.month << ":" << stud->visit[j].date.year << ";" << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->visit[j].status << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->ac_perf[j].date.day << ":" << stud->ac_perf[j].date.month << ":" << stud->ac_perf[j].date.year << ";" << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->ac_perf[j].ac_status << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->homework[j].date.day << ":" << stud->homework[j].date.month << ":" << stud->homework[j].date.year << ";" << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->homework[j].ac_status << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->lab[j].date.day << ":" << stud->lab[j].date.month << ":" << stud->lab[j].date.year << ";" << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->lab[j].ac_status << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->test[j].date.day << ":" << stud->test[j].date.month << ":" << stud->test[j].date.year << ";" << endl;
		}
		for (int j = 0; j < N; j++)
		{
			filePoints << stud->test[j].ac_status << "\n--------" << endl;
		}
	}



	filePoints.close();
}



void StudentInputFile(Student *stud) {

	ifstream fileRead(record);
	if (fileRead.is_open())
	{
		cout << "Файл открыт!\n";
		while (!fileRead.eof())
		{
			getline(fileRead, buffer);
			
			while (buffer[k+i] != ';') {

				str = str + buffer[k];
				i++;
				break;
			}
		}
		fileRead.close();
	}
	else {

		cout << "\nФайл не открыт\n\n"; 

	}



	

	cout << endl;

}



#endif