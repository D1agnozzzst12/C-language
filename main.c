// #include <stdio.h>

// int main() {

//     int num1;
//     int num2;
//     int sum;

//     printf("The first number:\n");
//     scanf("%d\n", &num1);

//     printf("The second number:\n");
//     scanf("%d\n", &num2);

//     sum = num1 + num2;

//     printf("Result: %d\n", sum);

//     printf("Hello\n");
    
//     return 0;
// }

/* 

    00000001 = 1
    00000010 = 2
    00000011 = 3
    00000100 = 4
    00000101 = 


*/ 

// gcc -std=c99 -o outputfile sourcefile.c






// Урок 2  МАССИВЫ ARRAY 


// #include <stdio.h>

// #include <stdbool.h>


// int main() {

//     int arr[] = {5, 7, 4, 43, 45,};

//     arr[0] = 56;
    
//     printf("%d\n", arr[0]);

//     float numbers[3];

//     numbers[0] = 5.4f;
//     numbers[1] = 6.2f;
//     numbers[2] = 7.4f;


//     char word[] = {'I', 'L', 'I', 'S', 'H', 'A', 'N'};
//     char words[] = "Hello World";

//     words[1] = 'J'; 

//     printf("%s\n", words);

//     printf("%c\n", words[6]);


//     // Двумерный массив


//     int array[3][4] = {
//         {4, 5, 6, 3},
//         {7, 8, 9, 4},
//         {6, 78, 231, 43}
//     };

//     array[0][1] = 555;

//     printf("%d\n", array[0][1]);

//     int array_two[] = {1, 2, 3, 4, 5, 6, 7, 8,};

//     array_two[1] = 222;

//     printf("%d\n", array_two[1]);

//     int matrix_array[5][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12},
//         {13, 14, 15}
//     };

//     matrix_array[1][1] = 555;

//     printf("%d\n", matrix_array[1][1]);


//     return 0;
// }






// Урок 4 - Условные операторы


// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int x = 5;

//     if (x == 10) {
//         printf("Yes\n");
//     } else {
//         printf("No\n");
//     };

//     int y = 5;

//     if(y == 10) {
//         printf("Yes\n");
//     } else if(y > 100) {
//         printf("Y is greater 100\n");
//     } else if (y < 5) {
//         printf("Y is less than 5\n");
//     } else {
//         printf("No\n");
//     };


//     int e = 100; 

//     if(e <= 100) {
//         if(e == 100) 
//             printf("E equal 100\n");

//         printf("E is less than 100\n");
//     } else {
//         printf("No\n");
//     };

//      int r = 100;


//     if(r > 100 || r == 100 ) {
//         printf("Yes\n");
//     } else {
//         printf("No\n");
//     }


//     int u = 100;

//     if(u > 55 && u < 150) {
//         printf("Yes\n");
//     } else {
//         printf("No\n");
//     };



//     bool isHasCar = true;

//     if (isHasCar) {
//         printf("Yes\n");
//     } else {
//         printf("No");
//     };


//     bool isHasBike = true;

//     if(!isHasBike) {
//         printf("Dont't have bike");
//     } else {
//         printf("has bike");
//     };

//     return 0;

// }


   
// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int x;

//     printf("The number:");
//     scanf("%d", &x);

//     switch(x) {
//         case 10: 
//         printf("10");
//         break;

//         case 13:
//         printf("13");
//         break;

//         case 15:
//         printf("15");
//         break;

//         default:
//         printf("Error");
        
//     }

//     return 0;
// }








// Урок 5 - Циклы и операторы в них



// #include <stdio.h>
// #include <stdbool.h>
   

// int main() {

//  for(float i = 100; i > 10; i /= 2) {
//         printf("%.2f\n", i);
//     };


    // bool isHasCar = true;
    // int x = 0;
    // while(isHasCar) {
    //     printf("Введите цифру:");
    //     scanf("%d", &x);
    //     if (x == 1) {
    //         isHasCar = false;
    //     }
    // }



    // float y = 1000;

    // while(y > 10) {
    //     printf("%f\n", y);
    //     y /= 2;
    // } 

    // bool isHasCar = false;
    // do {
    //     printf("Yes\n");
    // } while(isHasCar);


    // Операторы
// #include <stdio.h>
// #include <stdbool.h>

// int main(void) {

