#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num, result;

    num = 11.16;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = 13.87;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = 50.50;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = 50.49;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = -11.16;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = -13.87;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = -50.5;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = -50.49;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";

    num = 15;
    result = round(num);

    cout << "round(" << num << ")\t= " << result << "\n";
}