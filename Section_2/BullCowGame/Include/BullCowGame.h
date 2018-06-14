#pragma once

#include<cstdint>
#include<string>

#include <map>
#define TMap std::map

using int32 = int;

struct BullsCows
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EWordStatus : char
{
	VALID,
	NOT_ISOGRAM,
	NOT_LOWERCASE,
	TOO_SHORT,
	TOO_LONG
};

class BullCowGame
{
	using FString = std::string;

public:
	BullCowGame();
	~BullCowGame();

	void PlayGame();

private:
	void PrintIntro() const;
	void PrintGuess() const;
	bool ValidateIsogram(const FString& a_Word) const;
	bool ValidateCase(const FString& a_Word) const;
	EWordStatus ValidateGuess() const;

	void TakeGuess();
	bool EvaluateGuess();
	
	bool PlayAgain();
	void Reset();

	int32 m_Turns;
	bool m_PrintBullsCows;
	FString m_Word;
	FString m_Guess;
	BullsCows m_BullCowCount;
};