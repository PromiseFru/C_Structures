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
    strcpy(M1.name, "Rice");
    M1.price = 500;

    // M2
    struct Menu M2;
    strcpy(M2.name, "Eru");
    M1.price = 700;

    // customer
    struct Customer customer;
    strcpy(customer.name, "John");
    customer.account = 5000;

    // print resto
    printf("Restaurants\n");
    for(int i = 0; i < 5; i++){
        printf("name: %s, Address: %s \n", AR[i].name, AR[i].address);
    }

    // write to file
    FILE * fp;
    /* open the file for writing*/
    fp = fopen ("c:\\temp\\restaurant.txt","w");
 
    /* write 10 lines of text into the file stream*/
    for(int i = 0; i < 10;i++){
        fprintf (fp, "Restaurants\n");
        fprintf (fp, "name: %s, Address: %s \n", AR[i].name, AR[i].address);
    }
 
   /* close the file*/  
    fclose (fp);

    return 0;
}