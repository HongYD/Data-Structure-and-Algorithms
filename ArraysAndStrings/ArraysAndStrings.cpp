// ArraysAndStrings.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include<stdio.h>
#define MAX_DIGITS_INT 10
int main()
{
    //First Non-Repeat Character
    //constexpr char cstr[] = "introduction";

    //int counts[std::numeric_limits<unsigned char>::max() + 1] = { 0 }; // EDIT
    //
    //for (unsigned char u : cstr) ++counts[u];
  
    //for (unsigned char u : cstr) if (counts[u] == 1 && u != 0)
    //{
    //    std::cout << "first non-repeating char is '" << char(u) << "'\n";
    //    break;
    //}

    //Remove Specific Character
    /*char str[256], char remove[256];
    int src, dst, removeArray[256];
    for (src = 0; src < 256; src++)
    {
        removeArray[src] = 0;
    }
    src = 0;
    while (remove[src]) {
        src++;
    }

    src = dst = 0;
    do {
        if (!removeArray[str[src]]) {
            str[dst++] = str[src];
        }
    } while (str[src++]);*/

    //Reverse Words
    /*char a[101], s[101];
    int i, len, mid, next, top;
    gets_s(a);
    len = strlen(a);
    mid = len / 2 - 1;
    top = 0;
    for (i = 0; i < mid; i++)
    {
        s[++top] = a[i];
    }
    if (len % 2 == 0)
        next = mid + 1;
    else
        next = mid - 2;
    for (i = next; i <= len - 1; i++)
    {
        if (a[i] != s[top])
            break;
        top--;
    }
    if (top == 0)
        printf("Yes");
    else
        printf("No");

    getchar();
    getchar();
    return 0;*/

    //Integer/String Conversion
}
int strToInt(char str[])
{
    int i = 0 , isNeg = 0, num = 0;
    if (str[0] == '-') {
        isNeg = 1;
        i = 1;
    }
    while (str[i]) {
        num *= 10;
        num += (str[i++] - '0');
    }
    if (isNeg)
        num *= -1;
    return num;
}

void IntToStr(int num, char str[])
{
    int i = 0, j = 0, isNeg = 0;
    char temp[MAX_DIGITS_INT + 2];
    if (num < 0) {
        num *= -1;
        isNeg = 1;
    }
    do {
        temp[i++] = (num % 10) + '0';
        num /= 10;
    } while (num);
    if (isNeg)
        temp[i++] = '-';
    while (i > 0)
        str[j++] = temp[--i];
    str[j] = '\0';
}

