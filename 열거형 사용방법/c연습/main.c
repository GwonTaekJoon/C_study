//
//  main.c
//  c연습
//
//  Created by 권택준 on 21/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>

typedef enum syllable{
    Do = 1, Re = 2, Mi = 3, Fa = 4, So=5, La=6, Ti=7
} Syllable;
void Sound(Syllable sy){
    switch(sy){
        case Do:
            puts("도"); return;
        case Re:
            puts("레"); return;
        case Mi:
            puts("미"); return;
        case Fa:
            puts("파"); return;
        case So:
            puts("솔"); return;
        case La:
            puts("라"); return;
        case Ti:
            puts("시"); return;
    }
}
int main() {
    Syllable tone;
    for(tone=Do; tone<=Ti; tone+=1){
        Sound(tone);
    }
    return 0;
}
