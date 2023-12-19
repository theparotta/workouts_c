#include <ncurses.h>

int main() {
  char ch;
  char name[30];
  
  initscr();
  
  addstr("Enter some random text inputs\n");
  addstr("Press ~ to quit.\n");
  
  while ((ch = getch()) != '~');
  
  move(5, 0);
  addstr("Enter your name: ");
  refresh();
  getnstr(name, 5);
  
  printw("So, Your name is %s\n", name);
  refresh();  
  
  getch();  
  endwin();  
  return 0;
}
