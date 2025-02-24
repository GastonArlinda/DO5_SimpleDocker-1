#include <fcgi_stdio.h>
#include <stdlib.h>

int main() {
    while (FCGI_Accept() >= 0) {
        printf("Status: 200 \n");
        printf("Content-type: text/html\r\n\r\nHello World!");
    }
    return 0;
}