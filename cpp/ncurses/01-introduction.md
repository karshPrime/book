# Introduction ncurses
ncurses is a library that allows creation of TUI programs on C++. It also supports other languages such as python.

## Basic Structure
```cpp
#include <ncurses.h>

int main(int argc, char ** argv) {
    // initialize the screen
    // clears the screen and sets up memory 
    initscr();

    //prints a string(const char *) to the window
    printw("Hello World!");

    // refreshes the screen to match whats in the memory
    refresh();

    // takes user input and store it as int (always)
    int user_input = getch();

    printw("%d", user_input);

    // used to prevent the program from closing until the user inputs somethign
    getch(); 

    // deallocate the memory and end ncurses
    endwin();
}
```


## Cursor
It starts from (0,0) by default.

```cpp
move(y, x); // moves the cursor to the specified location
```
ncurses uses (y, x) syntax rather than (x, y).
Y is number of lines and X is number of characters.

Printing data at specified location:
```cpp
mvprintw(y, x, "content");
```


## Clear screen
to clear the whole screen at any point, use
```cpp
clear();
```


## Compile
```bash
g++ -lncurses file.cpp -o executable
```