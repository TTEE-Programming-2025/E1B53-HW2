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
    printf("�п�J�K�X: ");
    scanf("%d", &password);
    if (password == 2025) 
    {
    printf("�n�J���\�I\n");
    system("CLS");
    break;
    } 
    else 
    {
    attempt++;
    if (attempt < 3) 
    {
    printf("�K�X���~�A�ЦA�դ@���I\n");
    } 
    else 
    {
    printf("���~�T���A�t�ε����I\n");
    return 0; 
    }
    }
    }
    while (1) 
    {
    system("CLS"); 
    printf("  a. �^��r�������T���� \n");
    printf("  b. ��ܤE�E���k��     \n");
    printf("  c. ���}�t��           \n");
    printf("�п��(a/b/c): ");
    option = getch(); 
    printf("%c\n", option); 
    if (option == 'a' || option == 'A') 
    {
    system("CLS"); 
    char limit;
    printf("�п�J�@�Ӥp�g�r���]a��n�����^�@���d��: ");
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
    printf("��J���~�I�Э��s��J�C\n");
    getch();
    }
    } 
    else if (option == 'b' || option == 'B') 
    {
    system("CLS");
    int num;
    printf("�п�J�@�ӼƦr(1-9): ");
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
    printf("�Ʀr��J���~�I\n");
    getch();
    }
    } 
    else if (option == 'c' || option == 'C') 
    {
    char confirm;
    printf("�A�T�w�n���}�ܡH(y/n): ");
    confirm = getch();
    printf("%c\n", confirm);
    if (confirm == 'y' || confirm == 'Y') 
    {
    printf("�t�ε����A�T�T��\n");
    break; 
    } 
    else if (confirm == 'n' || confirm == 'N') 
    {
    continue; 
    } 
    else 
    {
    printf("��J���~�I�Э��s��ܡC\n");
    getch();
    }
    } 
    else 
    {
    printf("�L�Ŀﶵ�A�Э��s��J�I\n");
    getch();
    }
    }
    system("pause");
    return 0;
}

