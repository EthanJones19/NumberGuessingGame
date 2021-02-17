#include <iostream>;

void guessNumber()
{
	//The lowest number it can guess
	int min = 1;
	//The highest number it can guess
	int max = 10;
	//Default answer is set to 0
	int answer = 0;


	while (min <= max)
	{
		

		//Inputs by default is set to 0
		char userInput = ' ';
		char userInput2 = ' ';
		//Sets the answer to the lowest and highest number divided by 2 by default
		answer = (min + max) / 2;

		//Asks the user if their number is the number that's being shown
		std::cout << "Is your number-> " << answer << " " << "\n";
		std::cout << "  1. Yes | 2. No :" << "\n";

		//Clears cin buffering
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		std::cin >> userInput;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		std::cout << std::endl;

		//If the user answers yes
		if (userInput == '1')
		{
			std::cout << "I did it! Best Ai :D " << "\n";
			return;
		}
		else if (userInput == '2')
		{



			//If the users inputs different answer
			std::cout << "  1.High or 2.Low?  " << "\n";
			std::cin >> userInput2;
			std::cout << std::endl;

			//If the answer is high
			if (userInput2 == '1')
			{
				//increase the lowest number up by 1
				min = answer + 1;
			}


			//If the answer is low
			else if (userInput2 == '2')
			{
				//decrese the highest number down by 1
				max = answer - 1;
			}

			
			//Invaildates any wrong inputs
			else
			{
				std::cout << "Invaild Input" << "\n";
			}

		}
		//Invaildates any wrong inputs
		else
		{
			std::cout << "Invaild Input" << "\n";
		}

		//If min is equal to max the game will not loop
		if (min == max)
		{
			std::cout << "You liar" << "\n";
			std::cout << "Im going to force you to end the game now. >:(" << "\n";
			return;
		}
	}

}

int main()
{
	//Starts the program and game will start.
	std::cout << "Welcome to my number guessing game! Let me guess your number.";
	guessNumber();


	int num = 0;

	system("pause");
	return 0;
}