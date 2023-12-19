#include <ncurses.h>
#include <stdlib.h>    // included for using exit()

void emergency_exit(char*);

int main() {
  
  initscr();
  
  // check if the terminal support colours
  if ( !has_colors() )
    emergency_exit("Terminal is ColourBlind");
  
  // initializing the NCurses color abilities
  if (start_color() != OK)
    emergency_exit("Error in initializing color functions");
    
  // check if terminal support to create custom colors using RBG values
  if (!can_change_color()) {
    addstr("Terminal don't have capability to define custom color\n");
    refresh();
  }
  
  // if we are here, colors are initialized properly
  printw("No of colors supported: %d\n", COLORS);
  printw("No of color pairs supported: %d\n", COLOR_PAIRS);
  refresh();
  
  getch();
  endwin();  
  return 0;
}


void emergency_exit(char *msg) {
  endwin();
  puts(msg);
  exit(1);
}
