#include <cs50.h>
#include <stdio.h>
#include <string.h>

// create a new data type called person
typedef struct {
    string name;
    string number;
} person;

int main(void) {
    
    // create an array of person named people
    person people[2];
    
    people[0].name = "Brain";
    people[0].number = "+1-617-495-1000";
    
    people[1].name = "David";
    people[1].number = "+1-949-468-2750";
    
    // string names[] = {"Brain", "David"};
    // string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    for (int i = 0; i < 2; i++) {
        if (strcmp(people[i].name, "David") == 0) {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}