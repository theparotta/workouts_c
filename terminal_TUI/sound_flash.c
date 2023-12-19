#include <ncurses.h>

int main() {
  initscr();
  
  addstr("Now flashing the screen...\n");
  flash();
  refresh();
  getch();
  
  addstr("Now making a beep sound...\n");
  beep();
  refresh();
  getch();
  
  endwin();
  return 0;
}
