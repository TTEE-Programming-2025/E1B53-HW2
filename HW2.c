#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) 
{
    int password;
    int attempt=0; 
    char option,ch1,ch2;
    int row,col;
    printf("###====###\n"); 
    while (attempt < 3) 
    {
    printf("請輸入密碼: ");
    scanf("%d", &password);
    if (password == 2025) 
    {
    printf("登入成功！\n");
    system("CLS");
    break;
    } 
    else 
    {
    attempt++;
    if (attempt < 3) 
    {
    printf("密碼錯誤，請再試一次！\n");
    } 
    else 
    {
    printf("錯誤三次，系統結束！\n");
    return 0; 
    }
    }
    }
    while (1) 
    {
    system("CLS"); 
    printf("  a. 英文字母直角三角形 \n");
    printf("  b. 顯示九九乘法表     \n");
    printf("  c. 離開系統           \n");
    printf("請選擇(a/b/c): ");
    option = getch(); 
    printf("%c\n", option); 
    if (option == 'a' || option == 'A') 
    {
    system("CLS"); 
    char limit;
    printf("請輸入一個小寫字母（a到n之間）作為範圍: ");
    scanf(" %c", &limit); 
    if (limit >= 'a' && limit <= 'n') 
    {
    for (ch1 = 'a'; ch1 <= limit; ch1++) 
    {
    for (ch2 = 'a'; ch2 <= ch1; ch2++) 
    {
    printf("%c ", ch2);
    }
    printf("\n");
    }
    system("pause");
    } 
    else 
    {
    printf("輸入錯誤！請重新輸入。\n");
    getch();
    }
    } 
    else if (option == 'b' || option == 'B') 
    {
    system("CLS");
    int num;
    printf("請輸入一個數字(1-9): ");
    scanf("%d", &num);
    if (num >= 1 && num <= 9) 
    {             
    for (row = 1; row <= num; row++) 
    {
    for (col = 1; col <= num; col++) 
    {
    printf("%d*%d=%2d ", row, col, row * col);
    }
    printf("\n");
    }
    system("pause");
    } 
    else 
    {
    printf("數字輸入錯誤！\n");
    getch();
    }
    } 
    else if (option == 'c' || option == 'C') 
    {
    char confirm;
    printf("你確定要離開嗎？(y/n): ");
    confirm = getch();
    printf("%c\n", confirm);
    if (confirm == 'y' || confirm == 'Y') 
    {
    printf("系統結束，掰掰～\n");
    break; 
    } 
    else if (confirm == 'n' || confirm == 'N') 
    {
    continue; 
    } 
    else 
    {
    printf("輸入錯誤！請重新選擇。\n");
    getch();
    }
    } 
    else 
    {
    printf("無效選項，請重新輸入！\n");
    getch();
    }
    }
    system("pause");
    return 0;
}

