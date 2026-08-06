 //Enrolment No:-92500527120
 #include<stdio.h>
          #define MAX 100

          int stack[MAX], top = -1;

          void push(int value);
          int pop();

          void main()
          {
              int base,power,i;
              int result = 1;

              printf("Enter a base number : ");
              scanf("%d", &base);

              printf("Enter a power number : ");
              scanf("%d", &power);

              for(i = 1; i <= power; i++)
              {
                  push(base);
              }

              while(top != -1)
              {
                  result = result * pop();
              }

              printf("\n Power of %d ^ %d - %d ",base,power,result);

          }
          void push(int value)
          {
              top++;

              stack[top]= value;

          }
          int pop()
          {
              return stack[top--];
          }
