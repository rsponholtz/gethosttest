#include <stdio.h>
#include <netdb.h>


int main(int argc, char *argv[])
{
    struct hostent *lh = gethostbyname(argv[1]);

    if (lh)
        puts(lh->h_name);
    else
        herror("gethostbyname");

    return 0;
}
