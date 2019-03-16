#include <stdio.h>
#include <stdlib.h>
void DikdortgenCiz();
int Permutasyon(int x,int y);
void Kombinasyon();
void Fibonacci();
void UpperCase();
void NotSistemi();
int main()
{
    int secim=3;
    while(secim<8 || secim>0)
    {
        printf("Menuden seciniz:  \n 1.Dikdortgen Cizme \n 2.Permutasyon \n 3. Kombinasyon \n 4.Fibonacci \n 5.Upper-Lower Case \n 6.Not Sistemi \n 7. Cikis \n");

        scanf("%d",&secim);

        switch(secim)
        {
        case 1:
            DikdortgenCiz();
            break;
        case 2:
            Permutasyon(6,4);
            break;
        case 3:
            Kombinasyon();
            break;
        case 4:
            Fibonacci();
            break;
        case 5:
            UpperCase();
            break;
        case 6:
            NotSistemi();
            break;
        default:
            printf("Hatali Giris Yaptiniz.");
            break;
        }
    };
    return 0;



}


void DikdortgenCiz()
{

    int Satir=5;
    int Sutun=15;
    for(int i=0; i<Satir; i++)
    {
        for(int j=0; j<Sutun; j++)
        {
            printf("X");
        }
        printf("\n");
    }
}

int Permutasyon(int x,int y)
{
    int toplam=1;
    printf("6 arkadastan 4’u fotograf cekilecektir. Bu 4 kisi kac farkli sekilde siralanabilir sorusunun cevabi: ");
    for(int i=x; i>(x-y); i--)
    {
        toplam=toplam*i;
    }
    printf("%d'dir. \n",toplam);

    return toplam;

}

void Kombinasyon()
{
    int x=5,y=2,toplam1=1,toplam2=1,sonuc=0;
    toplam1=Permutasyon(x,y);
    for(int i=1; i<=y; i++)
    {
        toplam2=toplam2*i;
    };
    sonuc = toplam1/toplam2;
    printf("%d'dir. \n",sonuc);

}

void Fibonacci()
{
    int x=0, y=1, z=2, sonuc=0 ;
    if(z==2)
        sonuc=1;
    else
    {
        for(int i=1; i<z-1; i++)
        {

            sonuc= x+y;
            x=y;
            y=sonuc;

        }
    }
    printf("Fibonacci serisinin %d. elemani %d'dir.\n",z,sonuc);


}

void UpperCase()
{

    char string[8]="MeRhAbA";
    int c = 0;
    printf("Yazimizin ilk hali %s'dir\n",string);

    while (string[c] != '\0')
    {
        if (string[c] >= 'a' && string[c] <= 'z')
        {
            string[c] = string[c] - 32;
        }
        c++;
    }
    printf("Yazimizin son hali %s'dir\n",string);
}

void NotSistemi()
{

    int not=64;
    char harfnotu;

    if(not<50)
        harfnotu='F';
    else if(not<60)
        harfnotu='D';
    else if(not<70)
        harfnotu='C';
    else if(not<80)
        harfnotu='B';
    else
        harfnotu='A';


    printf("%d Notunu Alan Ogrencinin Harf Notu %c'dir.",not,harfnotu);




}
