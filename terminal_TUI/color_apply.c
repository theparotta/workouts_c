#include <ncurses.h>

int main() {
  initscr();
  start_color();
  
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  init_pair(2, COLOR_YELLOW, COLOR_BLUE);
  init_pair(3, COLOR_MAGENTA, COLOR_WHITE);
  init_pair(4, COLOR_BLUE, COLOR_BLACK);
  
  attrset(COLOR_PAIR(1));
  addstr("Hello welcome to colorful terminal\n");
  
  attrset(COLOR_PAIR(2));
  addstr("Now you are seeing another color pair\n");
  
  attrset(COLOR_PAIR(1) | A_BOLD);
  addstr("You are seeing the first color with BOLD set\n");
  
  attrset(COLOR_PAIR(2) | A_BOLD);
  addstr("This is the second color with bold set\n");
  
  attrset(COLOR_PAIR(3));
  addstr("This is Magenta color\n");
  
  attron(A_BOLD);
  addstr("This is Magenta color with BOLD set\n");  
  
  // appling color to entire screen
  bkgd(COLOR_PAIR(2));
  addstr("All the text added now will be in blue color");
  refresh();
  getch();
  
  // cahnging the background color
  bkgd(COLOR_PAIR(3));
  refresh();
  getch();
  
  // changing the background color
  bkgd(COLOR_PAIR(1));
  refresh();
  getch();
  
  endwin();  
  return 0;
}
