#include <bits/stdc++.h>
using namespace std;

int main()
{
     printf("ceil of 2.3 is %.1f\n", ceil(2.3));
     printf("ceil of 3.8 is %.1f\n", ceil(3.8));
     printf("ceil of -2.3 is %.1f\n", ceil(-2.3));
     printf("ceil of -3.8 is %.1f\n", ceil(-3.8));

     printf("floor of 2.3 is %.1f\n", floor(2.3));
     printf("floor of 3.8 is %.1f\n", floor(3.8));
     printf("floor of -2.3 is %.1f\n", floor(-2.3));
     printf("floor of -3.8 is %.1f\n", floor(-3.8));

     // round
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
     return 0;
}
