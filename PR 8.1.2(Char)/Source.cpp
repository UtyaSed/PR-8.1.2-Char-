// Lab_8_1-2.cpp
// Обухова Віктора
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 7

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;

	while (p = strchr(s + pos1, 'w'))
	{
		if (s[p - s + 1] == 'h')
		{
			if (s[p - s + 2] == 'i')
			{
				if (s[p - s + 3] == 'l')
				{
					if (s[p - s + 4] == 'e')
					{
						pos2 = p - s + 5;
						strncat(t, s + pos1, pos2 - pos1 - 5);
						strcat(t, "***");
						pos1 = pos2;
					}
					else {
						break;
					}
				}
				else {
					break;
				}
			}
			else {
				break;
			}
		}
		else {
			break;
		}
	}

		
	strcat(t, s + pos1);
	strcpy(s, t);

	return t;
}

int main()
{
	char Str[101];
	char ModStr[101];

	cout << "Enter string:" << endl;
	cin.getline(Str, 50);

	Change(Str);
	strcpy(ModStr, Str);


	cout << "Modified string:" << ModStr << endl;


	return 0;
}