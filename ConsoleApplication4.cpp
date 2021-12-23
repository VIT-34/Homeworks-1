#include <iostream>

using namespace std;

// 1. Задание

int main() 
{
    int a;
    int b;

    cin >> a >> b;
    cout << ((a + b >= 10 && a + b <= 20) ? "true" : "false") << endl;

};

// 2. Задание

int main()
{

        const int a = 3;
        const int b = 10;

        cout << ((b == 10 || a == 10 && a + b = 10) ? "true" : "false") << endl;

};

// 3. Задание

#include <iostream>
#include <cmath>

using namespace std;

int main()


{
    const size_t SIZE{ 50 };
    cout << "Your numbers: ";
    for (size_t index = 0; index < SIZE; index++)
        if (index % 2) cout << index << " ";

    return 0;

};

// 4. Задание


#include <iostream>

#include <cmath>

#include <locale>

#include <stdio.h>

using namespace std;

int main()

{
    int n;
    int i;
    int is_prime = true;
    cout << "Enter a number and click enter";
    cin >> n;
    i = 2;
    while (i <= sqrt(static_cast<double>(n))) {
        if (n % i == 0)
            is_prime = false;
        i++;
        if (is_prime) cout << "number simple";
        else cout << "number not easy";
    };

    return 0;
}