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
    while (attempt < 3) //密碼驗證系統最多嘗試3次 
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
    system("CLS"); //清除畫面再印選單 
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
//這次在寫作業的時候覺得主要卡在迴圈跟一些基本操作上面 
//有時候for迴圈的範圍沒設好 會讓整個畫面跑得很亂 還有像是選單的地方 一開始不知道怎麼去控制流程
//要一直想怎麼跳回去重新選 有時候按鍵的輸入也搞不太懂 要小心用對指令 不然輸入跟輸出會亂掉
//雖然過程中試了很多次也錯了很多次 但慢慢修慢慢改之後 發現寫C語言其實蠻講求耐心的 
//每一個小地方如果沒注意到 就很容易整段壞掉 整理完之後覺得自己對迴圈還有基本操作熟練了一點 
//雖然還不是很厲害 但感覺比剛開始好很多 以後做這種題目的時候應該可以更順了



