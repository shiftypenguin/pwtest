#include <stdio.h>
#include <pwd.h>

int main()
{
  static struct passwd *pw = (struct passwd *) 0;
  pw = getpwuid((uid_t)0);
  printf("%s", pw->pw_name);
  return 0;
}
