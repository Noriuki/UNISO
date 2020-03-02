#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mes, dia;
int main()
{

   printf ("Digite o dia de nascimento (apenas numeros): ");
   scanf ("%d", &dia);
   printf ("Digite o mes de nascimento (apenas numeros): ");
   scanf ("%d", &mes);
   valida_dados_recebidos();
}
valida_dados_recebidos()
{
   if((mes<=12 && mes>0) && (dia<=31 && dia>0))
   {
      valida_signos();
   }
   else
   {
      printf ("Erro!\n");
      main();
   }
}
valida_signos()
{
   if (((mes==3) && (dia>=21)) || ((mes==4) && (dia<=20)))
   {
      aries();
   }
        if (((mes==4) && (dia>=21 && dia<=30)) || ((mes==5) && (dia<=20)))
        {
                touro();
        }
        if (((mes==5) && (dia>=21)) || ((mes==6) && (dia<=20)))
        {
                gemeos();
        }
        if (((mes==6) && (dia>=21 && dia<=30)) || ((mes==7) && (dia<=21)))
        {
                cancer();
        }
        if (((mes==7) && (dia>=22)) || ((mes==8) && (dia<=22)))
        {
                leao();
        }
        if (((mes==8) && (dia>=23)) || ((mes==9) && (dia<=22)))
        {
                virgem();
        }
        if (((mes==9) && (dia>=23 && dia<=30)) || ((mes==10) && (dia<=22)))
        {
                libra();
        }
        if (((mes==10) && (dia>=23)) || ((mes==11) && (dia<=21)))
        {
                escorpiao();
        }
        if (((mes==11) && (dia>=22 && dia<=30)) || ((mes==12) && (dia<=21)))
        {
                sagitario();
        }
        if (((mes==12) && (dia>=22)) || ((mes==1) && (dia<=20)))
        {
                capricornio();
        }
        if (((mes==1) && (dia>=21)) || ((mes==2) && (dia<=19)))
        {
                aquario();
        }
        if (((mes==2) && (dia>=20 && dia<=29)) || ((mes==3) && (dia<=20)))
        {
                peixes();
        }
   else
   {
      printf("Erro!");
      main();
   }
}
aries()
{
   printf ("Aries \n");
   main();
}
touro()
{
        printf ("Touro \n");
        main();
}
gemeos()
{
        printf ("Gemeos \n");
        main();
}
cancer()
{
        printf ("Cancer \n");
        main();
}
leao()
{
        printf ("Leao \n");
        main();
}
virgem()
{
        printf ("Virgem \n");
        main();
}
libra()
{
        printf ("Libra \n");
        main();
}
escorpiao()
{
        printf ("Escorpiao \n");
        main();
}
sagitario()
{
        printf ("Sagitario \n");
        main();
}
capricornio()
{
        printf ("Capricornio \n");
        main();
}
aquario()
{
        printf ("Aquario \n");
        main();
}
peixes()
{
        printf ("Peixes \n");
        main();
}
