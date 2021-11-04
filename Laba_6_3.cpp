#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void arr(int* a, const int size, const int Low, const int High)
{
    for (int i=0; i<size; i++)
        a[i] = Low + rand() % (High-Low+1);
}
void Print(int* a, const int size)
{
    cout << "a = ";
    cout << "{ ";
     for (int i=0; i<size; i++)
     {
    cout << a[i];
    cout << ",";
     }
    cout << " }" << endl;
        
}
int Min(int* a, const int size)
{
    int min = a[0];
    
    for (int i=1; i<size; i++)
        
        if (a[i]<min)
            
            min=a[i];
  
    return min;
    
}
int main()
{
    srand((unsigned)time(NULL));
    
    const int n=9;
    int a[n];
    int Low = 2;
    int High = 25;
    
    arr(a, n, Low, High);
    Print(a, n);
    Min(a, n);
    cout << "min = " << Min(a, n) << endl;
    return 0;
    
}
