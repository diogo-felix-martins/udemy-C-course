#include <stdio.h>

int main(){
    enum Company{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company company1 = XEROX;
    enum Company company2 = GOOGLE;
    enum Company company3 = EBAY;

    printf("%d\n%d\n%d\n", company1, company2, company3);

    return 0;
}