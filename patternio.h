#include<stdio.h>
void patternof(char alpha){
    printf("\n");
    for(int i=0;i<=6;i++){
        for(int j=0;j<=4;j++){
        //A
        if(alpha=='A'){
            if((i==0 && j==0) ||(i==0 && j==4) ||((i==1 || i==2 || i==4 || i==5 || i==6)&&(j==1 || j==2 || j==3))) {
                printf("  ");
            } else printf("# ");
        }
        //a
        if(alpha=='a'){
            if(((j==0||j==3)&&(i>=3&&i<=5))||((j==1||j==2)&&(i==2||i==6))||(i==6&&j==4)){
                printf("# ");
            } else printf("  ");
        }
        //B
        if(alpha=='B'){
            if(((i==0 || i==3 || i==6)&&(j==4))||((i==1 || i==2 || i==4 || i==5) && (j==1 || j==2 || j==3))){
               printf("  ");
            } else printf("# ");
        }
        //b
        if(alpha=='b'){
            if((j==0&&i!=0)||((j==1||j==2)&&(i==3||i==6))||(j==3)&&(i==4||i==5)){
               printf("# ");
            } else printf("  ");
        }
        //C
        if(alpha=='C'){
            if(((i==0 || i==6 )&&(j==0 || j==4)) ||((i>=1 && i<=5)&&(j==1 || j==2 || j==3))||((i==2 || i==3 || i==4)&&j==4)){
               printf("  ");    
            } else printf("# ");
        }
        //c
        if(alpha=='c'){
            if((j==1||j==2)&&(i==2||i==6)||((j==0&&(i==3||i==4||i==5)))||((j==3&&(i==3||i==5)))){
               printf("# ");
            } else printf("  ");
        }        
        //D
        if(alpha=='D'){
            if(((i==0 || i==6)&&(j==4))||((i==1||i==2||i==3||i==4||i==5)&&(j==1 || j==2 || j==3))){
               printf("  ");    
            } else printf("# ");
        }
        //d
        if(alpha=='d'){
            if((j==3&&i!=0)||((i==3||i==6)&&(j==1||j==2))||((j==0&&(i==4||i==5)))){
               printf("# ");    
            } else printf("  ");
        }        
        //E
        if(alpha=='E'){
            if(((i==1||i==2||i==4||i==5)&&(j>=1 && j<=4))||((i==3)&&j==4)){
                printf("  ");    
            } else printf("# ");
        }
        //e
        if(alpha=='e'){
            if(((i==3||i==4||i==5)&&(j==0))||(i==6&&(j==1||j==2||j==3))||((i==2||i==4)&&(j==1||j==2))||((i==3||i==4)&&(j==3))){
                printf("# ");    
            } else printf("  ");
        }        
        //F
        if(alpha=='F'){
             if(((i==1||i==2||i==4||i==5||i==6)&&(j>=1 && j<=4))||((i==3)&&j==4)){
                printf("  ");    
            } else printf("# ");
        }
        //f
        if(alpha=='f'){
             if((j==1&&i>=2)||((i==1||i==4)&&(j==2||j==3))){
                printf("# ");    
            } else printf("  ");
        }        
        //G
        if(alpha=='G'){
            if(((i==0 || i==6 )&&(j==0 || j==4))||((i==1 || i==2 || i==3 ||i==5)&&(j==1||j==2||j==3))||(i==3&&j==4)||(i==4&&j==1)){
                printf("  ");   
            } else printf("# ");
        }
        //g
        if(alpha=='g'){
            if(((i==1||i==4||i==6)&&(j==1||j==2))||((i==2||i==3)&&j==0)||(j==3&&(i>=2&&i<=5))){
                printf("# ");   
            } else printf("  ");
        }        
        //H
        if(alpha=='H'){
            if(i==3 || j==0 ||j==4){
                 printf("# ");   
            } else printf("  ");
        }
        //h
        if(alpha=='h'){
            if((j==0&&i!=0)||(i==3&&(j!=3&&j!=4))||(j==3&&i>=4)){
                 printf("# ");   
            } else printf("  ");
        }        
        //I
        if(alpha=='I'){
            if((i>=1 && i<=5)&&(j!=2)){
                 printf("  ");         
            } else printf("# ");
        }
        //i
        if(alpha=='i'){
            if((j==2&&(i!=0&&i!=2))){
                 printf("# ");         
            } else printf("  ");
        }
        //J
        if(alpha=='J'){
            if((j==0&&(i==4 || i==5))||((i==0||i==6)&&(j>=1&&j<=3))||((i>=0&&i<=5)&& j==4)){
                  printf("# ");   
            } else printf("  ");    
        }
        //j
        if(alpha=='j'){
            if((j==0&&i==5)||(i==6&&(j==1||j==2))||(j==3&&(i!=1&&i!=6))){
                  printf("# ");   
            } else printf("  ");    
        }
        //K
        if(alpha=='K'){
            if(((i>=0&&i<=6)&&j==0)||((i+j==4)||(i==4&&j==2)||(i==5&&j==3)||(i==6&&j==4))){
                printf("# ");
            } else printf("  ");
        }
        //k
        if(alpha=='k'){
            if((j==0&&i!=0)||((i==2||i==6)&&j==3)||((i==3||i==5)&&j==2)||(i==4&&j==1)){
                printf("# ");
            } else printf("  ");
        }
        //L
        if(alpha=='L'){
            if((i==6)||j==0){
                printf("# ");
            } else printf("  ");
        }
        //l
        if(alpha=='l'){
            if(j==2&&i!=0){
                printf("# ");
            } else printf("  ");
        }
        //M
        if(alpha=='M'){
            if((j==0||j==4)||((i==1&&(j==1||j==3))||(i==2&&j==2))){
                printf("# ");
            } else printf("  ");
        }
        //m
        if(alpha=='m'){
            if((i>=3&&(j==0||j==4))||(i==2&&(j==1||j==3))||(i==3&&j==2)){
                printf("# ");
            } else printf("  ");
        }
        //N
        if(alpha=='N'){
            if((j==0||j==4)||(i==2&&j==1)||(i==3&&j==2)||(i==4&&j==3)){
                printf("# ");
            } else printf("  ");
        }
        //n
        if(alpha=='n'){
            if((i>=3&&(j==0||j==3))||(i==2&&(j==0||j==2))||(i==3&&j==1)){
                printf("# ");
            } else printf("  ");
        }
        //O
        if(alpha=='O'){
            if(((i==0 || i==6 )&&(j==0 || j==4))||((i>=1&&i<=5)&&(j==1||j==2||j==3))){
                printf("  ");
            } else printf("# ");
        }
        //o
        if(alpha=='o'){
            if(((i==3||i==4||i==5)&&(j==0||j==3))||((i==2||i==6)&&(j==1||j==2))){
                printf("# ");
            } else printf("  ");
        }
        //p
        if(alpha=='P'){
            if(j==0 || ((i==0||i==3)&&j!=4)||(j==4 &&(i==1||i==2))){
                printf("# ");
            } else printf("  ");
        }
        //p
        if(alpha=='p'){
            if((j==0&&i!=0) || ((i==1||i==4)&&(j!=4&&j!=3))||(j==3 &&(i==2||i==3))){
                printf("# ");
            } else printf("  ");
        }
        //Q
        if(alpha=='Q'){
            if(((i==0||i==5)&&(j>=1&&j<=3))||((j==0||j==4)&&(i>=1&&i<=4))||(i==4&&j==2)||(i==6&&j==4)){
                printf("# ");
            } else printf("  ");
        }
        //q
        if(alpha=='q'){
            if((j==3&&i!=0) || ((i==1||i==4)&&(j!=4&&j!=0))||(j==0 &&(i==2||i==3))){
                printf("# ");
            } else printf("  ");
        }
        //R
        if(alpha=='R'){
            if(j==0||(i==0)||(i==3&&j!=4)||(i==4&&j==2)||(i==5&&j==3)||(i==6&&j==4)||((i==1||i==2)&&j==4)){
                printf("# ");
            } else printf("  ");
        } 
        //r
        if(alpha=='r'){
            if(((j==0&&i>=2))||((i==2&&(j==2||j==3)))||(i==3&&j==1)){
                printf("# ");
            } else printf("  ");
        } 
        //S
        if(alpha=='S'){
            if((i==j+1)||((i==0||i==6)&&(j>=1&&j<=3))||((i==4||i==5)&&j==0)||((i==1||i==2)&&j==4)){
                printf("# ");
            } else printf("  ");
        } 
        //s
        if(alpha=='s'){
            if(((i==1||i==6)&&(j==1||j==2))||((j==0||j==3)&&(i==2||i==5))||((i==3&&j==1)||(i==4&&j==2))){
                printf("# ");
            } else printf("  ");
        }
        //T
        if(alpha=='T'){
            if(i==0||j==2){
                printf("# ");
            } else printf("  ");
        }  
        //t
        if(alpha=='t'){
            if((j==1&&(i!=0&&i!=6))||((i==3||i==6)&&(j==2||j==3))){
                printf("# ");
            } else printf("  ");
        }
        //U
        if(alpha=='U'){
            if(((j==0||j==4)&&i!=6)||(i==6&&(j>=1&&j<=3))){
                printf("# ");
            } else printf("  ");
        }
        //u
        if(alpha=='u'){
            if((((j==0||j==3)&&(i!=0&&i!=1))&&i!=6)||(i==6&&(j==1||j==2))){
                printf("# ");
            } else printf("  ");
        }  
        //V
        if(alpha=='V'){
            if(((j==0||j==4)&&(i!=6&&i!=5))||(i==5&&(j==1||j==3))||(i==6&&j==2)){
                printf("# ");
            } else printf("  ");
        }  
        //v
        if(alpha=='v'){
            if(((i>=2&&i<=4)&&(j==0||j==4))||((i==5)&&(j==1||j==3))||(i==6&&j==2)){
                printf("# ");
            } else printf("  ");
        }         
        //W
        if(alpha=='W'){
            if((j==0||j==4)||((i==4&&j==2)||(i==5&&(j==1||j==3)))){
                printf("# ");
            } else printf("  ");
        }
        //w
        if(alpha=='w'){
            if(((i==6)&&(j==1||j==3))||(i==5&&j==2)||((i>=2&&i<=5)&&(j==0||j==4))){
                printf("# ");
            } else printf("  ");
        }        
        //X
        if(alpha=='X'){
            if(((j==0||j==4)&&((i!=2&&i!=3)&&i!=4))||(i==j+1)||(i+j==5)){
                printf("# ");
            } else printf("  ");
        }  
        //x
        if(alpha=='x'){
            if((i==j+2)||(i+j==6)){
                printf("# ");
            } else printf("  ");
        }         
        //Y
        if(alpha=='Y'){
            if((j==2&&i>=3)||((j==0||j==4)&&i<=1)||(i==2&&(j==1||j==3))){
                printf("# ");
            } else printf("  ");
        } 
        //y
        if(alpha=='y'){
            if((j==2&&i>=3)||(i==2&&(j==1||j==3))||(i==1&&(j==0||j==4))){
                printf("# ");
            } else printf("  ");
        }         
        //Z
        if(alpha=='Z'){
            if((i+j==5)||i==0||i==6){
                printf("# ");
            } else printf("  ");
        }
        //z
        if(alpha=='z'){
            if((i==2||i==6)||i+j==6){
                printf("# ");
            } else printf("  ");
        }
        if(alpha==' '){
            printf("  ");
        }                                                                          
        }
        printf("\n");
    }
    return ;
}