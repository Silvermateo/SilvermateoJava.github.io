#include <iostream>
#include <string>

using namespace std;

// Funci�n que cuenta el n�mero de palabras en una frase
int contar_palabras(string frase) {
    int palabras = 1;
    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == ' ') {
            palabras++;
        }
    }
    return palabras;
}

// Funci�n que cuenta el n�mero de ocurrencias de una palabra en una frase
int contar_ocurrencias(string frase, string palabra) {
    int ocurrencias = 0;
    size_t pos = frase.find(palabra);
    while (pos != string::npos) {
        ocurrencias++;
        pos = frase.find(palabra, pos + 1);
    }
    return ocurrencias;
}

int main() {
    string frase, palabra;
    int opcion;

    do {
        cout << "   Que deseas hacer?" << endl; // Pregunta al usuario qu� acci�n desea realizar
        cout << "1. Contar palabras en una frase" << endl; // Opci�n 1: contar palabras en una frase
        cout << "2. Contar ocurrencias de una palabra en una frase" << endl; // Opci�n 2: contar ocurrencias de una palabra en una frase
        cout << "3. Salir" << endl; // Opci�n 3: salir del programa
        cin >> opcion; // Lee la opci�n elegida por el usuario

        switch (opcion) {
            case 1:
                cout << "Ingresa la frase: "; // Pide al usuario que ingrese la frase
                cin.ignore();
                getline(cin, frase); // Lee la frase ingresada por el usuario
                cout << "La frase tiene " << contar_palabras(frase) << " palabras." << endl; // Imprime el n�mero de palabras en la frase
                break;
            case 2:
                cout << "Ingresa la frase: "; // Pide al usuario que ingrese la frase
                cin.ignore();
                getline(cin, frase); // Lee la frase ingresada por el usuario
                cout << "Ingresa la palabra: "; // Pide al usuario que ingrese la palabra a buscar
                getline(cin, palabra); // Lee la palabra ingresada por el usuario
                cout << "La palabra \"" << palabra << "\" aparece " << contar_ocurrencias(frase, palabra) << " veces en la frase." << endl; // Imprime el n�mero de ocurrencias de la palabra en la frase
                break;
            case 3:
            	system("cls");
                cout << " Hasta luego!" << endl; // Despedida
                system("PAUSE");
                break;
            default:
                cout << "Opcion invalida. Int�ntalo de nuevo." << endl; // Mensaje de error para opciones inv�lidas
        }
    } while (opcion != 3);

    return 0;
}


