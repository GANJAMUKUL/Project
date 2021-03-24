#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(void)
{
    int choice,i;
    float x,y,result;

    do {
        printf("\nPress 0 to Exit\n");
        printf("\nSelect any Operation\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. x^y\n");
        printf("6. x^(1/y)\n");
        printf("7. x!\n");
        printf("8. logx\n");
        printf("9. sin(x)\n");
        printf("10. cos(x)\n");
        printf("11. tanx(x)\n");
        printf("12. cosec(x)\n");
        printf("13. sec(x)\n");
        printf("14. cot(x)\n");
        printf("Choice:");
        scanf("%d",&choice);

        if(choice==0) exit(0);
        switch(choice) 
        {
            case 1:
            printf("Enter x:");
            scanf("%f",&x);
            printf("Enter y:");
            scanf("%f",&y);
            result=x+y;
            printf("\nResult:%f",result);
            break;

            case 2:
            printf("Enter x:");
            scanf("%f",&x);
            printf("Enter y:");
            scanf("%f",&y);
            result=x-y;
            printf("\nResult:%f",result);
            break;

            case 3:
            printf("Enter x:");
            scanf("%f",&x);
            printf("Enter y:");
            scanf("%f",&y);
            result=x*y;
            printf("\nResult:%f",result);
            break;

            case 4:
            printf("Enter x:");
            scanf("%f",&x);
            printf("Enter x:");
            scanf("%f",&y);
            result=x/y;
            printf("\nResult:%f",result);
            break;

            case 5:
            printf("Enter x:");
            scanf("%f",&x);
            printf("Enter y:");
            scanf("%f",&y);
            result=pow(x,y);
            printf("\nResult:%f",result);
            break;

            case 6:
            printf("Enter x:");
            scanf("%f",&x);
            printf("Enter y:");
            scanf("%f",&y);
            result=pow(x,(1/y));
            printf("\nResult:%f",result);
            break;
            
            case 7:
            printf("Enter x:");
            scanf("%f",&x);
            result=1;
            for(i=1;i<=x;i++)
            {
                result=result*i;
            }
            printf("\nResult:%f",result);
            break;

            case 8:
            printf("Enter x:");
            scanf("%f",&x);
            result=log(x);
            printf("\nResult=%f",result);
            break;

            case 9:
            printf("Enter x:");
            scanf("%f",&x);
            result=sin(x*3.14159/180);
            printf("\nResult:%f",result);
            break;

            case 10:
            printf("Enter x:");
            scanf("%f",&x);
            result=cos(x*3.14159/180);
            printf("\nResult:%f",result);
            break;

            case 11:
            printf("Enter x:");
            scanf("%f",&x);
            result=tan(x*3.14159/180);
            printf("\nResult:%f",result);
            break;

            case 12:
            printf("Enter x:");
            scanf("%f",&x);
            result=1/(sin(x*3.14159/180));
            printf("\nResult:%f",result);
            break;

            case 13:
            printf("Enter x:");
            scanf("%f",&x);
            result=1/(cos(x*3.14159/180));
            printf("\nResult:%f",result);
            break;

            case 14:
            printf("Enter x:");
            scanf("%f",&x);
            result=1/(tan(x*3.14159/180));
            printf("\nResult:%f",result);
            break;

            default:
            printf("\nInvalid Choice");




        }

    }while(choice);
    getch();
    
    return 0;
}