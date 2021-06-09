// Display net amount to be paid

#include <stdio.h>

void main()
{
  int price, qty, amount, discount, net_amount;

      printf("Enter price : ");
      scanf("%d",&price);

      printf("Enter qty   : ");
      scanf("%d",&qty);

      amount = price * qty;
      discount = amount * 10 / 100;
      net_amount = amount - discount;

      printf("Amount          : %5d\n",amount);
      printf("- Discount      : %5d\n",discount);
      printf("Net Amount      : %5d", net_amount);

}
