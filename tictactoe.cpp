#include <iostream>
#include <string>
#include <vector>

char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void mark(int player, int box) {
  if (player == 1) {
    square[box - 1] = 'X';
  }
  if (player == 2) {
    square[box - 1] = 'O';
  }
}

int checkWin() {
  if (square[0] == square[1] && square[1] == square[2]) {
    if (square[0] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[3] == square[4] && square[4] == square[5]) {
    if (square[3] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[6] == square[7] && square[7] == square[8]) {
    if (square[6] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[0] == square[3] && square[3] == square[6]) {
    if (square[0] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[1] == square[4] && square[4] == square[7]) {
    if (square[1] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[2] == square[5] && square[5] == square[8]) {
    if (square[2] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[0] == square[4] && square[4] == square[8]) {
    if (square[0] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else if (square[2] == square[4] && square[4] == square[6]) {
    if (square[2] == 'X') {
      return 1;
    } else {
      return 2;
    }
  } else {
    return 0;
  }
}

void intro() {
  std::cout << " #############################\n";
  std::cout << " #############################\n";
  std::cout << " ## Welcome to TIC TAC TOE! ##\n";
  std::cout << " #############################\n";
  std::cout << " ######### HAVE FUN! #########\n";
  std::cout << " #############################\n";
  std::cout << " #############################\n";
}

void draw() {
  std::cout << "\n\t"
            << "    |   |    "
            << "\n";
  std::cout << "\t"
            << "  " << square[0] << " "
            << "|"
            << " " << square[1] << " "
            << "|"
            << " " << square[2] << "  "
            << "\n";
  std::cout << "\t"
            << "____|___|____"
            << "\n";
  std::cout << "\t"
            << "    |   |    "
            << "\n";
  std::cout << "\t"
            << "  " << square[3] << " "
            << "|"
            << " " << square[4] << " "
            << "|"
            << " " << square[5] << "  "
            << "\n";
  std::cout << "\t"
            << "____|___|____"
            << "\n";
  std::cout << "\t"
            << "    |   |    "
            << "\n";
  std::cout << "\t"
            << "  " << square[6] << " "
            << "|"
            << " " << square[7] << " "
            << "|"
            << " " << square[8] << "  "
            << "\n";
  std::cout << "\t"
            << "    |   |    "
            << "\n\n";
}

int main() {
  int player1 = 1;
  int player2 = 2;

  int result = 0;
  int box = 0;
  int finished = 0;

  intro();
  draw();

  for (int i = 1; i < 5; i++) {
    std::cout << "  Player " << player1 << " enter your box: ";
    std::cin >> box;
    mark(player1, box);
    draw();
    result = checkWin();
    if (result == 1) {
      std::cout << "Congratulations Player 1, you won!\n\n";
      finished = 1;
      break;
    }
    if (result == 2) {
      std::cout << "Congratulations Player 2, you won!\n\n";
      finished = 1;
      break;
    }
    std::cout << "  Player " << player2 << " enter your box: ";
    std::cin >> box;
    mark(player2, box);
    draw();
    result = checkWin();
    if (result == 1) {
      std::cout << "Congratulations Player 1, you won!\n\n";
      finished = 1;
      break;
    }
    if (result == 2) {
      std::cout << "Congratulations Player 2, you won!\n\n";
      finished = 1;
      break;
    }
  }
  if (finished == 0) {
    std::cout << "     The Game is a draw!\n\n";
  }

  return 0;
}