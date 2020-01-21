#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inputData(char * names[], int n)
{
    char * temp;
    temp = (char*) malloc ( sizeof(char) * 25 );

    printf("\nEnter %d names:\n", n);
    for(int i=0;i<n;i++){
        scanf("%s", temp);
        names[i] = (char*) malloc ( sizeof(char) * ( strlen(temp) + 1 ) );
        strcpy(names[i], temp);
    }
}

void outputData(char * names[], int n)
{
    printf("\n\nArray Output:\n\n", n);
    for(int i=0;i<n;i++)
            printf("%s\n", names[i]);
}

void shellSort(char * names[], int n, int incr)
{
    int i = 0, j;
    char *temp;

    while ( incr >= 1 )
    {

        for( i = incr ; i < n ; i++ )
        {
            temp = (char*) malloc ( sizeof(char) * ( strlen(names[i]) + 1 ) );
            strcpy(temp, names[i]);

            for( j = i - incr ; j>=0 && ( strcmp(temp, names[j]) < 0 ); j=j-incr )
                strcpy(names[j+incr], names[j]);

            strcpy(names[j+incr], temp);
        }

        incr -= 2;
    }
    
    
}

void mergeSort()
{

}

void mergeSortR()
{
    
}

void quickSort()
{

}

int main(){
    int n, opt, incr;

    printf("Enter number of names: ");
    scanf("%d",&n);

    char * names[n];

    inputData(names, n);

    printf("\n1. Shell Sort\n2. Merge Sort - Iterative\n3. Merge Sort - Recursive\n4. Quick Sort\nChoose option: ");
    scanf("%d", &opt);

    switch (opt)
    {
        case 1:
            printf("\nEnter Increment Value:\n");
            scanf("%d", &incr);

            shellSort(names, n, incr);

            printf("\n\nSorted Array | Shell Sort:\n", n);
            outputData(names, n);
            break;

        case 2:
            mergeSort();

            printf("\n\nSorted Array | Merge Sort Iterative:\n", n);
            outputData(names, n);
            break;

        case 3:
            mergeSortR();
            printf("\n\nSorted Array | Merge Sort Recursive:\n", n);
            outputData(names, n);
            break;

        case 4:
            quickSort();
            printf("\n\nSorted Array | Quick Sort:\n", n);
            outputData(names, n);
            break;


        default:
            printf("\nEnter a valid option.\n");
            break;
    }
}   