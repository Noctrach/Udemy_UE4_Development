#include "BullCowGame.h"
#include <iostream>
#include <cctype>

BullCowGame::BullCowGame() :
	m_Turns(0),
	m_Word(""),
	m_Guess("")
{};

BullCowGame::~BullCowGame() {};

void BullCowGame::PrintIntro() const
{
	std::cout << "\nBulls and Cows game, guess a word of " << m_Word.length() << " letters.\n\n";
	return;
}

void BullCowGame::PrintGuess() const
{
	if (m_PrintBullsCows)
	{
		std::cout << "Bulls: " << m_BullCowCount.Bulls << std::endl;
		std::cout << "Cows: " << m_BullCowCount.Cows << std::endl;
	}
	std::cout << "Your guess was: " << m_Guess << std::endl;
	return;
}

bool BullCowGame::ValidateIsogram(const FString& a_Word) const
{
	if (a_Word.length() < 2) return true;

	TMap<char, bool> LetterMap;
	for (auto Letter : a_Word)
	{
		Letter = tolower(Letter); // handle uppercase
		if (LetterMap[Letter])
		{
			return false;
		}
		else
		{
			LetterMap[Letter] = true;
		}
	}
	return true;
}

bool BullCowGame::ValidateCase(const FString & a_Word) const
{
	for (auto Letter : a_Word)
	{
		if (std::isupper(Letter))	return false;
	}
	return true;
}

EWordStatus BullCowGame::ValidateGuess() const
{
	const int32 GUESSLENGTH = m_Guess.length();
	const int32 WORDLENGTH = m_Word.length();

	if (!ValidateCase(m_Guess))
	{
		return EWordStatus::NOT_LOWERCASE;
	}
	else if (!ValidateIsogram(m_Guess))
	{
		return EWordStatus::NOT_ISOGRAM;
	}
	else if (GUESSLENGTH > WORDLENGTH)
	{
		return EWordStatus::TOO_LONG;
	}
	else if (GUESSLENGTH < WORDLENGTH)
	{
		return EWordStatus::TOO_SHORT;
	}
	else
	{
		return EWordStatus::VALID;
	}
}

void BullCowGame::TakeGuess()
{
	std::cout << "\nTries left: " << m_Turns << ".\nYour guess: ";
	std::getline(std::cin, m_Guess);
}

bool BullCowGame::EvaluateGuess()
{
	m_BullCowCount.Bulls = 0;
	m_BullCowCount.Cows = 0;
	m_PrintBullsCows = false;

	//Prevent erroneously editing of data
	const int32 GUESSLENGTH = m_Guess.length();
	const int32 WORDLENGTH = m_Word.length();
	const FString GUESS = m_Guess;
	const FString WORD = m_Word;

	switch (ValidateGuess())
	{
	case EWordStatus::VALID:
		break;
	case EWordStatus::NOT_LOWERCASE:
		std::cout << "Word isn't lowercase!" << std::endl;
		return false;
	case EWordStatus::NOT_ISOGRAM:
		std::cout << "Word isn't an isogram!" << std::endl;
		return false;
	case EWordStatus::TOO_LONG:
		std::cout << "Word is too long!" << std::endl;
		return false;
	case EWordStatus::TOO_SHORT:
		std::cout << "Word is too short!" << std::endl;
		return false;
	}

	if (GUESS == WORD)
	{
		std::cout << "You win!\n";
		return true;
	}

	for (int32 i = 0; i < GUESSLENGTH; i++)
	{
		for (int32 j = 0; j < WORDLENGTH; j++)
		{
			if (GUESS[i] == WORD[j])
			{
				if (i == j)
				{
					m_BullCowCount.Bulls++;
				}
				else
				{
					m_BullCowCount.Cows++;
				}
			}
		}
	}
	m_PrintBullsCows = true;
	return false;
}

void BullCowGame::Reset()
{
	std::cout << "How many turns would you like your game to last?\n";
	std::cin >> m_Turns;

	//flush input buffer to allow getline use
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	bool WordIsIsogram = false;
	bool WordIsLowerCase = false;
	do
	{
		std::cout << "What is the word your opponent has to guess?\n";
		std::getline(std::cin, m_Word);
		
		WordIsIsogram = ValidateIsogram(m_Word);
		WordIsLowerCase = ValidateCase(m_Word);

		if (!WordIsLowerCase)
		{
			std::cout << "That isn't all lowercase! Try again!\n";
		}
		else if (!WordIsIsogram)
		{
			std::cout << "That isn't an isogram! Try again!\n";
		}

	} while (!WordIsIsogram || !WordIsLowerCase);
}

void BullCowGame::PlayGame()
{	
	do
	{
		Reset();
		PrintIntro();

		while((m_Turns) > 0)
		{
			TakeGuess();
			if (EvaluateGuess())
				break;
			PrintGuess();
			m_Turns--;
		}
	} while (PlayAgain());
}

bool BullCowGame::PlayAgain()
{
	char answer = '0';

	std::cout << "Do you want to play again?\n";
	std::cin >> answer;

	return((answer == 'y') || (answer == 'Y'));
}