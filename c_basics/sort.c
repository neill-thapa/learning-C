#include<stdio.h>

void sort3_desc(int x, int y, int z, int *f, int *s, int *t){
    if(x > y && x > z){
        *f = x;
        if(y > z){*s = y; *t = z;}
        else     {*s = z; *t = y;}
    }
    else if(y > x && y > z) {
        *f = y;
        if(x > z){*s = x; *t = z;}
        else     {*s = z; *t = x;}
    }
    else{
        *f = z;
        if(x > y){*s = x; *t = y;}
        else     {*s = y; *t = x;}
    }
}

 int main(void){
        int a, b, c, d;
        printf("Enter four numbers: ");
        if(scanf("%d %d %d %d", &a, &b, &c, &d) !=4){
            printf("Invalid Input Nigga !! Enter just the numbers.\n");
            return 1; 
        }
        int largest;
        int r1, r2, r3;

        if(a > b && a > c && a > d){
            largest = a;
            r1 = b; r2 = c; r3 = d;
        }else if(b > a && b > c && b > d){
            largest = b;
            r1 = a; r2 = c; r3 = d;
        }else if(c > a && c > b && c > d){
            largest = c;
            r1 = a; r2 = b; r3 = d;
        }else{
            largest = d;
            r1 = a; r2 = b; r3 = c;
        }

        int second, third, fourth;
        sort3_desc(r1, r2, r3, &second, &third, &fourth);

        printf("Sorted descending: %d %d %d", largest, second, third);
        
        return 0;
}