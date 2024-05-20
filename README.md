# Conway's Game of Life Recreation

This repository contains a C++ implementation of Conway's Game of Life using the raylib library for graphics rendering. 
Conway's Game of Life is a cellular automaton devised by the British mathematician John Horton Conway in 
1970. It's a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input.

## Features

- Interactive control over cell states with mouse clicks.
- Ability to start, pause, and reset the simulation.
- Dynamic adjustment of simulation speed.
- Random state generation to start with a unique grid every time.

## Prerequisites

Before running this project, ensure you have the following installed:
- C++ Compiler (GCC recommended)
- [raylib](https://www.raylib.com/) library installed and configured properly in your development environment.

## Running the Project

1. Clone the repository to your local machine:
   ```bash
   git clone git@github.com:tasnint/Game-Of-Life.git
   cd Game-Of-Life
2.  Open the project in Visual Studio Code.
3.  Ensure the raylib library paths are correctly set in your compiler settings or makefile.
4.  Use the "Run and Debug" feature in Visual Studio Code to build and run the project.


## Project Structure

main.cpp: Initializes the game window and handles the main simulation loop.
simulation.hpp/cpp: Defines the Simulation class that manages the game state and logic.
grid.hpp/cpp: Defines the Grid class responsible for managing the cellular grid.
raylib library: Used for all rendering and window management.

## Controls

Left Mouse Button: Toggle cell state.
Enter: Start the simulation.
Space: Pause the simulation.
F: Increase frames per second.
S: Decrease frames per second.
R: Generate a random initial state.
C: Clear the grid.
Contributing
Feel free to fork this project and submit a pull request if you have suggestions for improvements or new features. You can also open issues for any bugs you encounter or suggestions you have.

## License

This project is open source and available under the MIT License.

## Acknowledgments

- **John Conway**: For the original concept of the Game of Life, which continues to inspire and educate on the fascinating dynamics of cellular automata.
- **raylib team**: For providing an excellent library that simplifies game and multimedia applications development, making it accessible for beginners and experienced developers alike.
- **Nick Koumaris**: Special thanks to Nick Koumaris for his helpful raylib template and instructional video tutorial. His resources greatly facilitated the development of this game, providing essential guidance and an effective starting point.



