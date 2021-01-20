/*
 * File:   ShowDisp.c
 * Author: Daniel
 *
 * Created on 20 de Janeiro de 2021, 21:56
 */


#include <xc.h>
#define clear PORTB=0;
void ShowDisp(int value){
    clear
    if(value==0){
        RB0=1;
        RB1=1;
        RB2=1;
        RB3=1;
        RB4=1;
        RB5=1;
    }else if(value==1){
        RB2=1;
        RB1=1;
    }
    else if(value==2){
        RB0=1;
        RB1=1;
        RB6=1;
        RB4=1;
        RB3=1;
    }
    else if(value==3){
        RB0=1;
        RB1=1;
        RB2=1;
        RB3=1;
        RB6=1;
    }else if(value==4){
        RB1=1;
        RB2=1;
        RB5=1;
        RB6=1;
    }else if(value==5){
        RB0=1;
        RB2=1;
        RB3=1;
        RB5=1;
        RB6=1;
    }else if(value==6){
        RB0=1;
        RB2=1;
        RB3=1;
        RB4=1;
        RB5=1;
        RB6=1;
    }else if(value==7){
        RB0=1;
        RB1=1;
        RB2=1;
    }else if(value==8){
        PORTB=0xff;
    }else if(value==9){
        RB0=1;
        RB1=1;
        RB2=1;
        RB5=1;
        RB6=1;
    }
    
}
