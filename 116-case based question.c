/* class of n students take exam on m subjects.program to read the marks and compute thier total marks*/
#include<stdio.h>
void main() {
  int n,m,i,j;
  int marks,roll_number,total;
  printf("RA2211042010038\n");
  printf("RA2211042010038\n");
  printf("enter number of students and subjects");
  scanf("%d%d",&n,&m);
  for(i=0;i<=n;i++) {
      printf("enter the roll_number");
      scanf("%d",&roll_number);
      total=0;
      for(j=0;j<=m;j++); {
          printf("enter the marks%d:",m);
          scanf("%d",&marks);
          total=total+marks;
  }
  printf("total marks=%d",total);
  }
}
