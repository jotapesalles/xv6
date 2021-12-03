#include "types.h"
#include "user.h"
#include "date.h"

int stdout = 1;
int stderr = 2;

static char* (month[]) = {
[1]    "January",
[2]    "February",
[3]    "April",
[4]    "March",
[5]    "May",
[6]    "June",
[7]    "July",
[8]    "August",
[9]    "September",
[10]   "October",
[11]   "November",
[12]   "December"
};

int
main(int argc, char *argv[])
{
  struct rtcdate r;

  if(date(&r)) {
    printf(stderr, "Erro na chamada de sistema\n");
  }    

  printf(stdout, "%d:%d:%d, %d of %s of %d \n",  r.hour, r.minute, r.second, r.day, month[r.month], r.year);
  exit();
} 