#include <iostream>
#include <math.h>

void PrintAddition(int number_1, int number_2);
void PrintSubtraction(int number_1, int number_2);
void PrintMultiplication(int number_1, int number_2);
void PrintDivision(int number_1, int number_2);
void PrintExponentiation (int number_1, int number_2);
int AddTwoNumbers(int number_1, int number_2);
int SubtractTwoNumbers(int number_1, int number_2);
int MultiplyTwoNumbers(int number_1, int number_2);
double DivideTwoNumbers(int number_1, int number_2);
double ExponentiateTwoNumbers(int number_1, int number_2);
void ListOperations();
void CalculateResult(char option, int number_1, int number_2);


int main() {
  
  // 1) Egy változó deklarálása a felhasználó által kiválasztott művelettípus lementéséhez.
  char option;
   
  // 2) Műveletek kilistázása a konzolra.
  do {
    ListOperations();
    // 3) A művelet típusának bekérése a felhasználótól.
    std::cin >> option;
  
  // 4) Helytelen bemenet ellenőrzése
    if (option == 'x' || option == 'X') {std::cout << "Köszönjük, hogy használta programunkat.Viszontlátásra! " << std::endl;
    continue;
    }
      else if (option!= 'a' && option != 'b' && option != 'c' && option != 'd' && option != 'e') {std::cerr << "Rossz karaktert adtál   meg, ezért a program leáll." << std::endl;
  //Felhasználó értesítése, kiléptetése
      return 1;
      }
  
  
    // Számok bekérése a felhaszlálótól
  int number_1;
  int number_2;
  
  std::cout << "Add meg az első számot: ";
  std::cin >> number_1;

  std::cout << "Add meg a második számot: ";
  std::cin >> number_2;

  CalculateResult(option, number_1, number_2);
    
  }while (option != 'x' && option != 'X');
    // 5) A felhasználó által kiválasztott művelet végrehajtása az alábbiakból.
  /*
    a) Összeadás
    b) Kivonás
    c) Szorzás
    d) Osztás
  */  
  
  // 6) Helytelen bemenet esetén a program kiléptetése.
}
// 5) A felhasználó által kiválasztott művelet végrehajtása az alábbiakból.
  /*
    a) Összeadás
    b) Kivonás
    c) Szorzás
    d) Osztás
  */
// összeadás kinyomtatása
void PrintAddition(int number_1, int number_2) {
  std::cout << number_1 << " + " << number_2 << " = " << AddTwoNumbers(number_1, number_2) << std::endl;
}

// kivonás kinyomtatása
void PrintSubtraction(int number_1, int number_2) {
  std::cout << number_1 << " - " << number_2 << " = " << SubtractTwoNumbers(number_1, number_2) << std::endl;
}

// szorzás kinyomtatása
void PrintMultiplication(int number_1, int number_2) {
  std::cout << number_1 << " * " << number_2 << " = " << MultiplyTwoNumbers(number_1, number_2) << std::endl;
}

// osztás kinyomtatása
void PrintDivision(int number_1, int number_2) {
  std::cout << number_1 << " / " << number_2 << " = " << DivideTwoNumbers(number_1, number_2) << std::endl;
}
// hatványozás kinyomtatása
void PrintExponentiation(int number_1, int number_2) {
  std::cout << number_1 << " ^ " << number_2 << " = " << ExponentiateTwoNumbers(number_1, number_2) << std::endl;
}

// összeadás
int AddTwoNumbers(int number_1, int number_2) {
  return number_1 + number_2;
}

// kivonás
int SubtractTwoNumbers(int number_1, int number_2) {
  return number_1 - number_2;
}

// szorzás
int MultiplyTwoNumbers(int number_1, int number_2) {
  return number_1 * number_2;
}

// osztás
double DivideTwoNumbers(int number_1, int number_2) {
  return number_1 / (double) number_2;
}

// hatványozás
double ExponentiateTwoNumbers(int number_1, int number_2) {
  return pow(number_1, number_2);
}


void ListOperations() {
std::cout << "Választható műveletek:\n \ta) Összeadás\n \tb) Kivonás\n \tc) Szorzás\n \td) Osztás\n \te) Hatványozás\n \tx) Kilépés\nKérem, válassza ki a műveletet a fenti listából: " << std::endl;
}
void CalculateResult(char option, int number_1, int number_2) {
  if (option == 'a') {
    PrintAddition(number_1, number_2);
  } else if (option == 'b') {
      PrintSubtraction(number_1, number_2);
  } else if (option == 'c') {
      PrintMultiplication(number_1, number_2);
  } else if (option == 'd') {
      PrintDivision(number_1, number_2);
  } else if (option == 'e') {
      PrintExponentiation(number_1, number_2); 
  }
}
