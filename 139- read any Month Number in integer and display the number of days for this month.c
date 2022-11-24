#include <stdio.h>
void main(){
   int month_number;
   char month_name[15];
   printf("RA2211042010038\n");
   printf("enter a month number");
   scanf("%d",&month_number);
   switch(month_number)
   {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("month has 31 days\n");
	       break;
	case 2:
	       printf("the 2nd month is february and has 28 days but 29 on leap year\n");
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("month has 30 day\n");
	       break;
default:
	       printf("invalid Month number");
	       break;
      }
}
