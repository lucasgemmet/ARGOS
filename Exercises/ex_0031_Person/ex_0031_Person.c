// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

// Function definitions
// TODO: implement ex_0031_Person
void ex_0031_Person(void)
{
    Person personne[10]=
    {
        {"Knuth", "Donald", 1938},
        {"Kernighan", "Brian", 1942},
        {"Ritchie", "Dennis", 1941},
        {"Thompson", "Ken", 1943},
        {"Minsky", "Marvin", 1927},
        {"Dijkstra", "Edsger", 1930},
        {"Stroustrup", "Bjarne", 1950}
    };
    int nombre_person=0;
    for(int i = 0;i<10;++i)
    {
        if(personne[i].birthday==0)
        {
            break;
        }
        nombre_person++;
    }
    printf("%d Persons\n",nombre_person);

    printf("Persons less than 80 years old:\n");
    for(int i = 0;i<nombre_person;++i)
    {
        if((2026-personne[i].birthday)<80)
        {
            printf("%s %s %d\n",personne[i].prenom,personne[i].nom,2026-personne[i].birthday);
        }
        
    }
    
}