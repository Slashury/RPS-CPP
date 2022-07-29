#include <iostream>
#include <ctime>

char userChoice();
void showChoice(char choice);
char ComputerChoice();
void Winner(char user, char computer);

int main() {
    char user;
    char computer;

    user = userChoice();
    std::cout << "Your choice is: ";
    showChoice(user); std::cout << "\n";


    computer = ComputerChoice();
        std::cout << "AI's choice: ";
        showChoice(computer); std::cout << "\n";

        Winner(user, computer);
    return 0;


}
char userChoice() {
    char user;
    std::cout << "Rock Paper Scissors!\n";
    do {
        std::cout << "'r' 'p' 's' - Choose \n";
        std::cin >> user;
    } while (user != 'r' && user != 'p' && user != 's');
    return user;


}

char ComputerChoice() {
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }
}
void showChoice(char choice) {
    switch (choice)
    {
    case 'r': std::cout << "Rock";

        break;

    case 'p': std::cout << "Paper";

        break;

    case 's': std::cout << "Scissors";

        break;

    default:
        break;
    }
}
void Winner(char user, char computer) {

    switch (user)
    {
    case 'r': 
        if (computer == 'r') 
    {
            std::cout << "Tie!";
        }
        else if(computer == 'p') {
            std::cout << "You lost";
        }
        else {
            std::cout << "You won!";
        }
        break;
    case 'p':
        if (computer == 'p') {
            std::cout << "Tie!";
        }
        else if (computer == 's') {
            std::cout << "You lost!";
        }
        else {
            std::cout << "You won!";
        }
        break;
    case 's': 
        if (computer == 's')
    {
        std::cout << "Tie";
        }
        else if (computer == 'r') {
            std::cout << "You lost!";
        }
        else {
            std::cout << "You won!";
        }
        break;
    }

}