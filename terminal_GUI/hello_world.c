#include <ncurses.h>
/* this header automaticlly includes stdio.h, unctrl.h, stdarg.h, stddef.h */
/* also define TRUE, FALSE, ERR */

int main () {
  /* initializes stdscr and curscr screen */
  initscr();  
  
  /* writes date to stdscr */
  addstr("Hello to NCurses !!!");
  
  /* wnoutrefresh() - updates the virtual screen with the new data */
  /* doupdate() - immediatly write the changes to curscr */
  refresh();
  
  /* pause everything, waiting for user input */
  getch();
  
  /* properly closes ncurses */
  endwin();  
  return 0;
}
