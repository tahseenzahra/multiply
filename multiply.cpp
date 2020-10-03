#include <iostream>
using namespace std;

int main(void)
{
    int i, num1, num2, num3;
    int array[3] = {num1, num2, num3};

    for(i = 0; i < 3; i++)
    {
      cout <<"Enter three integers: ";
      cin >> array[i];
    }

    cout <<"num1 * num2 * num3 = "
         <<array[0] * array[1] * array[2]
         <<endl;
}
