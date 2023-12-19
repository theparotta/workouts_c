#include <ncurses.h>

int main() {
  initscr();
  
  attron(A_BOLD);
  attron(A_BLINK);
  addstr("Twinkle, Twinkle little star...\n");
  attroff(A_BLINK);
  
  addstr("Up above the world so high,");
  addstr("Like a dimond in the sky.\n");
  
  attrset(A_NORMAL);
  addstr("This is a little rhyms");
  refresh();
  
  getch();
  endwin();
  return 0;
}
