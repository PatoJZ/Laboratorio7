#include <iostream>
#include <string>
#include <cstring>
#include <list>

using namespace std;

struct lista{
    int data;
    lista *next;    
};
void getintegerinformaction(){
    int number;
    string string;
    cout << "coloca un numero<< ";
    cin >> number;
    getchar();
    cout << " coloca una palabra ";
    getline(cin,string);
    cout << "number: " << number << endl;
    cout << "string: " << string << endl;
}
void getAverageGrades(){
    int grades;
    int numberofgrades;
    int i;
    int promedio = 0;
    cout << "coloca la cantidad de notas<< ";
    cin >> numberofgrades;
    for (i = 0; i < grades; i++)
    {
        cout << "coloca las notas<< ";
        cin >> grades;
        promedio += grades;
    }
    promedio = promedio/numberofgrades;

    cout << "el promedio es" << grades << endl;

}
void returnstringlenght(){
    string str;
    getchar();
    cout<< "coloca una palabra ";
    getline(cin,str);
    cout<< "la longitd es "<< str.length() << endl;
}
void aritmeticOperations(){
    list<int> numeros;
    int n;
    cout << "Ingrese el número de elementos: ";
    cin >> n;   
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Ingrese el elemento " << i+1 << ": ";
        cin >> num;
        numeros.push_back(num);
    }
    int suma = 0;
    int producto = 1;
    double promedio = 0;       
    for (int num : numeros) {
      suma += num;
      producto *= num;
    }

    promedio = (double) suma / numeros.size();

    cout << "La suma es: " << suma << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El promedio es: " << promedio << endl;
}
int Factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
bool Palindromo(string palabra) {
    // Eliminar espacios y convertir todo a minúsculas
    string palabraLimpia = "";
    for (int i = 0; i < palabra.length(); i++) {
        if (isalpha(palabra[i])) {
            palabraLimpia += tolower(palabra[i]);
        }
    }

    // Comprobar si la palabra es un palíndromo
    int i = 0;
    int j = palabraLimpia.length() - 1;
    while (i < j) {
        if (palabraLimpia[i] != palabraLimpia[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    //ejercicio1
    getintegerinformaction();
    //ejercicio2
    getAverageGrades();
    //ejercicio3
    returnstringlenght();
    //ejercicio4
    aritmeticOperations();
    //ejericicio5
    int NumFactorial;
    cout << "Ingrese un número entero: ";
    cin >> NumFactorial;
    cout << "El factorial de " << NumFactorial << " es " << Factorial(NumFactorial) << endl;
    //ejercicio6
    int numFibonacci;
    cout << "Introduzca el número de términos de la secuencia de Fibonacci a calcular: ";
    cin >> numFibonacci;
    
    cout << "La secuencia de Fibonacci con " << numFibonacci << " términos es: ";
    for (int i = 0; i < numFibonacci; i++) {
        cout << fibonacci(i) << " ";
    }
    //ejercicio 7
    string palabra;
    cout << "Ingrese una palabra u oración: ";
    getline(cin, palabra);

    if (Palindromo(palabra)) {
        cout << palabra << " es un palíndromo." << endl;
    } else {
        cout << palabra << " no es un palíndromo." << endl;
    }



    return 0;
}