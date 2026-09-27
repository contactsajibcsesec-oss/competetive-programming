#include <stdio.h>
int main (){
    char Charname []="VOLVO";
    int length = sizeof (Charname) / sizeof(Charname[0]);
    printf ("The length of string is: %d\n",length);

   
    for (int i=0 ; i <6 ; i++){
        printf ("%c\n" , Charname[i]);
    }


    return 0;
}
