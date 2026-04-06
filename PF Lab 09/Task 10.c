#include <stdio.h>

int basic(int dmg, int hp)       { printf("Basic attack! -%d HP\n", dmg); return hp - dmg; }
int strike(int dmg, int hp)      { printf("Power strike! -%d HP\n", (int)(dmg * 2.5)); return hp - (int)(dmg * 2.5); }
int healUp(int dmg, int hp)      { printf("Heal! +20 HP\n"); return hp + 20; }
int poison(int dmg, int hp)      { printf("Poison attack! -%d HP\n", dmg / 2); return hp - dmg / 2; }

int main()
{
    int hp = 100;
    int dmg = 25;
    int choice;
    int (*act)(int, int);

    for(int t = 1; t <= 3; t++)
    {
        printf("\nTurn %d | Current HP: %d\n", t, hp);
        printf("1. Basic\n2. Power Strike\n3. Heal\n4. Poison\n");
        printf("Select action: ");
        scanf("%d", &choice);

        if(choice == 1) act = basic;
        else if(choice == 2) act = strike;
        else if(choice == 3) act = healUp;
        else act = poison;

        hp = act(dmg, hp);
        printf("HP now: %d\n", hp);
    }

    printf("\nBattle over. Final HP: %d\n", hp);

    return 0;
}
