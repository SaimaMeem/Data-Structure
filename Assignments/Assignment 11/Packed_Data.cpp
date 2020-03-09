#include <cstdio>

int main (void){
    unsigned short int age, sex, weight;
    printf("Enter the age, sex, weight of a person:");
    scanf("%hu %hu %hu" , &age, &sex, &weight);

    age = age<<9;
    sex = sex<<8;

     unsigned short int packed = 0;
     packed = (age | sex) | weight;

     printf("Packed Data: %u\n", packed);
     printf("Unpacked Data:\n" );
     age = packed & 0xFE0;
     sex = packed & 0x100;
     weight = packed & 0xFF;

     age = age>>9;
     sex = sex>>8;

    printf("Age : %u  Sex : %u  Weight : %u " ,age, sex, weight);
    return 0;


}
