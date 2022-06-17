// MidtermMakeAQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>




int validNumber(int number) //takes an int input from the user, checks if it is an int and returns it
{
	while (true)
	{
		if (std::cin >> number)
		{
			break;
		}

		std::cin.clear();
		std::cin.ignore();
		std::cout << "invalid number. Please try again.";

	}
	return number;
}

bool quiz()
{

	bool wantToConinue = true;
	int answer = 1;
	while (wantToConinue)
	{
		srand(time(0));
		int questionNumber = rand() % 4 + 1;


		switch (questionNumber)
		{
		case 1:
			std::cout << "How many colors are in the rainbow?\n"
				<< "1. 6\n"
				<< "2. 7\n"
				<< "3. 8\n"
				<< "4. 777 (Jackpot!)\n";
			break;
		case 2:
			std::cout << "How much wood could a wood chuck chuck?\n"
				<< "1. A lot\n"
				<< "2. A wood chuck would chuck as much wood as a wood chuck could chuck\n"
				<< "3. A wood chuck does not chuck wood\n"
				<< "4. A little\n";
			break;
		case 3:
			std::cout << "What is the ultimate answer to the question of life, the universe, and everything?\n"
				<< "1. There is no meaning\n"
				<< "2. 42\n"
				<< "3. It is what you make of it\n"
				<< "4. Come on. You know what the right answer is\n";
			break;
		case 4:
			std::cout << "What kind of bear is best?\n"
				<< "1. False. Black bear.\n"
				<< "2. That's debatable. There are basically two schools of thought---\n"
				<< "3. Fact. Bears eat beets. Bears. Beets. Battlestar Galactica.\n"
				<< "4. Polar bear\n";
			break;
		default:
			break;
		}
		std::cout << "please type in the number of your answer below.\n";
		answer = validNumber(answer);
		if (answer < 1 || answer > 4)
		{
			std::cout << "That wasn't really an option, so now the program will just end.";
			std::cin.clear();
			std::cin.ignore();
			return wantToConinue;
		}
		if (questionNumber > 0 && questionNumber < 4)
		{
			if (answer == 2)
			{
				std::cout << "That's the right answer!\n";
			}
			else
			{
				std::cout << "Wrong! maybe next time!\n";
			}
		}
		else
		{
			std::cout << "The only real answer is \" I watched the office\"\n";
		}
		std::cout << "Want to go again? 1 for yes, 2 for no\n";
		int i = 1; // needed an int here to check if they want to continue
		i = validNumber(i);
		if (i == 1)
		{
			wantToConinue = true;
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			wantToConinue = false;
			std::cout << "Thanks for taking my quiz!";

		}
	}
 }

int main()
{
	std::cout << "Welcome to the quiz! I hope you're ready to start. Pres any button for your first question: " << '\n';
	std::cin.clear();
	std::cin.ignore();
	std::cin;
	quiz();

}