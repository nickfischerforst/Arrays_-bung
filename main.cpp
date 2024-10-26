#include <iostream>

int main(void) {
    float noten [10];
    float summe=0;
    float durchschnitt;

  for(int i = 0;i<10; i++)
    {
        printf("bitte geben sie die %d. note ein.",i+1);
        scanf("%f",&noten[i]);
summe = summe+ noten[i];

    }
    durchschnitt= summe/10;
    //Summe und Durschnitt ausgeben
    printf("Die Summe betraegt%f\n",summe);
    printf("der durchschnitt %f\n", durchschnitt);

for(int i =0;i<10;i++)
    {
        printf("%d.noten:%f\n",i+1,noten[i]);
    }
    return 0;
}
