// Experiment 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Bike{
    int bike_id;
    char *bike_model;
    float bike_price;
};

void inputBikes(int n, struct Bike bike[]){
    for(int i = 0; i < n; i++){
        bike[i].bike_model = ( char * ) malloc ( sizeof(char) * 20 );
        printf("\nEnter the ID, Model & Price of Bike #%d\n", i+1);
        scanf("%d %s %f", &bike[i].bike_id, bike[i].bike_model, &bike[i].bike_price);
    }
}

void displayBikes(int n, struct Bike bike[]){
    printf("\n--- Input Test! ---\n");
    for(int i = 0; i < n; i++){
        printf("\n\tBike #%d:\nID: %d\nModel: %s\nPrice %f\n",i+1, bike[i].bike_id, bike[i].bike_model, bike[i].bike_price);
    }
}

void showBike(int n, struct Bike bike[], int search){
    if(search!=-1)
        printf("ID: %d\nModel: %s\nPrice %f\n\n", bike[search].bike_id, bike[search].bike_model, bike[search].bike_price);
}

int retry(){
    char ch = 'n';
    printf("\nDo you wish to continue? Y to continue:\n");
    scanf("%c %c", &ch, &ch);
    if (ch == 'Y' || ch == 'y') return 1;   
    else {
        printf("\n Thanks for using the program! Goodbye!\n");
        return 0;
    }
}

int linearSearch(struct Bike bike[], int n, char * reqModel){
    for(int i = 0; i < n; i++){
        if( !strcmp(bike[i].bike_model, reqModel) )
            return i;
    }
    return -1;
}


int binarySearch(struct Bike bike[], int n, char * reqModel){
    int low = 0, high = n, mid = ( low + high )/2;
    while( low < high){
        if( !strcmp( reqModel, bike[mid].bike_model )  )
            return mid;
        if( strcmp( reqModel, bike[mid].bike_model ) > 0) // right side
            low = mid + 1;        
        else
            high = mid - 1;        
        mid = ( low + high )/2;
    }
    return -1;
}

int recursiveBinarySearch(struct Bike bike[], char * reqModel, int low, int high){
    int mid;    
    while( low < high ){
        mid = ( low + high )/2;    
    if(!strcmp( reqModel, bike[mid].bike_model ))
        return mid;    
    if( strcmp( reqModel, bike[mid].bike_model ) > 0) // right side
        return recursiveBinarySearch(bike, reqModel, mid + 1, high);    
    else
        return recursiveBinarySearch(bike, reqModel, low, mid - 1);
    }
    if( high > low )
        return -1;
}

int main(){
    int i = -1, n, ch, opt, low = 0, high;
    char *model;
    model = (char *) malloc ( sizeof(char) * 20 );
    struct Bike bike[100];
    printf("\nEnter the number of bikes: ");
    scanf("%d", &n);
    inputBikes(n, bike);
    printf("\n\tMenu:\n1. Linear Search\n2. Binary Search\n3. Recursive Binary Search\n4. Exit\n\nEnter your choice: ");
    scanf("%d", &opt);
    switch (opt){
        case 1: { // Linear Search
            printf("\n\nEnter the Bike Model that you wish to search:\n");
            scanf("%s", model);
            i = linearSearch(bike, n, model);
            if( i >= 0 ){
                printf("\n%s is found at index: %d\n\n", model, i);
                showBike(n, bike, i);
            }
            else if( i == -1)
                printf("\n%s is not found!\n\n", model);
            if( retry() )
                main();
            break;
        }
        
        case 2: {   // Binary Search
            printf("\n\nEnter the Bike Model that you wish to search:\n");
            scanf("%s", model);
            i = binarySearch(bike, n, model);
            if( i >= 0 ){
                printf("\n%s is found at index: %d\n\n", model, i);
                showBike(n, bike, i);
            }
            else if( i == -1)
                printf("\n%s is not found!\n\n", model);
            if( retry() )
                main();
            break;
        }
        case 3: {   // Recursive Binary Search
            high = n - 1;
            printf("\n\nEnter the Bike Model that you wish to search:\n");
            scanf("%s", model);
            i =  recursiveBinarySearch(bike, model, low, high);
            if( i >= 0 ){
                printf("\n%s is found at index: %d\n\n", model, i);
                showBike(n, bike, i);
            }
            else if( i == -1)
                printf("\n%s is not found!\n\n", model);
            if( retry() )
                main();
            break;
        }

        case 4: {   //Exit
            printf("\n Thanks for using the program! Goodbye!\n\n");
            exit(0);
            break;
        }

        default: {
            printf("\n\nPlease enter a valid input.\n");
            if( retry() )
                main();
            break;
        }
            
    }
}
