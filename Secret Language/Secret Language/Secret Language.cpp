#include <iostream>
using namespace std;
void encrept(char* word);
void decrept(char* word);

int main()
{
	cout << "\nProgrammed by the spy Mirette Amin" << endl;
	cout << "\nHello with our secret language :D\n" << endl;
	while (true)
	{
		char word[100];
		cout << "\nDo you want to encrept the word or to decrept the word ?\n if you want to encrept press (1) and if you want to decrept press (2):";
		while (true)
		{
			cin.getline(word, 99);
			if (word[0] == '1')
			{
				cout << "\nPlease enter the word : ";
				cin.getline(word, 99);
				encrept(word);
				break;
			}
			else if (word[0] == '2')
			{
				cout << "\nPlease enter the word : ";
				cin.getline(word, 99);
				decrept(word);
				break;
			}
			else
				cout << "Error" << endl;
			cout << "Please rechoose (1 or 2) ";
		}

		cout << "\nThe translation is :" << word << endl;
		cout << "\ndo you want exit ? \nif you exit press (y) if not press (n) : ";
		while (true)
		{
			cin.getline(word, 99);
			if (word[0] == 'y')
				break;
			else if (word[0] == 'n')
				break;
			else
				cout << "rechoose y or n" << endl;
		}
		if (word[0] == 'y')
			break;
	}

	return 0;
}
void encrept(char* word)
{
	int counter = 0;
	while (true)
	{
		if (*(word + counter) != NULL)
		{
			if ((*(word + counter) >= 97) && (*(word + counter) <= 122) || (*(word + counter) >= 65) && (*(word + counter) <= 90))
			{
				if ((*(word + counter) == 'a') || (*(word + counter) == 'A'))
				{
					*(word + counter) += 25;
				}
				else
				{
					*(word + counter) -= 1;
				}
			}
		}

		else
			break;
		counter++;
	}
}
void decrept(char* word)
{
	int counter = 0;
	while (true)
	{
		if (*(word + counter) != NULL)
		{
			if ((*(word + counter) >= 97) && (*(word + counter) <= 122) || (*(word + counter) >= 65) && (*(word + counter) <= 90))
			{
				if ((*(word + counter) == 'z') || (*(word + counter) == 'Z'))
				{
					*(word + counter) -= 25;
				}
				else
				{
					*(word + counter) += 1;
				}
			}
		}

		else
			break;
		counter++;
	}
}
