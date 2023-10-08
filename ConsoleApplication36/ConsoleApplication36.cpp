//Для удобства 2 задание закоментировано

#include <iostream>
#include <cstring>
using namespace std;


//1 задание
//Написать функцию, которая заменяет все символы точки «.» в строке на
//символы восклицательного знака «!».

void changeSymbol(char* str)
{
    char* strPtr;
    for (strPtr = str; *strPtr; strPtr++)
    {
        if (*strPtr == '.')
        {
            *strPtr = '!';
        }
    }
}

int main()
{
    char myStr[] = "cats. dogs. birds. raccoons.";
    cout << "My original string: " << myStr << endl;
    changeSymbol(myStr);
    cout << "My transformed string: " << myStr << endl;
}

//2 задание
//Пользователь вводит символ. Нужно написать функцию, которая
//посчитает и выведет число, сколько раз этот символ появился в строке

/*void countSymbol(char* str, char ch)
{
    int count = 0;
    char* strPtr = str;

    // при запуске программы всплывало предуприждение, для его устранения 
    //предусматриваем что значение может быть не найдено в условии
    for (strPtr = str; (strPtr = strchr(strPtr, ch)) != nullptr; strPtr++)
    {
         count++;
    }
    cout << "Number of symbols: " << count;
  
}

int main()
{
    char ch;
    cout << "Enter symbol: ";
    cin >> ch;

    char myStr[] = "cats. dogs. birds. raccoons.";
    countSymbol(myStr, ch);

}
*/


