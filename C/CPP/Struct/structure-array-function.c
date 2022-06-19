#include <stdio.h>

struct triangle
{
    int a, b, c;
};

typedef struct triangle triangle;


void sorted_triangle(triangle *tri, int n);


int main(void)
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    triangle tr[3];
    int i;

    for (i = 0; i < 3; i++) {
        scanf("%d %d %d\n", &tr[i].a, &tr[i].b, &tr[i].c);
    }

    sorted_triangle(tr, 3);

    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    
}

void sorted_triangle(triangle *tri, int n)
{
    int i, j, temp;

    for (i = 0; i < 3; i++) {
        if ((tri+i)->a > (tri+i)->b){
            temp = (tri+i)->a;
            (tri+i)->a = (tri+i)->b;
            (tri+i)->b = temp;
        }
        if ((tri+i)->a > (tri+i)->c) {
            temp = (tri+i)->a;
            (tri+i)->a = (tri+i)->c;
            (tri+i)->c = temp;
        }
        if ((tri+i)->b > (tri+i)->c) {
            temp = (tri+i)->b;
            (tri+i)->b = (tri+i)->c;
            (tri+i)->c = temp;
        }
    }
}