#include <stdio.h>
#include <string.h>

int main()
{

    char place[50];
    char color[50];
    char number[50];
    char body_part[50];
    char emotion[50];
    char food[50];
    char verb[50];
    char hobby[50];
    char animal[50];
    char name[50];
    char vehicle[50];

    printf("Enter a place: ");
    fgets(place, sizeof(place), stdin);
    place[strlen(place) - 1] = '\0';

    printf("Enter a color: ");
    fgets(color, sizeof(color), stdin);
    color[strlen(color) - 1] = '\0';

    printf("Enter a number: ");
    fgets(number, sizeof(number), stdin);
    number[strlen(number) - 1] = '\0';

    printf("Enter a body part: ");
    fgets(body_part, sizeof(body_part), stdin);
    body_part[strlen(body_part) - 1] = '\0';

    printf("Enter an emotion: ");
    fgets(emotion, sizeof(emotion), stdin);
    emotion[strlen(emotion) - 1] = '\0';

    printf("Enter a food: ");
    fgets(food, sizeof(food), stdin);
    food[strlen(food) - 1] = '\0';

    printf("Enter a verb - ing: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter a hobby: ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strlen(hobby) - 1] = '\0';

    printf("Enter an animal: ");
    fgets(animal, sizeof(animal), stdin);
    animal[strlen(animal) - 1] = '\0';

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter a vehicle: ");
    fgets(vehicle, sizeof(vehicle), stdin);
    vehicle[strlen(vehicle) - 1] = '\0';

    printf("\nYour Mad Lib Story:\n\n");
    printf("Once upon a time in %s, there lived a curious traveler who always wore a %s scarf name %s.\n", place, color, name);
    printf("One day %s found %s mysterious tokens hidden under %s old bench — there were exactly %s of them.\n", name, color, place, number);
    printf("With a sudden pain in their %s and feeling unexpectedly %s, %s decided to set off on an adventure.\n", body_part, emotion, name);
    printf("They hopped into a beaten-up %s and drove toward the edge of town, humming a tune about %s and %s.\n", vehicle, hobby, verb);
    printf("Along the way they met a talking %s who claimed to know where the tokens came from.\n", animal);
    printf("The two shared a picnic of %s while the %s recounted a legend about a hidden door behind the waterfall.\n", food, animal);
    printf("Determined, %s and the %s followed a trail of blue stones that led them deep into a forest near %s.\n", name, animal, place);
    printf("As night fell, %s practiced %s to stay calm while %s kept watch; their friendship grew stronger with every step.\n", name, hobby, animal);
    printf("At last they reached an ancient gate engraved with the same symbol as the tokens; %s placed a token into the lock and it creaked open.\n", name);
    printf("Inside they discovered a chamber filled with tiny %s lights and a diary that told of heroes who once rode a %s across the sky.\n", color, vehicle);
    printf("They realized that the journey — the small acts of kindness, the laughs, the shared %s — mattered more than the treasure itself.\n", food);
    printf("So %s and the %s returned home with the tokens, forever changed, and every time they met they remembered how brave and %s they had been.\n", name, animal, emotion);

    printf("\nThe end.\n");

    return 0;
}