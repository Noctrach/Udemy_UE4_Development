#include <memory>	
#include "BullCowGame.h"

int main()
{
	std::unique_ptr<BullCowGame> Game(new BullCowGame);
	Game->PlayGame();
	
	system("pause");
	return 0;
}

