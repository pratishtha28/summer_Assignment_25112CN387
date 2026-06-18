#include <stdio.h>
int main()
{
    char a[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", a);
    //ye loop isliye hai taki hum string ke har character ko traverse kar sake aur uski frequency ko count kar sake, ise humne start kiya hai 0 se aur jab tak string ke end tak nahi pahuch jate tab tak chalega
    for(i = 0; a[i] != '\0'; i++)
    {
        //unsigned char ka use isliye kiya hai taki hum negative index na le sake, kyunki char ka range -128 to 127 hota hai aur humne frequency array ka size 256 rakha hai, isliye humne unsigned char ka use kiya hai taki hum 0 to 255 ke range me index le sake
        freq[(unsigned char)a[i]]++;
    }

    printf("Character Frequency:\n");
    //ye loop isliye hai taki hum frequency array ke har index ko traverse kar sake aur agar kisi character ki frequency 0 nahi hai to usko print kar sake
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}