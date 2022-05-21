/*
 ============================================================================
 Name        : vektor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : 12test.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */




#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{

char z;// переменная отвечающая за продолжение или оконачание работы программы
do {//цикл необходимый для того чтобы продолжать работу с программой
 setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
    printf("\n в каком калькуляторе вы хотите продолжить работу в линейном(l) или векторном(v)");
    char regime;// переменная отвечающая за режим работы калькулятора
    scanf(" %c",&regime);
    switch(regime)
    {	case 'l': //линейный режим работы калькулятора
    {
    printf("введите одну из операций:(+)(-)(*)(/)(!)(^)");//правила использования программы
	int a,b;//переменные, которые будут отвечать за числа, с которыми будут проводится математические операции
	float res;// переменная, являющаяся результатом операции
    char c;// переменая отвечающая за выбор операции
    scanf(" %c",&c);
    switch(c)
         {
         case '+':{// сложение
                 printf ("\n введите 2 числа");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = a + b;
	             printf("%f",res);
	             printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
	             scanf(" %c",&z);
	             break;}
         case '-':{//вычитание
                 printf ("\n введите 2 числа");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = a - b;
	             printf("%f",res);
	             printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
	             scanf(" %c",&z);
	             break;}
         case '*':{//умножение
	             printf ("\n введите 2 числа");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = a * b;
	             printf("%f",res);
	             printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
	             scanf(" %c",&z);
 	             break;}
        case '/':{ //деление
                 printf ("\n введите 2 числа");
                 scanf("%i",&a);
	             scanf("%i",&b);
              	 res = a / b;
            	 printf("%f",res);
            	 printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
            	 scanf(" %c",&z);
                 break;}
        case '!':{//факториал
                 printf ("\n введите число");
	             scanf("%i",&a);
                 res = 1;
                 a = a + 1;
                 for (int i=1;i<a;i++)
	             res= res * i;
                 printf("%f",res);
                 printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
                 scanf(" %c",&z);
                 break;}
       case '^':{//возведение в степень
                 printf ("\n введите 2 числа, первое число будет возводится в степень, равную второму числу");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = 1;
                 for( int i=0;i<b;i++)
               	 res= a * res;
                 printf("%f",res);
                 printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
                 scanf(" %c",&z);
                 break;}
       default:{// если вводят другой символ
           printf("\n Мы вас не поняли");
           scanf(" %c",&z);}



} break;
    }
    case 'v': //векторный режим работы калькулятора
    {
    	printf ("\n выберите операцию: (+)(-)(s)");
    	char oper;// переменная отвечающая за выбор операции
    	int rank;// переменная отвечающая за размерность вектора
    	 scanf(" %c",&oper);
    	 switch(oper){
    	 case'+':{
    		 printf ("\n введите размернорсть вектора");
    		 scanf("%i",&rank);
    		 float *firstvector;
    		 firstvector = malloc(rank * sizeof(float));//создание массива под первый вектор
    		 for (int i = 0; i<rank ; i++)
    		 {
    			 printf ("\n введите элемент номер");
                 printf("%i",i);
    		     scanf("%f",&firstvector[i]);
    		 }//цикл по заполнению первого масива(вектора)
    		 printf ("\n ваш первый вектор");
    		 for (int i = 0; i<rank; i++)
    		     		 {
    			         printf ("\t");
    		     		 printf("%f",firstvector[i]);
    		     		 }
    		 float *secondvector;
    		     		 secondvector = malloc(rank * sizeof(float));//создание массива под второй вектор
    		     		 for (int i = 0; i<rank ; i++)
    		     		 {//заполнение массива под 2 вектор
    		     			 printf ("\n введите элемент номер");
    		                  printf("%i",i);
    		     		     scanf("%f",&secondvector[i]);
    		     		 }
    		     		printf ("\n ваш второй вектор");
    		     		for (int i = 0; i<rank; i++)
    		     		    	 {//заполнение массива под 2 вектор
    		     		         printf ("\t");
    		     		         printf("%f",secondvector[i]);
    		     		         }
    		   float *thirdvector;
    		          thirdvector = malloc(rank * sizeof(float));//создание массива под резулитирующий  вектор
    		          for (int k = 0; k<rank;k++ )
    		          {
    		        	thirdvector[k]= firstvector[k] + secondvector[k]  ; //заполнения массива 3 вектора путем сложения итых элементов 1 и 2 вектора

    		          }
    		          printf ("\n ваш результат");
    		          for (int i = 0; i<rank; i++)//выведения 3 вектора
    		          {
    		          printf ("\t");
    		          printf("%f",thirdvector[i]);
    		          }



             break;
    	 }
    	 case'-':{
    		 printf ("\n введите размернорсть вектора");
    		     		 scanf("%i",&rank);
    		     		 float *firstvector;
    		     		 firstvector = malloc(rank * sizeof(float));//создание массива под первый вектор
    		     		 for (int i = 0; i<rank ; i++)
    		     		 {
    		     			 printf ("\n введите элемент номер");
    		                  printf("%i",i);
    		     		     scanf("%f",&firstvector[i]);
    		     		 }//цикл по заполнению первого масива(вектора)
    		     		 printf ("\n ваш первый вектор");
    		     		 for (int i = 0; i<rank; i++)
    		     		     		 {
    		     			         printf ("\t");
    		     		     		 printf("%f",firstvector[i]);
    		     		     		 }
    		     		 float *secondvector;
    		     		     		 secondvector = malloc(rank * sizeof(float));//создание массива под второй вектор
    		     		     		 for (int i = 0; i<rank ; i++)
    		     		     		 {//заполнение массива под 2 вектор
    		     		     			 printf ("\n введите элемент номер");
    		     		                  printf("%i",i);
    		     		     		     scanf("%f",&secondvector[i]);
    		     		     		 }
    		     		     		printf ("\n ваш второй вектор");
    		     		     		for (int i = 0; i<rank; i++)
    		     		     		    	 {//заполнение массива под 2 вектор
    		     		     		         printf ("\t");
    		     		     		         printf("%f",secondvector[i]);
    		     		     		         }
    		     		   float *thirdvector;
    		     		          thirdvector = malloc(rank * sizeof(float));//создание массива под резулитирующий  вектор
    		     		          for (int k = 0; k<rank;k++ )
    		     		          {
    		     		        	thirdvector[k]= firstvector[k] - secondvector[k]  ; //заполнения массива 3 вектора путем вычитания итых элементов 1 и 2 вектора

    		     		          }
    		     		          printf ("\n ваш результат");
    		     		          for (int i = 0; i<rank; i++)//выведения 3 вектора
    		     		          {
    		     		          printf ("\t");
    		     		          printf("%f",thirdvector[i]);
    		     		          }

    	             break;
    	    	 }
    	 case's':{//скалярное произведение
    		 printf ("\n введите размернорсть вектора");
    		    		     		 scanf("%i",&rank);
    		    		     		 float *firstvector;
    		    		     		 firstvector = malloc(rank * sizeof(float));//создание массива под первый вектор
    		    		     		 for (int i = 0; i<rank ; i++)
    		    		     		 {
    		    		     			 printf ("\n введите элемент номер");
    		    		                  printf("%i",i);
    		    		     		     scanf("%f",&firstvector[i]);
    		    		     		 }//цикл по заполнению первого масива(вектора)
    		    		     		 printf ("\n ваш первый вектор");
    		    		     		 for (int i = 0; i<rank; i++)
    		    		     		     		 {
    		    		     			         printf ("\t");
    		    		     		     		 printf("%f",firstvector[i]);
    		    		     		     		 }
    		    		     		 float *secondvector;
    		    		     		     		 secondvector = malloc(rank * sizeof(float));//создание массива под второй вектор
    		    		     		     		 for (int i = 0; i<rank ; i++)
    		    		     		     		 {//заполнение массива под 2 вектор
    		    		     		     			 printf ("\n введите элемент номер");
    		    		     		                  printf("%i",i);
    		    		     		     		     scanf("%f",&secondvector[i]);
    		    		     		     		 }
    		    		     		     		printf ("\n ваш второй вектор");
    		    		     		     		for (int i = 0; i<rank; i++)
    		    		     		     		    	 {//заполнение массива под 2 вектор
    		    		     		     		         printf ("\t");
    		    		     		     		         printf("%f",secondvector[i]);
    		    		     		     		         }
    		    		     		   float *thirdvector;
    		    		     		          thirdvector = malloc(rank * sizeof(float));//создание массива под резулитирующий  вектор
    		    		     		          for (int k = 0; k<rank;k++ )
    		    		     		          {
    		    		     		        	thirdvector[k]= firstvector[k] * secondvector[k]  ; //заполнения массива 3 вектора путем перемножения итых элементов 1 и 2 вектора

    		    		     		          }
    		    		     		          printf ("\n ваш результат");
    		    		     		          for (int i = 0; i<rank; i++)//выведения 3 вектора
    		    		     		          {
    		    		     		          printf ("\t");
    		    		     		          printf("%f",thirdvector[i]);
    		    		     		          }

    	             break;
    	    	 }

    	 }
    	printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
    	                 scanf(" %c",&z);
		break;
    }
    default:{// если вводят другой символ
               printf("\n Мы вас не поняли");
               printf ("\n если вы хотите продолжить введите (o), если вы хотите закончить работу программы (n)");
                                scanf(" %c",&z);
               break;}
    }

}// часть программы отвечающая за завершение или продолжение программы
while(z=='o');
if(z=='n')
	printf("\n Досвидания");
else
	printf("\n Мы вас не поняли");
    return 0;
}

