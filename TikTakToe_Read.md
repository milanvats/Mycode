# Tic-Tac-Toe in C++

## Description
This is a simple command-line Tic-Tac-Toe game implemented in C++ using the `vector` data structure. The game allows two players to take turns and play against each other by selecting positions on a 3x3 board.

## Features
- A 3x3 grid representation of the game board.
- Player selection between 'X' and 'O'.
- Input validation to prevent invalid moves.
- Automatic switching between players.
- Checks for a winning condition (row, column, or diagonal).
- Displays the result (Winner or Draw).

## How to Run
1. Clone the repository or download the source file.
2. Compile the code using a C++ compiler:
   ```sh
   g++ tic_tac_toe.cpp -o tic_tac_toe
   ```
3. Run the executable:
   ```sh
   ./tic_tac_toe
   ```
4. Follow the on-screen instructions to play the game.

## Game Rules
- The game starts with an empty 3x3 grid labeled from 1 to 9.
- Players take turns choosing a position (1-9) to place their symbol ('X' or 'O').
- If a player gets three of their symbols in a row, column, or diagonal, they win.
- If all positions are filled without a winner, the game ends in a draw.

## Example Gameplay
```
1 | 2 | 3
---------
4 | 5 | 6
---------
7 | 8 | 9

Choose your Symbol (x or o): x
Enter a Number In Between 1 to 9: 5

1 | 2 | 3
---------
4 | x | 6
---------
7 | 8 | 9

Next player's turn...
```

## Contributions
Feel free to fork the repository and improve the game by adding features such as:
- AI opponent.
- GUI version using a graphics library.
- Score tracking.

## License
This project is open-source and can be modified and distributed freely.

