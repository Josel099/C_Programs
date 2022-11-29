#include<stdio.h>
int main()
{

    int choice;
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("sunday");
        break;
     case 2:
        printf("monday");
        break;
     case 3:
         printf("tuesday");
         break;
      case 4:
          printf("wedesday");
          break;
       case 5:
           printf("thurhsday");
           break;
        case 6:
            printf("friday");
            break;
         case 7:
             printf("saturday");
             break;
        default:
             printf("enter a valid number");
             break;
    }
}

