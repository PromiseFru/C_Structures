#include <stdio.h>
#include <string.h>

struct Restaurant
{
    char name[100];
    char address[50];
};

struct Menu
{
    char name[100];
    int price;
    struct Restaurant *LR[5];
};

struct Customer
{
    char name[100];
    int account;
    struct Restaurant R;
    struct Menu M;
};

int main() {
    // array of restaurants
    struct Restaurant AR[5];
    strcpy( AR[0].name, "one");
    strcpy( AR[0].address, "1");
    strcpy( AR[1].name, "two");    
    strcpy( AR[1].address, "2");
    strcpy( AR[2].name, "three");    
    strcpy( AR[2].address, "3");
    strcpy( AR[3].name, "four");    
    strcpy( AR[3].address, "4");
    strcpy( AR[4].name, "five");  
    strcpy( AR[4].address, "4"); 

    // M1
    struct Menu M1;
    return 0;
}