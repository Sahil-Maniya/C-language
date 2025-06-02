#include <stdio.h>
int main()
{
  int a, qty, rate, total;
  int *ptr;
  int *ptr1, *ptr2, *ptr3;

  ptr1 = &qty;
  ptr2 = &rate;
  ptr3 = &total;

  printf("\nMENU CARD \nSelect your drink \n1.COFFEE \n2.TEA \n3.COLD COFFEE \n4.MILK SHAKE \n5.STALC\n6.Exit \n");
  printf("\n please enter the number: ");
  scanf("%d", &a);

  switch (a)
  {
  case 1:
    printf("\n Coffee Rate is 5.\n\n Enter the quantity :");
    scanf("%d", &qty);
    rate = 5;
    total = qty * rate;
    printf("\nTotal amount :%d", total);
    break;

  case 2:
    printf("\nTea Rate is 10.\n\n  Enter the quantity :");
    scanf("%d", &qty);
    rate = 10;
    total = qty * rate;
    printf("\nTotal amount :%d", total);
    break;

  case 3:
    printf("\nCold coffee Rate is 15 .\n\n  Enter the quantity :");
    scanf("%d", &qty);
    rate = 15;
    total = qty * rate;
    printf("\nTotal amount :%d", total);
    break;

  case 4:
    printf("\n Milk shake Rate is 20.\n\n Enter the quantity :");
    scanf("%d", &qty);
    rate = 20;
    total = qty * rate;
    printf("\nTotal amount :%d", total);
    break;

  case 5:
    printf("\n Stalc Rate is 25.\n\n Enter the quantity :");
    scanf("%d", &qty);
    rate = 15;
    total = qty * rate;
    printf("\nTotal amount :%d", total);
    break;

  case 6:
    printf("\n\n Thank you!");
    break;

  default:
    printf("\nPlease Enter Valid Number");
    break;
  }

  return 0;
}
