// I WANT TO PLAY WITH YOU
//         YOUR FRIEND, AI
#include <stdio.h>

int main() {
  int ball_x = 40, ball_y = 12, ball_dx = 1, ball_dy = 1;
  int p1_y = 12, p2_y = 12;
  int score1 = 0, score2 = 0;
  char input;

  while (score1 < 21 && score2 < 21) {
    // Ekranni tozalash
    printf("\033[H\033[J");
    printf("         Player 1: %d | Player 2: %d\n", score1, score2);

    // Maydonni chizish (80x25)
    for (int y = 0; y < 25; y++) {
      for (int x = 0; x < 80; x++) {
        if (y == 0 || y == 24)
          printf("-");
        else if (x == 0 || x == 79)
          printf("|");
        else if (x == 2 && (y == p1_y || y == p1_y - 1 || y == p1_y + 1))
          printf("H");
        else if (x == 77 && (y == p2_y || y == p2_y - 1 || y == p2_y + 1))
          printf("H");
        else if (x == ball_x && y == ball_y)
          printf("O");
        else
          printf(" ");
      }
      printf("\n");
    }

    // Kiritishni qabul qilish
    if (scanf(" %c", &input) != 1)
      continue;

    // Raketka harakati
    if ((input == 'a' || input == 'A') && p1_y > 2)
      p1_y--;
    if ((input == 'z' || input == 'Z') && p1_y < 22)
      p1_y++;
    if ((input == 'k' || input == 'K') && p2_y > 2)
      p2_y--;
    if ((input == 'm' || input == 'M') && p2_y < 22)
      p2_y++;

    // To'p harakati va devorga urilish
    ball_x += ball_dx;
    ball_y += ball_dy;
    if (ball_y <= 1 || ball_y >= 23)
      ball_dy *= -1;

    // Raketkaga urilish
    if (ball_x == 3 &&
        (ball_y == p1_y || ball_y == p1_y - 1 || ball_y == p1_y + 1))
      ball_dx *= -1;
    if (ball_x == 76 &&
        (ball_y == p2_y || ball_y == p2_y - 1 || ball_y == p2_y + 1))
      ball_dx *= -1;

    // Gol urish
    if (ball_x <= 0) {
      score2++;
      ball_x = 40;
      ball_y = 12;
    }
    if (ball_x >= 79) {
      score1++;
      ball_x = 40;
      ball_y = 12;
    }
  }
  printf("Game Over! Player %d wins!\n", (score1 == 21) ? 1 : 2);
  return 0;
}
