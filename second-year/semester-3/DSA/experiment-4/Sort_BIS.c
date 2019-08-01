#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Player{
    char *name;
    int jid;
};

void DisplayAll(struct Player Players[], int n){
    for( int i = 0 ; i < n ; i++ )
        printf("\n%d\t%s\t%d\n", i, Players[i].name, Players[i].jid );
}

void SelectionSortName(struct Player Players[], int n)
{
    int i, j, min;
    struct Player temp;

    for( i = 0 ; i < n - 1 ; i++ )
    {

        min = i;
        for( j = i +1 ; j < n ; j++ )
        {
            if( strcmp( Players[min].name, Players[j].name ) > 0 )
                min = j;
        }

        if( min != i ){
            temp = Players[i];
            Players[i] = Players[min];
            Players[min] = temp;
        }
    }
}

void SelectionSortId(struct Player Players[], int n)
{
    int i, j, min;
    struct Player temp;

    for( i = 0 ; i < n - 1 ; i++ )
    {

        min = i;
        for( j = i +1 ; j < n ; j++ )
        {
            if( Players[min].jid > Players[j].jid )
                min = j;
        }

        if( min != i ){
            temp = Players[i];
            Players[i] = Players[min];
            Players[min] = temp;
        }
    }
}

void BubbleSortName(struct Player Players[], int n)
{
    int i, j, exchanges;
    struct Player temp;
    
    for( i = 0 ; i < n - 1 ; i++)
    {
        exchanges = 0;

        for( j = 0; j < n - i - 1 ; j++)
        {
            if( strcmp( Players[j].name, Players[j+1].name ) > 0 )
            {
                temp = Players[j];
                Players[j] = Players[j+1];
                Players[j+1] = temp;

                exchanges++;
            }
        }

        if( exchanges == 0 )
            break;
    }

}

void BubbleSortId(struct Player Players[], int n)
{
    int i, j, exchanges;
    struct Player temp;
    
    for( i = 0 ; i < n - 1 ; i++)
    {
        exchanges = 0;

        for( j = 0; j < n - i - 1 ; j++)
        {
            if( Players[j].jid > Players[j+1].jid )
            {
                temp = Players[j];
                Players[j] = Players[j+1];
                Players[j+1] = temp;

                exchanges++;
            }
        }

        if( exchanges == 0 )
            break;
    }
}

void InsertionSortName(struct Player Players[], int n)
{
    int i, j;
    struct Player temp;

    for( i = 1 ; i < n ; i++)
    {
        temp = Players[i];

        for( j = i - 1 ; ( ( j >= 0 ) && ( strcmp( temp.name, Players[j].name ) < 0 ) ) ; j-- )
            Players[j+1] = Players[j];
        
        Players[j+1] = temp;
    }
}

void InsertionSortId(struct Player Players[], int n)
{
    int i, j;
    struct Player temp;

    for( i = 1 ; i < n ; i++)
    {
        temp = Players[i];

        for( j = i - 1 ; ( ( j >= 0 ) && ( temp.jid < Players[j].jid ) ) ; j-- )
            Players[j+1] = Players[j];
        
        Players[j+1] = temp;
    }
}

int main()
{
    int ch, n=7;
    struct Player Players[] =
    {
        {"DFG", 12},
        {"ABC", 14},
        {"DXC", 44},
        {"FAG", 42},
        {"BFQ", 82},
        {"FFG", 22},
        {"DAF", 62}
    };

    printf("\n1. Selection Sort on the name\n2. Selection Sort on the id\n3. Bubble Sort on the name\n4. Bubble Sort on the id\n5. Insertion Sort on the name\n6. Insertion Sort on the id\n7. Exit\n\nEnter Choice: ");
    scanf("%d", &ch);

    printf("\nUnsorted Array:\n");
    DisplayAll(Players, n);

    switch(ch)
    {
    case 1:
        SelectionSortName(Players, n);

        printf("\nSorted Array (Selection Sort | name):\n");
        DisplayAll(Players, n);
        break;
    
    case 2:
        SelectionSortId(Players, n);

        printf("\nSorted Array (Selection Sort | jid):\n");
        DisplayAll(Players, n);

        break;

    case 3:
        BubbleSortName(Players, n);

        printf("\nSorted Array (Bubble Sort | name):\n");
        DisplayAll(Players, n);

        break;

    case 4:
        BubbleSortId(Players, n);

        printf("\nSorted Array (Bubble Sort | jid):\n");
        DisplayAll(Players, n);

        break;

    case 5:
        InsertionSortName(Players, n);

        printf("\nSorted Array (Insertion Sort | name):\n");
        DisplayAll(Players, n);

        break;

    case 6:
        InsertionSortId(Players, n);

        printf("\nSorted Array (Insertion Sort | jid):\n");
        DisplayAll(Players, n);

        break;

    case 7: 
        exit(1);
        break;

    default:
        printf("\nPlease Enter a valid input.");
        break;
    }

}