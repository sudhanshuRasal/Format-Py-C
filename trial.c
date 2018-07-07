#include <stdio.h>
#include <format.h>
 void main() {
   boldOn();
   setColor(FG_GREEN);
   printf("kaustubh@k:" FG_BLUE "~/kaustubh/" ANSI_DEFAULT "$\n ");
   reset();
 }
