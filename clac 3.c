#include<stdio.h>
main()
{
    int opcion;
    float num1;
    float num2;
    float resultado;

    do{
            system("cls");




        printf("\t\t--Calculadora--\n");
        printf("1.-Realizar Suma\n2.-Realizar una resta\n3.-Realizar una multiplicacion\n4.-Realizar una Division\n");
        printf("selecciona una opcion:");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingresa el Primer numero:");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:");
            scanf("%f",&num2);
            resultado=num1+num2;
            printf("El resultado de la suma es:%f\n",resultado);
            break;
        case 2:
            printf("Ingresa el Primer numero:");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:");
            scanf("%f",&num2);
            resultado=num1-num2;
            printf("El resultado de la resta es:%f\n",resultado);
            break;
        case 3:
            printf("Ingresa el Primer numero:");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:");
            scanf("%f",&num2);
            resultado=num1*num2;
            printf("El resultado de la multiplicacion es:%f\n",resultado);
            break;
        case 4:
            printf("Ingresa el Primer numero:");
            scanf("%f",&num1);
            printf("Ingresa el segundo numero:");
            scanf("%f",&num2);
            resultado=num1/num2;
            printf("El resultado de la divison es:%f\n",resultado);
            break;
        default:
            printf("opcion no valida\n");
            break;

        case 5:
            printf("gracias por utilizar mi programa \n");

            break;
        }
        system("pause");


        }while(opcion!=5);


    }


