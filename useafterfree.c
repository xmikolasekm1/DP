#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char *pouzivatelskemeno = 0;
char *heslo = 0;
while(1)
{
if(name) printf("Adresa pouzivatelskeho mena: %x\n Pouzivatelske meno: %s\n",pouzivatelskemeno,pouzivatelskemeno);
if(pass) printf("Adresa hesla: %x\n Heslo: %s\n",heslo,heslo);
printf("1: Pouzivatelske meno\n""2: Heslo\n""3: Reset\n""4: Prihlasenie\n""5: Ukoncit program\n");
printf("Zvol si moznost: ");
int volba = 0;
scanf("%d", &volba);
switch(volba)
{
case 1:
pouzivatelskemeno = malloc(20*sizeof(char));
printf("Zadaj pouzivatelske meno: ");
scanf("%254s", pouzivatelskemeno);
if(strcmp(pouzivatelskemeno,"root") == 0)
{
printf("Pouzit pouzivatelske meno root nie je povolene.\n");
strcpy(pouzivatelskemno,"");
}
break;
case 2:
heslo = malloc(20*sizeof(char));
printf("Zadajte heslo: ");
scanf("%254s", heslo);
break;
case 3:
free(heslo);
free(pouzivatelskemeno);
break;
case 4:
if(strcmp(pouzivatelskemeno,"root") == 0)
{
printf("Prihlasenie bolo uspesne!\n");
system("/bin/sh");
exit(0);

}
break;
case 5:
exit(0);
}
}

}
