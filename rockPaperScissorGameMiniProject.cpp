#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Choice { ROCK, PAPER, SCISSORS };

Choice getComputerChoice() {
    return static_cast<Choice>(rand() % 3);
}

// Function to display ASCII art for Rock, Paper and Scissor
void displayRock() {
    cout << R"(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)" << endl;
}

void displayPaper() {
    cout << R"(
    _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)
)" << endl;
}

void displayScissors() {
    cout << R"(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)" << endl;
}

// Function to compare user's choice with computer's choice and determine the result
void playRound(Choice userChoice, Choice computerChoice) {
    cout << "Computer chose: ";
    switch (computerChoice) {
        case ROCK:
            displayRock();
            break;
        case PAPER:
            displayPaper();
            break;
        case SCISSORS:
            displayScissors();
            break;
    }

    cout << "Your choice: ";
    switch (userChoice) {
        case ROCK:
            displayRock();
            break;
        case PAPER:
            displayPaper();
            break;
        case SCISSORS:
            displayScissors();
            break;
    }

    if (userChoice == computerChoice) {
        cout << "It's a draw!\n";
    } else if ((userChoice == ROCK && computerChoice == SCISSORS) ||
               (userChoice == PAPER && computerChoice == ROCK) ||
               (userChoice == SCISSORS && computerChoice == PAPER)) {
        cout << "Congratulations! You win!\n";
    } else {
        cout << "Sorry, you lose!\n";
    }
}

int main() {
    srand(time(0)); 

    cout << "\t\t\t\t------------------------------------------\n";
    cout << "\t\t\t\t Welcome to Rock, Paper and Scissors Game" << endl;
    cout << "\t\t\t\t------------------------------------------\n\n";
    cout << "Let's dive into the fun! Are you ready to play? (Y/Press any key to quite the game): ";
    char readyToPlay;
    cin >> readyToPlay;

    if (readyToPlay != 'Y' && readyToPlay != 'y') {
        cout << "\t\t\t\t------------------------------------------\n";
        cout << "\t\t\t\t Ok, we will play later. Have a good time!\n";
        cout << "\t\t\t\t------------------------------------------\n\n";
        return 0;
    }

    // Game instructions
    cout << endl << endl;
    cout << "\t\t";
    cout << "This game allows you to play against the computer in a classic game of chance and strategy." << endl << endl;
    cout << "\t\t\t\t Here is a quick manual:\n\n";
    cout << "\t\t\t*************************************************************************\n";
    cout << "\t\t\t\t1. Enter 0 for Rock, 1 for Paper, or 2 for Scissors.\n";
    cout << "\t\t\t\t2. The computer will randomly select a move.\n";
    cout << "\t\t\t\t3. The winner is determined based on the following rules:\n";
    cout << "\t\t\t\t   -> Rock crushes Scissors.\n";
    cout << "\t\t\t\t   -> Scissors cuts Paper.\n";
    cout << "\t\t\t\t   -> Paper covers Rock.\n";
    cout << "\t\t\t\t4. You can choose to play again after each round.\n";
    cout << "\t\t\t*************************************************************************\n\n";

    char playAgain = 'Y'; // Initialize to 'Y' to enter the loop at least once
    while (playAgain == 'Y' || playAgain == 'y') {
        cout << "\t\t\t Let's get started by knowing your choice. Enter your choice:\n";
        cout << "\t\t\t\t   0 for Rock \n";
        cout << "\t\t\t\t   1 for Paper\n";
        cout << "\t\t\t\t   2 for Scissors\n\n";
        cout << "\t\t\t\t Your choice: ";

        int userChoice;
        cin >> userChoice;

        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice. Please enter a number between 0 and 2.\n";
            continue;
        }

        Choice computerChoice = getComputerChoice();
        playRound(static_cast<Choice>(userChoice), computerChoice);
        cout << endl;
        cout << "Do you want to play again? (Y/Press any key to take a break): ";
        cin >> playAgain;
    }
    cout << endl;
    cout << "\t\t\t\t\t\t -------------------\n";
    cout << "\t\t\t\t\t\t Thanks for playing!\n";
    cout << "\t\t\t\t\t\t -------------------\n\n";
       
    return 0;
}
