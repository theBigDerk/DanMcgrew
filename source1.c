#include<stdio.h>

int dist; //distance between them
int w; //whether you've won or lost yet (1 means you win, 2 means you lose)

int main() {
    dist=200;
    w=0;
    printf("You stand 200 paces from the legendary outlaw \n DAN MCGREW");
    getchar();
    printf("\n\nIn a drunken haze you challenged him to a duel...");
    getchar();
    printf("\n\nGood Luck");
    getchar();
    int bullets = 6;
    do {
    turnst(&bullets);
    if (w<1) {
        dan();
    }
    getchar();
    } while (w<1);
}

int yshot(bullets) {
    int hit;
    printf("\nA shot rings out!");
    getchar();
    int *b = bullets;
    if (*b>0) {
            *b=*b-1;
    if (rand() %100<(1500/dist)) {
        w=1;
        printf("\nYou hit him!");
        getchar();
        printf("\nHe's down!");
        getchar();
        printf("\nCongrats, player. You have defeated Dan McGrew.");
    } else {
        w=0;
        printf("\nIt was close, I think...");
    }
    } else {
    printf("\n*click*");
    printf("\nYou're out of ammo");
    }
return(0);
}

int turnst(bulrem) {
    int a;
    printf("\nYou stand %d paces from McGrew. Do you shoot (0) or step forward(1)?",dist);
    scanf("%d",&a);

    if (a==0) {
        yshot(bulrem);
    }

    if (a==1) {
        dist=dist-1;
        printf("\nOne brave step forward...\n");
    }
return(0);
}

int dan() {
    if (rand() %100<(5000/dist)) {
        //he shoots
        printf("\nA shot rings out!");
        if (rand() %100<(1500/dist)) {
        w=1;
        printf("\nYou feel an impact in your abdomen!\n");
        getchar();
        printf("\nReaching down, you feel blood...\n");
        getchar();
        printf("\nRest in peace, player. You're one of Dan McGrew's many kills.");
    } else {
        w=0;
        printf("\nA bullet whizzes by your head!");
    }
    } else {
        dist=dist-1;
        printf("\nDan takes a step forward...\n");
    }
    return(0);
}
