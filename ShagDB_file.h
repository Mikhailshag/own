#pragma once
#ifndef SHAGDB_FILE
#define SHAGDB_FiLE

using namespace std;

int pos;
int idNUM;
float middle_acc;

string record = "record.txt";
string points = "points.txt";
string buffer, str1, str2, str3, str4, str5, str6, str7, str8;
string readSTR1, readSTR2, readSTR3, readSTR4, readSTR5, readSTR6, readSTR7, readSTR8;

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
		cout << "\n‘айл  открыт\n\n" << endl;

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
	if (!fileRead.is_open())
	{
		cout << "\n‘айл не открыт\n\n";

	}
	else {

		getline(fileRead, buffer);
		pos = buffer.find(";");
		readSTR1 = buffer.substr(0, pos);
		str1 = buffer.substr(pos + 1);

		pos = str1.find(";");
		readSTR2 = str1.substr(0, pos);
		str2 = str1.substr(pos + 1);

		pos = str2.find(";");
		readSTR3 = str2.substr(0, pos);
		str3 = str2.substr(pos + 1);

		pos = str3.find(";");
		readSTR4 = str3.substr(0, pos);
		str4 = str3.substr(pos + 1);

		pos = str4.find(";");
		readSTR5 = str4.substr(0, pos);
		str5 = str4.substr(pos + 1);

		pos = str5.find(";");
		readSTR6 = str5.substr(0, pos);
		str6 = str5.substr(pos + 1);

		pos = str6.find(";");
		readSTR7 = str6.substr(0, pos);
		str7 = str6.substr(pos + 1);

		pos = str7.find(";");
		readSTR8 = str7.substr(0, pos);
		str8 = str7.substr(pos + 1);


	}
	fileRead.close();

	cout << readSTR1 << " ; " << readSTR2 << " ; " << readSTR3 << " ; " << readSTR4 << " ; " << readSTR5 << " ; " << readSTR6 << " ; " << readSTR7 << endl;

	idNUM = atoi(readSTR1.c_str());
	stud->id = idNUM;
	stud->people.family = readSTR2;
	stud->people.name = readSTR3;
	stud->people.contact.address = readSTR4;
	stud->people.contact.tel = readSTR5;
	middle_acc = atof(readSTR6.c_str());
	stud->middle_ac = middle_acc;
	stud->facult.group = readSTR7;

	if (readSTR8 == "0")
	{
		stud->facult.actual = false;
	}
	else
	{
		stud->facult.actual = true;
	}

	cout << endl;
}


#endif
