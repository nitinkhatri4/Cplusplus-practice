#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// void pattern9(int n){
//     for (int i=0; i<2*n; i++) {
//         if(i>n-1){
//             i = i-2;
//         }
//         for (int k=0; k<i; k++) {
//             cout << " ";
//         }
//         for (int j=0; j<2*i+1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int x;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            x = 0;
        else
            x = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << x;
            x = 1 - x;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
        spaces -= 2;
    }
}

void pattern13(int n)
{
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j >= i)
                ch = ch - 1;
            else
                ch = ch + 1;
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for(int i=0; i<n; i++) {
        char ch='A'+(n-1);
        for(int j=0; j<=i; j++) {
            cout << ch--;
        }
        cout << endl;
    }
}

void pattern18Re(int n)
{
    for(int i=0; i<n; i++) {
        // char ch='A'+(n-1);
        for(char ch='A'+(n-1)-i; ch<='A'+(n-1); ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    // part 1
    for(int i=0; i<n; i++){
        int spaces = 2*i;
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        for (int j=0; j<spaces; j++){
            cout << " ";
        }
        for (int j = 0; j<n-i; j++){
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }

    // part 2
    for(int i=0; i<n; i++){
        int spaces = 2*(n-i-1);
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        for (int j=0; j<spaces; j++){
            cout << " ";
        }
        for (int j = 0; j<=i; j++){
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

void pattern20(int n)
{   
    int spaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) 
        stars = 2*n-i;

        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        for(int j=1; j<=spaces; j++){
            cout << " ";
        }
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        if(i<n)
        spaces -= 2;
        else
        spaces += 2;

        cout << endl;
    }
}

void pattern21(int n){
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1 || j==1 || i==n || j==n)
            cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;

            cout << n-(min(min(left, top), min(right, bottom)));
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern22(n);
    return 0;
}