#include <iostream>
#include <vector>

int RandomIndex(std::vector<std::string> strGesture){

	int intRandNumber;
	std::cout << "Enter random integer: ";
	std::cin >> intRandNumber;


	int intRandIndex = intRandNumber % strGesture.size();

	return intRandIndex;

}

std::string PlayerGesture(){

	std::string strPlayerGesture;

	std::cout << "Rock, Paper, Scissors!" << std::endl;
	std::cin >> strPlayerGesture;

	return strPlayerGesture;

}

void Draw(std::string strPlayerGesture){
	std::cout << "We both draw with " << strPlayerGesture << std::endl;
}

void ComputerWin(std::string strPlayerGesture, std::string strComputerGesture){
	std::cout << "I beat your " << strPlayerGesture << " with " << strComputerGesture << std::endl;
}

void PlayerWin(std::string strPlayerGesture, std::string strComputerGesture){
	std::cout << "Your " << strPlayerGesture << " beat my " << strComputerGesture << std::endl;
}




int main(){

	const std::vector<std::string> strGesture {"Rock", "Paper", "Scissors"};
	int nWins, nPlayerWins{0}, nComputerWins{0}, intRound{0};

	std::cout << "First to: ";
	std::cin >> nWins;



	while(nPlayerWins < nWins && nComputerWins < nWins){

		++intRound;
		std::cout << "----------------------------------\n";
		std::cout << "Round " << intRound << std::endl;
		std::cout << "----------------------------------\n";

		int intRandIndex = RandomIndex(strGesture);

		std::string strComputerGesture = strGesture[intRandIndex];
		std::string strPlayerGesture = PlayerGesture();

		if(strPlayerGesture == strComputerGesture){
			Draw(strPlayerGesture);
		}
		else{
			switch(strPlayerGesture[0]){
				case 'R':
					switch(strComputerGesture[0]){
						case 'P':
							ComputerWin(strPlayerGesture, strComputerGesture);
							++nComputerWins;
							break;
						case 'S':
							PlayerWin(strPlayerGesture, strComputerGesture);
							++nPlayerWins;
							break;
						default:
							std::cout << "Error \n";
					}
					break;
				case 'P':
					switch(strComputerGesture[0]){
						case 'R':
							PlayerWin(strPlayerGesture, strComputerGesture);
							++nPlayerWins;
							break;
						case 'S':
							ComputerWin(strPlayerGesture, strComputerGesture);
							++nComputerWins;
							break;
						default:
							std::cout << "Error \n";

					}
					break;
				case 'S':
					switch(strComputerGesture[0]){
						case 'R':
							ComputerWin(strPlayerGesture, strComputerGesture);
							++nComputerWins;
							break;
						case 'P':
							PlayerWin(strPlayerGesture, strComputerGesture);
							++nPlayerWins;
							break;
						default:
							std::cout << "Error \n";
					}
					break;
				default:
					std::cout << "Error \n";
			}
		}

		std::cout << "Current score: Player " << nPlayerWins << " - " << nComputerWins
		<< " Computer\n \n";

	}
	std::cout << "----------------------------------\n";
	std::cout << "FINAL SCORE: Player " << nPlayerWins << " - " << nComputerWins
	<< " Computer \n";
	std::cout << "----------------------------------\n";

	return 0;
}
