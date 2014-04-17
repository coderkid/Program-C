#include<stdio.h>
#include<conio.h>

/*
  1 2 3 4 5 6
1 # # # # # #
2 *
3 # # # # # #
4
5 # # # # # #
6
*/

int main()
{
    int n,pil,baris,kolom,i,j;
    printf("N: ");
    scanf("%d",&n);
    n=n*2;
    char kotak[n][n];

    // create ways
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==0){
                kotak[i][j]='#';
            }
            else{
                kotak[i][j]=' ';
            }
        }
    }
    // set star
    baris=1,kolom=0;
    kotak[baris][kolom]='*';


    do{
        system("cls");
        // print them
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%c",kotak[i][j]);
            }
            printf("\n");
        }
        printf("press q to exit game.");
        pil= getch();
        switch(pil){
            case 'a':
                kotak[baris][kolom]=' ';
                // print them
                kolom--;
                if(kolom<0){
                    kolom=0;
                }
                kotak[baris][kolom]='*';
                break;
            case 's':
                kotak[baris][kolom]=' ';
                // print them
                baris+=2;
                if(baris>n-1){
                    baris=n-1;
                }
                kotak[baris][kolom]='*';
                break;
            case 'd':
                kotak[baris][kolom]=' ';
                // print them
                kolom++;
                if(kolom>n-1){
                    kolom=n-1;
                }
                kotak[baris][kolom]='*';
                break;

            case 'w':
                kotak[baris][kolom]=' ';
                // print them
                baris-=2;
                if(baris<2){
                    baris=1;
                }
                kotak[baris][kolom]='*';
                break;

            default:
                break;
        }
    }while(pil!='q');


    return 0;
}
