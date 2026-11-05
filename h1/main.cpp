#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b)
{
  cout << "Summa: " << a + b << endl;
}

void calcDiv(int a, int b)
{
  if (b == 0) {
    cout << "Jakaja ei saa olla nolla!" << endl;
    } else {
    cout << "Osamaara: " << static_cast<float>(a) / b << endl;
    }
}

int retSum(int a, int b)
{
  return a + b;
}

float retDiv(int a, int b)
{
  if (b == 0) {
    throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
    }

int main()
{
  int a, b;

  cout << "Anna ensimmainen luku: ";
  cin >> a;

  cout << "Anna toinen luku: ";
  cin >> b;

  calcSum(a, b);
  calcDiv(a, b);

  cout << "Palautettu summa: " << retSum(a, b) << endl;

  try {
    float result = retDiv(a, b);
    cout << a << "/" << b << " = " << result << endl;
    } catch (const runtime_error& e) {
    cout << "Error: " << e.what() << endl;
    }
return 0;
}
