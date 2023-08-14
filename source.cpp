#include <iostream>

#include "header/Renderer.h"

// Define our static variables
std::atomic<bool> ConsoleEngine::m_bAtomActive(false);
std::condition_variable ConsoleEngine::m_cvGameFinished;
std::mutex ConsoleEngine::m_muxGame;

int main()
{
    Renderer app;
    if (app.ConstructConsole(256, 256, 4, 4))
		app.Start();

    return 0;
}