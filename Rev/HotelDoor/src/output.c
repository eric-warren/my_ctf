#include <stdio.h>
#include <string.h>

int check_flag(char *flag)
{
  
  
    if (strlen(flag) != 33) return 0;
    
  
  
flag[31] = flag[31] - 10;
  
  
flag[0] = flag[0] + 3;
  
  
flag[23] = flag[23] + 9;
  
  
if(flag[27] != 'h')
{
    return 0;
}
  
  
flag[3] = flag[3] - 6;
  
  
if(flag[31] != 's')
{
    return 0;
}
  
  
if(flag[5] != 'd')
{
    return 0;
}
  
  
flag[30] = flag[30] - 4;
  
  
flag[32] = flag[32] + 7;
  
  
flag[1] = flag[1] + 3;
  
  
flag[3] = flag[3] - 3;
  
  
if(flag[8] != '_')
{
    return 0;
}
  
  
if(flag[19] != '1')
{
    return 0;
}
  
  
flag[14] = flag[14] + 7;
  
  
flag[10] = flag[10] - 3;
  
  
if(flag[20] != 'y')
{
    return 0;
}
  
  
if(flag[21] != '_')
{
    return 0;
}
  
  
flag[24] = flag[24] + 1;
  
  
flag[11] = flag[11] + 6;
  
  
if(flag[20] != 'y')
{
    return 0;
}
  
  
if(flag[26] != 't')
{
    return 0;
}
  
  
flag[15] = flag[15] - 10;
  
  
flag[26] = flag[26] + 6;
  
  
flag[32] = flag[32] - 6;
  
  
if(flag[7] != 'd')
{
    return 0;
}
  
  
flag[14] = flag[14] + 8;
  
  
if(flag[31] != 's')
{
    return 0;
}
  
  
flag[3] = flag[3] - 1;
  
  
flag[2] = flag[2] - 7;
  
  
flag[8] = flag[8] + 9;
  
  
if(flag[31] != 's')
{
    return 0;
}
  
  
flag[22] = flag[22] + 9;
  
  
if(flag[21] != '_')
{
    return 0;
}
  
  
flag[16] = flag[16] - 6;
  
  
flag[13] = flag[13] - 8;
  
  
if(flag[13] != 'Y')
{
    return 0;
}
  
  
if(flag[1] != 'o')
{
    return 0;
}
  
  
if(flag[2] != 'Z')
{
    return 0;
}
  
  
if(flag[32] != '')
{
    return 0;
}
  
  
flag[0] = flag[0] - 5;
  
  
if(flag[26] != 'z')
{
    return 0;
}
  
  
if(flag[27] != 'h')
{
    return 0;
}
  
  
if(flag[15] != 'j')
{
    return 0;
}
  
  
if(flag[16] != 'o')
{
    return 0;
}
  
  
if(flag[10] != '-')
{
    return 0;
}
  
  
if(flag[4] != '{')
{
    return 0;
}
  
  
flag[19] = flag[19] - 3;
  
  
if(flag[8] != 'h')
{
    return 0;
}
  
  
if(flag[8] != 'h')
{
    return 0;
}
  
  
flag[29] = flag[29] - 6;
  
  
flag[6] = flag[6] - 3;
  
  
flag[27] = flag[27] - 6;
  
  
if(flag[4] != '{')
{
    return 0;
}
  
  
if(flag[21] != '_')
{
    return 0;
}
  
  
flag[23] = flag[23] - 6;
  
  
flag[22] = flag[22] - 4;
  
  
if(flag[25] != '_')
{
    return 0;
}
  
  
if(flag[1] != 'o')
{
    return 0;
}
  
  
if(flag[28] != '1')
{
    return 0;
}
  
  
if(flag[8] != 'h')
{
    return 0;
}
  
  
flag[32] = flag[32] + 5;
  
  
flag[12] = flag[12] + 3;
  
  
flag[27] = flag[27] + 4;
  
  
flag[20] = flag[20] - 1;
  
  
if(flag[2] != 'Z')
{
    return 0;
}
  
  
flag[17] = flag[17] - 9;
  
  
if(flag[27] != 'f')
{
    return 0;
}
  
  
if(flag[23] != '6')
{
    return 0;
}
  
  
flag[19] = flag[19] - 8;
  
  
if(flag[31] != 's')
{
    return 0;
}
  
  
if(flag[10] != '-')
{
    return 0;
}
  
  
flag[0] = flag[0] - 2;
  
  
if(flag[1] != 'o')
{
    return 0;
}
  
  
if(flag[8] != 'h')
{
    return 0;
}
  
  
flag[19] = flag[19] - 3;
  
  
if(flag[24] != 'u')
{
    return 0;
}
  
  
if(flag[4] != '{')
{
    return 0;
}
  
  
if(flag[21] != '_')
{
    return 0;
}
  
  
flag[22] = flag[22] + 3;
  
  
flag[32] = flag[32] - 8;
  
  
if(flag[24] != 'u')
{
    return 0;
}
  
  
flag[14] = flag[14] - 1;
  
  
flag[7] = flag[7] + 9;
  
  
if(flag[4] != '{')
{
    return 0;
}
  
  
flag[12] = flag[12] - 2;
  
  
flag[4] = flag[4] + 8;
  
  
if(flag[25] != '_')
{
    return 0;
}
  
  
flag[1] = flag[1] + 1;
  
  
if(flag[28] != '1')
{
    return 0;
}
  
  
flag[20] = flag[20] - 10;
  
  
flag[28] = flag[28] + 1;
  
  
if(flag[11] != '{')
{
    return 0;
}
  
  
if(flag[29] != 'm')
{
    return 0;
}
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
flag[7] = flag[7] - 6;
  
  
flag[29] = flag[29] + 1;
  
  
flag[5] = flag[5] - 10;
  
  
if(flag[3] != ']')
{
    return 0;
}
  
  
flag[1] = flag[1] - 8;
  
  
if(flag[24] != 'u')
{
    return 0;
}
  
  
if(flag[15] != 'j')
{
    return 0;
}
  
  
if(flag[32] != '')
{
    return 0;
}
  
  
flag[5] = flag[5] - 1;
  
  
flag[27] = flag[27] - 5;
  
  
if(flag[7] != 'g')
{
    return 0;
}
  
  
flag[7] = flag[7] - 6;
  
  
if(flag[28] != '2')
{
    return 0;
}
  
  
flag[8] = flag[8] + 2;
  
  
flag[17] = flag[17] + 8;
  
  
if(flag[11] != '{')
{
    return 0;
}
  
  
if(flag[4] != '')
{
    return 0;
}
  
  
flag[13] = flag[13] - 1;
  
  
if(flag[29] != 'n')
{
    return 0;
}
  
  
if(flag[25] != '_')
{
    return 0;
}
  
  
flag[25] = flag[25] - 8;
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
if(flag[10] != '-')
{
    return 0;
}
  
  
flag[22] = flag[22] - 5;
  
  
flag[3] = flag[3] - 8;
  
  
if(flag[7] != 'a')
{
    return 0;
}
  
  
if(flag[13] != 'X')
{
    return 0;
}
  
  
flag[25] = flag[25] - 10;
  
  
if(flag[17] != '`')
{
    return 0;
}
  
  
flag[27] = flag[27] + 5;
  
  
if(flag[26] != 'z')
{
    return 0;
}
  
  
if(flag[16] != 'o')
{
    return 0;
}
  
  
if(flag[15] != 'j')
{
    return 0;
}
  
  
flag[12] = flag[12] - 3;
  
  
flag[26] = flag[26] - 8;
  
  
flag[17] = flag[17] + 6;
  
  
if(flag[18] != '1')
{
    return 0;
}
  
  
flag[24] = flag[24] + 7;
  
  
flag[21] = flag[21] - 2;
  
  
if(flag[13] != 'X')
{
    return 0;
}
  
  
flag[3] = flag[3] + 3;
  
  
flag[30] = flag[30] - 7;
  
  
flag[2] = flag[2] - 3;
  
  
if(flag[25] != 'M')
{
    return 0;
}
  
  
if(flag[29] != 'n')
{
    return 0;
}
  
  
flag[11] = flag[11] - 4;
  
  
flag[3] = flag[3] - 8;
  
  
if(flag[22] != 'j')
{
    return 0;
}
  
  
if(flag[2] != 'W')
{
    return 0;
}
  
  
if(flag[17] != 'f')
{
    return 0;
}
  
  
if(flag[28] != '2')
{
    return 0;
}
  
  
if(flag[20] != 'n')
{
    return 0;
}
  
  
flag[17] = flag[17] - 3;
  
  
flag[29] = flag[29] - 7;
  
  
if(flag[7] != 'a')
{
    return 0;
}
  
  
if(flag[31] != 's')
{
    return 0;
}
  
  
if(flag[8] != 'j')
{
    return 0;
}
  
  
if(flag[4] != '')
{
    return 0;
}
  
  
flag[24] = flag[24] + 5;
  
  
if(flag[18] != '1')
{
    return 0;
}
  
  
if(flag[14] != 'q')
{
    return 0;
}
  
  
flag[11] = flag[11] + 4;
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
flag[17] = flag[17] - 10;
  
  
flag[29] = flag[29] + 3;
  
  
flag[30] = flag[30] + 8;
  
  
if(flag[30] != '<')
{
    return 0;
}
  
  
if(flag[2] != 'W')
{
    return 0;
}
  
  
if(flag[15] != 'j')
{
    return 0;
}
  
  
flag[13] = flag[13] - 9;
  
  
flag[23] = flag[23] - 7;
  
  
if(flag[18] != '1')
{
    return 0;
}
  
  
flag[16] = flag[16] - 7;
  
  
flag[15] = flag[15] - 10;
  
  
if(flag[7] != 'a')
{
    return 0;
}
  
  
flag[23] = flag[23] + 6;
  
  
if(flag[31] != 's')
{
    return 0;
}
  
  
if(flag[26] != 'r')
{
    return 0;
}
  
  
flag[10] = flag[10] - 7;
  
  
flag[15] = flag[15] + 7;
  
  
flag[10] = flag[10] - 6;
  
  
if(flag[13] != 'O')
{
    return 0;
}
  
  
if(flag[20] != 'n')
{
    return 0;
}
  
  
flag[27] = flag[27] - 9;
  
  
flag[19] = flag[19] + 3;
  
  
flag[29] = flag[29] - 9;
  
  
if(flag[16] != 'h')
{
    return 0;
}
  
  
flag[6] = flag[6] + 1;
  
  
flag[14] = flag[14] - 4;
  
  
if(flag[11] != '{')
{
    return 0;
}
  
  
if(flag[25] != 'M')
{
    return 0;
}
  
  
flag[1] = flag[1] - 5;
  
  
flag[20] = flag[20] + 7;
  
  
if(flag[13] != 'O')
{
    return 0;
}
  
  
flag[2] = flag[2] + 2;
  
  
flag[25] = flag[25] - 5;
  
  
if(flag[6] != '/')
{
    return 0;
}
  
  
if(flag[23] != '5')
{
    return 0;
}
  
  
flag[23] = flag[23] + 10;
  
  
if(flag[2] != 'Y')
{
    return 0;
}
  
  
if(flag[27] != ']')
{
    return 0;
}
  
  
if(flag[23] != '?')
{
    return 0;
}
  
  
if(flag[16] != 'h')
{
    return 0;
}
  
  
flag[27] = flag[27] + 6;
  
  
flag[9] = flag[9] - 2;
  
  
if(flag[9] != 'w')
{
    return 0;
}
  
  
if(flag[9] != 'w')
{
    return 0;
}
  
  
if(flag[1] != 'c')
{
    return 0;
}
  
  
if(flag[11] != '{')
{
    return 0;
}
  
  
if(flag[19] != '&')
{
    return 0;
}
  
  
if(flag[28] != '2')
{
    return 0;
}
  
  
if(flag[9] != 'w')
{
    return 0;
}
  
  
if(flag[2] != 'Y')
{
    return 0;
}
  
  
if(flag[12] != ']')
{
    return 0;
}
  
  
if(flag[25] != 'H')
{
    return 0;
}
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
if(flag[15] != 'g')
{
    return 0;
}
  
  
if(flag[1] != 'c')
{
    return 0;
}
  
  
if(flag[18] != '1')
{
    return 0;
}
  
  
if(flag[29] != 'a')
{
    return 0;
}
  
  
if(flag[32] != '')
{
    return 0;
}
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
if(flag[28] != '2')
{
    return 0;
}
  
  
if(flag[22] != 'j')
{
    return 0;
}
  
  
if(flag[9] != 'w')
{
    return 0;
}
  
  
if(flag[32] != '')
{
    return 0;
}
  
  
if(flag[27] != 'c')
{
    return 0;
}
  
  
if(flag[26] != 'r')
{
    return 0;
}
  
  
if(flag[25] != 'H')
{
    return 0;
}
  
  
if(flag[29] != 'a')
{
    return 0;
}
  
  
if(flag[19] != '&')
{
    return 0;
}
  
  
if(flag[17] != 'Y')
{
    return 0;
}
  
  
if(flag[4] != '')
{
    return 0;
}
  
  
if(flag[19] != '&')
{
    return 0;
}
  
  
if(flag[2] != 'Y')
{
    return 0;
}
  
  
if(flag[8] != 'j')
{
    return 0;
}
  
  
if(flag[16] != 'h')
{
    return 0;
}
  
  
if(flag[2] != 'Y')
{
    return 0;
}
  
  
if(flag[12] != ']')
{
    return 0;
}
  
  
if(flag[32] != '')
{
    return 0;
}
  
  
if(flag[2] != 'Y')
{
    return 0;
}
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
if(flag[29] != 'a')
{
    return 0;
}
  
  
if(flag[2] != 'Y')
{
    return 0;
}
  
  
if(flag[10] != ' ')
{
    return 0;
}
  
  
if(flag[16] != 'h')
{
    return 0;
}
  
  
if(flag[25] != 'H')
{
    return 0;
}
  
  
if(flag[11] != '{')
{
    return 0;
}
  
  
if(flag[9] != 'w')
{
    return 0;
}
  
  
if(flag[16] != 'h')
{
    return 0;
}
  
  
if(flag[3] != 'P')
{
    return 0;
}
  
  
if(flag[22] != 'j')
{
    return 0;
}
  
  
if(flag[32] != '')
{
    return 0;
}
  
  
if(flag[25] != 'H')
{
    return 0;
}
  
  
if(flag[7] != 'a')
{
    return 0;
}
  
  
if(flag[8] != 'j')
{
    return 0;
}
  
  
if(flag[9] != 'w')
{
    return 0;
}
  
  
if(flag[8] != 'j')
{
    return 0;
}
  
  
if(flag[24] != '')
{
    return 0;
}
  
  
if(flag[5] != 'Y')
{
    return 0;
}
  
  
if(flag[30] != '<')
{
    return 0;
}
  
  
if(flag[0] != 'b')
{
    return 0;
}
  
  
if(flag[18] != '1')
{
    return 0;
}
  
  
if(flag[15] != 'g')
{
    return 0;
}
  
  return 1;
}

int main(void){
  printf("Hotel Orlando Door Puzzle v1\n");
  printf("----------------------------\n");
  printf("This puzzle, provided by Hotel Orlando, is in place to give the bellhops enough time to get your luggage to you.\n");
  printf("We have really slow bellhops and so we had to put a serious _time sink_ in front of you.\n");
  printf("Have fun with this puzzle while we get your luggage to you!\n");
  printf("\n\t-Hotel Orlando Bellhop and Stalling Service\n\n");
  char user_input[60];

  puts("Your guess, if you would be so kind: ");
  fscanf(stdin, "%60s", user_input);

  if(check_flag(user_input) == 1)
  {
    puts("I see you found the key, hopefully your bags are in your room by this point.");
  }
  else
  {
    puts("Sadly, that is the incorrect key. If you would like, you could also sit in our lobby and wait.");
  }
}