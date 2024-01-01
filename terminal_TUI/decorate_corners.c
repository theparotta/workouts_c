#include <ncurses.h>
#include <string.h>

void print_center(int, char*);

int main() {
  int y, x;
  
  initscr();
  
  // getting the window dimension
  getmaxyx(stdscr, y, x);
  
  // reducing one as we start with 0
  int rows = y - 1;
  int cols = x - 1;
  
  // marking top left
  mvaddch(0, 0, 'x');
  refresh();
  napms(500);
  
  // marking bottom left
  mvaddch(rows, 0, 'x');
  refresh();
  napms(500);

  // marking bottom right
  mvaddch(rows, cols, 'x');
  refresh();
  napms(500);

  // marking top right
  mvaddch(0, cols, 'x');
  refresh();
  napms(500);
  
  // marking center
  mvaddch(rows/2, cols/2, 'X');
  refresh();
  napms(500);
  
  // printing text at the center
  print_center(2, "WELCOME TO WORRLD OF NCURSES");
  print_center(3, "============================");
  print_center(5, "A little man guide to Terminal User Interface");
  
  // to get the position of the cursor
  int xcur, ycur;
  getyx(stdscr, ycur, xcur);
  mvprintw(10, 0, "The cursor is at position row: %d, col: %d", ycur, xcur);
  
  
  getch();  
  endwin();
  return 0;
}



void print_center(int row, char *msg) {
  int y, x;
  int msg_len = strlen(msg);
  
  // getting max dimension of standard screen(terminal window)
  getmaxyx(stdscr, y, x);
  
  int padding = x - msg_len;
  padding /= 2;
  
  mvaddstr(row, padding, msg);  
}
