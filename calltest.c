#include <stdio.h>
#include <pwd.h>

int main()
{
  static struct passwd *pw = (struct passwd *) 0;
  pw = getpwuid((uid_t)0);
  printf("foo");
  return 0;
}
