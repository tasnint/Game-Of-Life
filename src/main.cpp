#include <raylib.h>
#include <iostream>
#include "simulation.hpp"


int main()
{
    Color GREY = {101, 67, 33, 255};
    const int WINDOW_WIDTH = 900;
    const int WINDOW_HEIGHT = 1000;
    const int CELL_SIZE = 4;
    int FPS = 12;


    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Conway's Game of Life Recreation");
    SetTargetFPS(FPS);
    Simulation simulation{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE};

    



    //Simulation Loop
    while(WindowShouldClose() == false)
    {
        //Event Handling

        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {
            Vector2 mousePosition = GetMousePosition();
            int row = mousePosition.y / CELL_SIZE;
            int column = mousePosition.x / CELL_SIZE;
            simulation.ToggleCell(row, column);
        }

        if(IsKeyPressed(KEY_ENTER))
        {
            simulation.Start();
            SetWindowTitle("Game is running...");
        }

        else if (IsKeyPressed(KEY_SPACE))
        {
            simulation.Stop();
            SetWindowTitle("Game is stopped :(");
        }

        else if (IsKeyPressed(KEY_F))
        {
            FPS += 2;
            SetTargetFPS(FPS);
        }

        else if (IsKeyPressed(KEY_S))
        {
            if(FPS > 5) {
                FPS -= 2;
                SetTargetFPS(FPS);
            }      
        }

        else if(IsKeyPressed(KEY_R))
        {
            simulation.CreateRandomState();
        }

        else if(IsKeyPressed(KEY_C))
        {
            simulation.ClearGrid();
        }





        //Update State

        simulation.Update();

        //Drawing

        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        EndDrawing();
        

    }
    CloseWindow();
}