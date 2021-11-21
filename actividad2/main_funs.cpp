#include <iostream>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

// Ejercicio 1
void operaNumeros(){
    float n1, n2, operacion;
    std::cout << "Ingresa dos numeros:\n";
    std::cin >> n1 >> n2;
    char opcion;
    do{
        std::cout << "S: muestra una suma de los dos numeros\n";
        std::cout << "R: muestra una resta de los dos numeros (el primero menos el segundo)\n";
        std::cout << "M: muestra una multiplicacion de los dos numeros\n";
        std::cin >> opcion;
        opcion = std::toupper(opcion);
        if (!(opcion == 'S' || opcion == 'R' || opcion == 'M')) {
            std::cout << "Input invalido\n";
        }
    } while(!(opcion == 'S' || opcion == 'R' || opcion == 'M'));
    switch (opcion)   {
        case 'S':
            operacion = n1 + n2;
            std::cout << n1 << " + " << n2 << " = " << operacion << '\n';
            break;
        case 'R':
            operacion = n1 - n2;
            std::cout << n1 << " - " << n2 << " = " << operacion << '\n';
            break;
        case 'M':
            operacion = n1 * n2;
            std::cout << n1 << " * " << n2 << " = " << operacion << '\n';
            break;
    }
}

// Ejercicio 2
void numeroImpar(){
    int num;
    do{
        std::cout << "Ingresa un numero impar: ";
        std::cin >> num;
    } while(num % 2 == 0);
}

// Ejercicio 3
void sumaPares(){
    int suma = 0;
    for (int i = 0; i <= 100; i+=2){
        suma += i;
    }
    std::cout << "Suma pares entre 0 y 100: " << suma << '\n';
}

// Ejercicio 4
void mediaAritmetica(){
    float cantidad, media = 0, num;
    std::cout << "Ingresa la cantidad de numeros: ";
    std::cin >> cantidad;
    for (int i = 1; i <= cantidad; i++){
        std::cout << "Numero " << i << ": ";
        std::cin >> num;
        media += num;
    }
    std::cout << "Media aritmetica: " << media << '\n';
}

// Ejercicio 5
void numeroMagico(){
    int randNum, userNum, intentos = 0;
    std::srand(time(NULL));
    randNum = std::rand() % 100 + 1;
    do{
        std::cout << "Ingresa un numero: ";
        std::cin >> userNum;
        if (userNum < randNum){
            std::cout << "MAS\n";
        } else if (userNum > randNum){
            std::cout << "MENOS\n";
        }
        intentos++;
    } while (userNum != randNum);
    std::cout << "Acertaste con el valor magico " << randNum << " despues de " << intentos << " intentos.\n";
}

// Ejercicio 6
void conversionCelsiusFarenheit(){
    float celsius, fahrenheit, incremento;
    int num;
    std::cout << "Ingresa el valor inicial en celsius: ";
    std::cin >> celsius;
    std::cout << "Ingresa el numero de conversiones: ";
    std::cin >> num;
    std::cout << "Ingresa el valor de incremento para valores de celsius: ";
    std::cin >> incremento;
    std::cout << "FAHRENHEIT\tCELSIUS\n";
    for(int i = 0; i < num; i++){
        fahrenheit = 9./5. * celsius + 32.;
        std::cout << fahrenheit << '\t' << celsius << '\n';
        celsius += incremento;
    }
}

// Ejercicio 7
void serieAritmetica(float const a, float const d, int const n){
    float suma = 0;
    for (int i = 1; i <= n; i++){
        float termino = a + (i-1)*d;
        std::cout << "Termino " << i << ": " << termino << '\n';
        suma += termino;
    }
    std::cout << "Suma: " << suma << '\n';
}

// Ejercicio 8
void mediasGeometricaArmonica(){
    float mediaGeometrica = 1; // Producto nulo de multiplicación
    // Si multiplicas algo por 1, se queda igual.
    float mediaArmonica = 0, num;
    int n = 0;
    do{
        std::cout << "Ingresa un numero: ";
        std::cin >> num;
        if(num != 0){
            mediaGeometrica *= num;
            // mediaGeometrica = mediaGeometrica * num;
            mediaArmonica += 1/num;
            // mediaArmonica = mediaArmonica + 1/num;
            n++;
        }
    } while(num != 0);
    mediaGeometrica = std::pow(mediaGeometrica, (double)1/n);
    mediaArmonica = n/mediaArmonica;
    std::cout << "La media geometrica es: " << mediaGeometrica << '\n';
    std::cout << "La media armonica es: " << mediaArmonica << '\n';
}
