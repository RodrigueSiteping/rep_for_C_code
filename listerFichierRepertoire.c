#include <dirent.h>
#include <stdio.h>
 
int main()
{
    struct dirent *dir;
    // opendir() renvoie un pointeur de type DIR. 
    DIR *d = opendir("."); 
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    return 0;
}