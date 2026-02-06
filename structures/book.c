#include <stdio.h>

// define typedef struct
typedef struct
{
    char title[50];
    char author[50];
    int pages;
} Book;

int main(void)
{
    // create two books
    Book book1 = {"The Alchemist", "Paulo Coelho", 208};
    Book book2 = {"1984", "George Orwell", 328};

    // print the book info
    printf("Book 1: %s by %s, %d pages\n", book1.title, book1.author, book1.pages);
    printf("Book 2: %s by %s, %d pages\n", book2.title, book2.author, book2.pages);

    return 0;
}