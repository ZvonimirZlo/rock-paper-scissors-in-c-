#include <iostream>
#include <stdlib.h>

int main()
{

  srand(time(NULL));

  // random number for computer choice
  int computer = rand() % 3 + 1;

  int user = 0;

  // posible user inputs
  int rock = 1;
  int paper = 2;
  int scissors = 3;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";

  // user input
  std::cin >> user;

  // displays users and computers choice
  if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else
    std::cout << "you choose: ✌️\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else
    std::cout << "cpu choose: ✌️\n";

  // displays final result
  if (user == 1 && computer == 3)
  {
    std::cout << "You Won!\n";
  }
  else if (user == 1 && computer == 2)
  {
    std::cout << "You Lost!\n";
  }
  else if (user == 1 && computer == 1)
  {
    std::cout << "Tie!\n";
  }
  else if (user == 2 && computer == 1)
  {
    std::cout << "You Won!\n";
  }
  else if (user == 2 && computer == 2)
  {
    std::cout << "Tie!\n";
  }
  else if (user == 2 && computer == 3)
  {
    std::cout << "You Lost!\n";
  }
  else if (user == 3 && computer == 1)
  {
    std::cout << "You Lost!\n";
  }
  else if (user == 3 && computer == 2)
  {
    std::cout << "You Won!\n";
  }
  else
  {
    std::cout << "Tie\n";
  }
}