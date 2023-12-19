#include <ncurses.h>

int main() {
  int y, x;
  
  initscr();
  
  // get the stdscr window size
  getmaxyx(stdscr, y, x);
  
  
  // LINES, COLS are constants defined in NCurses 
  // have the dimension of standard screen (stdscr)  
  printw("Window size(from getmaxyz()): %d, columns: %d\n", y, x);
  printw("Window size(from constants) rows: %d, columns: %d\n", LINES, COLS);
  refresh();
  
  
  getch();
  endwin();
  return 0;
}
