#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <time.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleTitle ("calculatorrrrrrrrrrrrrrrRRRRRRrrrrr");

    float x;
    float y;
    float thing;
    float sum;
    int x1 = x;
    int y1 = y1;
equation:
   cout << "choose one" << endl;
   cout << "1=addition, 2=substract, 3=multiply, 4=divide, 5=power, 6=random number, 7=square root sum, 8=percentage, 9=square root, 10=logarithm" << endl;
   cin >> thing;

   if(thing == 1){
    cout << "\nenter the numbers" << endl;
    cin >> x >> y;
    sum = x + y;
    cout << "the result is: " << sum;
   }

   if(thing == 2){
    cout << "\nenter the numbers" << endl;
    cin >> x >> y;
    sum = x - y;
    cout << "the result is: " << sum;
   }

   if(thing == 3){
    cout << "\ningresa los numeros a multiplicar" << endl;
    cin >> x >> y;
    sum = x * y;
    cout << "the result is: " << sum;
   }

   if(thing == 4){
    cout << "\nenter the numbers" << endl;
    cin >> x >> y;
    sum = x / y;
    cout << "the result is: " << sum;
   }

   if(thing == 5){
    cout << "\nenter the numbers" << endl;
    cin >> x >> y;
    sum = pow(x, y);
    cout << "the result is: " << sum;
   }

   if (thing == 6){
    cout << "\nenter two numbers" << endl;
    cin >> x1 >> y1;
    srand(time(0));
        for(int x = x; x < 1; x++){
        }
        cout << x1 + rand() %(y1 +1 - x1) << endl;
   }

   if(thing == 7){
    cout << "\nenter the numbers" << endl;
    cin >> x >> y;
    sum = sqrt(x) + sqrt(y);
    cout << "the result is: " << sum << endl;
   }

   if(thing == 8){
    cout << "\nfirst enter the total number and then the percentage number" << endl;
    cin >> x >> y;
    sum = (y*100)/x;
    cout << "\n" << y << " is " << sum << "% of " << x << endl;
   }

   if(thing == 9){
    cout << "\nenter the number" << endl;
    cin >> x;
    sum = sqrt(x);
    cout << "the result is: " << sum << endl;
   }

   if(thing == 10){
    cout << "\nenter the number" << endl;
    cin >> x;
    sum = log(x);
    cout << "the result is: " << sum << endl;
   }

   else{
    cout << "\nthat is not an option\n" << endl;
    goto equation;
   }

   return 0;
   }

