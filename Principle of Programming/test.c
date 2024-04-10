#include<string.h>

int* countVowels(const char* string){
    char *current = string;
    // init result array
    int *freqCount = (int*)calloc(5,sizeof(int));
    do{
        *freqCount = 0;
    } while(++freqCount < 5);
    // count freq
    while(*current != NULL){
        switch(*current){
            case 'a':{*freqCount += 1;}
            case 'e':{*(freqCount+1) += 1;}
            case 'i':{*(freqCount+2) += 1;}
            case 'o':{*(freqCount+3) += 1;}
            case 'u':{*(freqCount+4) += 1;}
            default: break;
        }
        current ++;
    }
    return freqCount;
}

int** arrayCopy(int arr[], int size){
    int *start = &(arr[0]);
    int **copiedArray = (int**)calloc(size, sizeof(int*));
    for(int i = 0; i < size; i++){
        *(copiedArray + i) = start + i;
    }
    return copiedArray;
}