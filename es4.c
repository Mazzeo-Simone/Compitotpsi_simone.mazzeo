#include<stdio.h>
int *px;

int *py;
int distanza(int a[], int x, int y, int n);








int main(void){
        int a[] = {1,4,3,6,7,2,9,0,5};
        int i;
        i=0;
        for( i=0; i<9; i++)
                printf("%d\t", a[i]);
        printf("\n");

        int x = 3;
        int y = 9;
        int d = distanza(a, x, y, 9);
        printf("la distanza tra %d e %d e' di %d posizioni\n", x, y, d);
        return 0;
}

int distanza(int a[], int x, int y, int n){
	int *px=NULL, *py=NULL;
	int i;
	i = 0;
	for( i=0;i<x;i++){
		if(a[i]=x&&px!=NULL){
			px=&a[i];
		}
		int i;
		i=0;
			for( i=0;i<y;i++){
		if(a[i]=x&&py!=NULL){
			py=&a[i];
		}
	}
	if(px!=NULL&&py!=NULL){
		return(int) (py-px>0?py-px:px-py);
	}
		
	
}
}
