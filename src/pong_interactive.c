#include <ncurses.h>
#include <unistd.h>

void draw_field(int b_x, int b_y, int p1, int p2, int s1, int s2) {
  clear();
  mvprintw(0, 30, "Player 1: %d | Player 2: %d", s1, s2);
  for (int y = 0; y < 25; y++) {
    for (int x = 0; x < 80; x++) {
      if (y == 0 || y == 24)
        mvaddch(y + 1, x, '-');
      else if (x == 0 || x == 79)
        mvaddch(y + 1, x, '|');
      else if (x == 2 && (y == p1 || y == p1 - 1 || y == p1 + 1))
        mvaddch(y + 1, x, 'H');
      else if (x == 77 && (y == p2 || y == p2 - 1 || y == p2 + 1))
        mvaddch(y + 1, x, 'H');
      else if (x == b_x && y == b_y)
        mvaddch(y + 1, x, 'O');
    }
  }
  refresh();
}

int main() {
  initscr();
  noecho();
  curs_set(0);
  nodelay(stdscr, TRUE);
  int b_x = 40, b_y = 12, b_dx = 1, b_dy = 1, p1 = 12, p2 = 12, s1 = 0, s2 = 0;

  while (s1 < 21 && s2 < 21) {
    draw_field(b_x, b_y, p1, p2, s1, s2);
    int ch = getch();
    if ((ch == 'a' || ch == 'A') && p1 > 2)
      p1--;
    if ((ch == 'z' || ch == 'Z') && p1 < 22)
      p1++;
    if ((ch == 'k' || ch == 'K') && p2 > 2)
      p2--;
    if ((ch == 'm' || ch == 'M') && p2 < 22)
      p2++;
    if (ch == 'q')
      break;

    b_x += b_dx;
    b_y += b_dy;
    if (b_y <= 1 || b_y >= 23)
      b_dy *= -1;
    if ((b_x == 3 && (b_y == p1 || b_y == p1 - 1 || b_y == p1 + 1)) ||
        (b_x == 76 && (b_y == p2 || b_y == p2 - 1 || b_y == p2 + 1)))
      b_dx *= -1;
    if (b_x <= 0) {
      s2++;
      b_x = 40;
      b_y = 12;
    }
    if (b_x >= 79) {
      s1++;
      b_x = 40;
      b_y = 12;
    }

    usleep(100000); // O'yin tezligini ushlab turadi (0.1 soniya)
  }
  endwin();
  if (s1 == 21 || s2 == 21)
    printf("G'alaba! Player %d yutdi!\n", (s1 == 21) ? 1 : 2);
  return 0;
}
