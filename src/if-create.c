#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  char *cmd[5];
  cmd[0] = "/sbin/ifconfig";
  cmd[1] = argv[1];
  cmd[2] = "create";
  cmd[3] = "up";
  cmd[4] = NULL;
  printf("Executing %s - %u\n",cmd[1], argc);
  execvp(cmd[0],cmd);
  return 0;
}
