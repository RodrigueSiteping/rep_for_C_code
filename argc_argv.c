#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Get Command-Line Arguments in C
 * 
 * @param argc // Number of strings in array argv
 * @param argv  // Array of command-line argument strings
 * @param char *envp[]   // Array of environment variable strings
 * @return 
 */
int main(int argc, char* argv[])
{//    int age = 0;
//    printf("Enter age : \n");
//    scanf("%d", &age);
//    printf("age is %d \n", age);
 
    //printf("\ncmdline args count=%s", argc);

 
    //int i=0 First argument is Path-executable name only

    for (int i = 0; i < argc; i++)
        printf("\n argv[%d] = %s\n", i, argv[i]);

    printf("\n");
    return 0;
    //exit(EXIT_SUCCESS);

}

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    exit(EXIT_SUCCESS);
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char **ptr;
    for (ptr = argv; *ptr != NULL; ptr++)
        printf("%s\n", *ptr);

    return 0;
}
*/