//     for(int x = 0; x < 5; x++) {
//         // if(x == 3) {
//         //     break;
//     // }
//             if(x % 2 == 1) {
//                 continue;
//             }
//         printf("%d\n", x);
        
//     };


//     return 0;
// }





// Работа цикла на массиве


// #include <stdio.h>
// #include <stdbool.h>


// int main(void) {

//     int arr[] = {5, 67, 0, -2, 6};

//     for(int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     };
//     printf("\n");

//     int min = arr[0];

//     for(int i = 0; i < 5; i++) {
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//         printf("%d", min);
//     }

//     return 0;
// }








// Урок 6 - Функции в языке си


// #include "func.h"

// void sum(int a, int b);

// void string(char arr[]);

// float mult(float a, float b);

// int main() {
//     sum(25, 25);

//     int x = 150, y = 150;
    
//     sum(x, y);

//     string("Iliskhan");
    
//     char array_two[] = {'e', 'a', 't', 'u'};

//     string(array_two); 

//    float res = mult(4.6, 7.6);

//    printf("%.2f\n", res);

//     return 0;
// }


// void sum(int a, int b) {
//     int res = a + b;
//     printf("Sum: %d\n", res);
// } 

// void string(char arr[]) {
//     printf("%s\n", arr);
// }

// float mult(float a, float b) {
//     float res = a * b;
//     printf("Result: %.2f\n", res);

//     return res;
// }









// Урок 7 - Структура данных 

// #include <string.h>
// #include <stdio.h>
// #include <stdbool.h>

// struct Car {
//     int speed;
//     char name[50];
//     float weight;
// };





// int main() {
    
//     struct Car bmw;
//     bmw.speed = 300;
//     strcpy(bmw.name, "BMW M5");
//     bmw.weight = 2500.00;    


//     struct Car audi = {300, "Audi A8", 2700.00};

//     printf("Модель машины: %s\n Скорость машины: %d\n Вес машины: %.2f\n", bmw.name, bmw.speed, bmw.weight);
//     printf("Модель машины: %s\n Скорость машины: %d\n Вес машины: %.2f\n", audi.name, audi.speed, audi.weight);


//     return 0;
// }









// Урок 8 - Указатели в Си


// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>

// struct Abstract {
//     int width, height;
// };

//  void calc(struct Abstract *obj);
// int main() {

//     int num = 0;

//     int * pNum = &num;


//     printf("%p\n", pNum);

//     printf("%d\n", *pNum);

//     printf("%d\n", num);    

//     *pNum = 15;

//     printf("%d\n", num);
//     printf("%p\n", pNum);

    // int array[1000];

    // for(int i = 0; i < 1001; i++) {
    //     array[i] = i;
    // }

    // for(int i = 0; i < 1001; i++) {
    //     printf("%d, ", array[i]);
    // }


//     struct Abstract square = {5, 6};

//     calc(&square);

//     return 0;
// } 

//  void calc(struct Abstract *obj) {
//     int res = obj->width * obj->height;
//     printf("Result: %d", res);
//  }
 









// Урок 9 - Работа с файлами


// #include <stdio.h>
// #include <stdbool.h>


// int main() {
//     char line[255];



//     FILE *file = fopen("test.txt", "r");
    
//     // fprintf(file, "\nHello");
 
//         fgets(line, 255, file);
//         printf("%s", line);
//         fgets(line, 255, file);
//         printf("%s", line);
//         fgets(line, 255, file);
//         printf("%s", line);

//     f    close(file);




// //   
// #include <stdio.h>  
// #include <stdlib.h>  
// #include <time.h>  

// int main() {  
//     int number, guess, attempts = 0;  
    
//     // Seed the random number generator  
//     srand(time(0));  
//     number = rand() % 100 + 1;  // Random number between 1 and 100  

//     printf("Guess the number (between 1 and 100):\n");  

//     do {  
//         printf("Enter your guess: ");  
//         scanf("%d", &guess);  
//         attempts++;  

//         if (guess > number) {  
//             printf("Too high! Try again.\n");  
//         } else if (guess < number) {  
//             printf("Too low! Try again.\n");  
//         } else {  
//             printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);  
//         }  
//     } while (guess != number);  

//     return 0;  
// }  


#include <stdio.h>
#include <stdbool.h>


int main() {

    char name[50];
    printf("Enter your name");
    scanf("%s", &name);

    printf("Oh nice to meet you %s", name);


    return 0;
}

