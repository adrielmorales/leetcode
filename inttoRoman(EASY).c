int romanToInt(char * s){
    int strlen = 0; 
    int romanInteger = 0;
    int flag = 0;


    while(s[strlen] != NULL){
        flag = 0;
        s[strlen];
        if(s[strlen] == 'I'){
            if(s[strlen+1] == 'V'){
                romanInteger+=(5 - 1);
                strlen+=1;
                flag+=1;
            }
            if(s[strlen+1] == 'X'){
                romanInteger+=(10 - 1);
                strlen+=1;
                flag+=1;
            }
            if(flag < 1){
                romanInteger+=1;    
            }       
        }

        if(s[strlen] == 'V' && s[strlen] != NULL && flag < 1){
            romanInteger+=5;
        }

        if(s[strlen] == 'X' && s[strlen] != NULL && flag < 1){
            if(s[strlen+1] == 'L'){
                romanInteger+=(50 - 10);
                strlen+=1;
                flag+=1;
            }
            if(s[strlen+1] == 'C'){
                romanInteger+=(100 - 10);
                strlen+=1;
                flag+=1;
            }
            if(flag < 1){
                romanInteger+=10;    
            } 
        }

        if(s[strlen] == 'C' && s[strlen] != NULL && flag < 1){
            if(s[strlen+1] == 'D'){
                romanInteger+=400;
                strlen+=1;
                flag+=1;
            }
            if(s[strlen+1] == 'M'){
                romanInteger+=900;
                strlen+=1;
                flag+=1;
            }
            if(flag < 1){
                romanInteger+=100;    
            }     
            
        }
        if(s[strlen] == 'L' && s[strlen] != NULL && flag < 1){
            romanInteger+=50;
        }
        if(s[strlen] == 'D' && s[strlen] != NULL && flag < 1){
            romanInteger+=500;
        }
        if(s[strlen] == 'M' && s[strlen] != NULL && flag < 1){
            romanInteger+=1000;
        }

        strlen+=1;
    }

    return romanInteger;
}