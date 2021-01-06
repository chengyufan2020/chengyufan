#include<bits/stdc++.h>

char zero[7][6] = { 
                "*****",
                "*   *",
                "*   *",
                "*   *",
                "*   *",
                "*   *",
                "*****" };
char one[7][6] = { 
                "    *",
                "    *",
                "    *",
                "    *",
                "    *",
                "    *",
                "    *" };
char two[7][6] = { 
                "*****",
                "    *",
                "    *",
                "*****",
                "*    ",
                "*    ",
                "*****" };
char three[7][6] = { 
                "*****",
                "    *",
                "    *",
                "*****",
                "    *",
                "    *",
                "*****" };
char four[7][6] = { 
                "*   *",
                "*   *",
                "*   *",
                "*****",
                "    *",
                "    *",
                "    *" };
char five[7][6] = { 
                "*****",
                "*    ",
                "*    ",
                "*****",
                "    *",
                "    *",
                "*****" };
char six[7][6] = { 
                "*****",
                "*    ",
                "*    ",
                "*****",
                "*   *",
                "*   *",
                "*****" };
char seven[7][6] = { 
                "*****",
                "    *",
                "    *",
                "    *",
                "    *",
                "    *",
                "    *" };
char eight[7][6] = { 
                "*****",
                "*   *",
                "*   *",
                "*****",
                "*   *",
                "*   *",
                "*****" };
char nine[7][6] = { 
                "*****",
                "*   *",
                "*   *",
                "*****",
                "    *",
                "    *",
                "*****" };

int main(){
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++){	
		char arr[5];
        scanf("%s", arr);
        printf("%s:", arr);
        
        int len = strlen(arr);
        for (int j = 0; j < 7; j++){
            printf("\n");
            for (int k = 0; k < len; k++){
                switch (arr[k]){
				case '0':{ printf("%s", zero[j]); break;}
                case '1':{ printf("%s", one[j]); break;}
                case '2':{ printf("%s", two[j]); break;}
                case '3':{ printf("%s", three[j]); break;}
                case '4':{ printf("%s", four[j]); break;}
                case '5':{ printf("%s", five[j]); break;}
                case '6':{ printf("%s", six[j]); break;}
                case '7':{ printf("%s", seven[j]); break;}
                case '8':{ printf("%s", eight[j]); break;}
                case '9':{ printf("%s", nine[j]); break;}
            	}
            	printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
