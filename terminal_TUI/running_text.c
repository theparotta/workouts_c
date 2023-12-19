#include <ncurses.h>

int main() {
  char text[] = "Welcome to Terminal GUI !!!";
  char *t;
  
  t = text;
  
  /* initializes stdscr and curscr */
  initscr();
  
  while (*t) {
    // adding each character one by one at a time to stdscr
    addch(*t);
    
    // updating the contents to curscr
    refresh();
    
    // delay a bit to see the output one after another
    napms(100);
    
    t++;
  }
  
  // pause every thing 
  getch();
  
  // finally shutdown NCurses
  endwin(); 
  
  return(0);
}
