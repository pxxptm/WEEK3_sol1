#include<iostream>
#include<math.h>
using namespace std;

int mul(int n)
{
    int c=0,num[3]={},b;
    while(n>0)
    {
        num[2-c]=n%10;
        n/=10;
        c++;
    }
    int a=num[0]*num[1]*num[2];
    cout << num[0] << " . " << num[1] << " . " << num[2] << " = " << a;
    return a;
}

main()
{
    int n;
    cout << "Input number : ";
    cin >> n;

    while (n>10)
    {
        n=mul(n);
        cout << "\n";
    }
    return 0;
}
