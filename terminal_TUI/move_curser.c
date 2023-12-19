#include <ncurses.h>

int main() {
  char text1[] = "This is virtual world.\n";
  char text2[] = "Virtual worlds are always dark, like hell.";
  
  initscr();
  
  addstr(text1);
  addstr(text2);
  
  // move the cursor to the specified position
  // move to (y, x) or in other terms move to (row, column)
  move(2, 0);
  addstr("Now I gotta move from this bitch.");
  
  move(3, 0);
  printw("Printing text using formatted output function");
  move(10, 0);
  printw("Reprintting the text1: %s", text1);
  
  // moving and adding text at the same time
  mvaddch(0, 0, '*');
  mvaddch(10, 0, '*');
  mvaddch(10, 10, '*');
  mvaddch(0, 10, '*');
  
  refresh();
  getch();
  
  endwin();
  return 0;
}
