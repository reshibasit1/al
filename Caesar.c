#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <ctype.h>
void main()
{
    char plain[10], cipher[10];
    int key,i,length;
    int result;
    printf("Enter the plain text:");
    scanf("%s", plain);
    printf("\nEnter the key value:");
    scanf("%d", &key);
    printf("\nENCRYPTED TEXT: ");
    length = strlen(plain);
    for(i = 0; i < length; i++)
    {
        cipher[i]=plain[i] + key;
        if (isupper(plain[i]) && (cipher[i] > 'Z'))
            cipher[i] = cipher[i] - 26;
        if (islower(plain[i]) && (cipher[i] > 'z'))
            cipher[i] = cipher[i] - 26;
        printf("%c", cipher[i]);
    }
}