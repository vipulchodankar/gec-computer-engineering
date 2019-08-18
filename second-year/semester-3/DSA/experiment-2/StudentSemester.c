#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct semester{
    int marks[6], total;
};

struct student{
    char *name;
    int rollno, numberofyears;
    char *class;
    float percentage;
    struct semester sem[8];
};

int init(struct student s[], int n){
    int ns;
    for( int i = 0; i < n ; i++ ){
        s[i].name = (char *) malloc (20 * sizeof(char)); //Max Name Length taken as 20
        s[i].class = (char *) malloc (20 * sizeof(char)); //Max Class Length taken as 20

        printf("\nEnter Student %d's Name: ",i+1);
        scanf("%s", s[i].name);
        printf("\nEnter Student %d's Roll Number: ",i+1);
        scanf("%d", &s[i].rollno);
        printf("\nEnter The Number of Semesters: ");
        scanf("%d", &ns);
        
        s[i].numberofyears=ns/2;
        for( int j=0 ; j < ns ; j++ ){ //Semester Loop
            printf("\nEnter The Marks for Semester %d:\n", j+1);
            for( int k=0 ; k<6 ; k++ ){ //Marks Loop
                scanf("%d", &s[i].sem[j].marks[k]);
            }
        }
    }
    return ns;
}

void display(struct student s[], int n, int ns){
    printf("\nName:\tRoll No:\tClass\tPercentage\tMarks\n\n");
    for(int i=0; i<n; i++){
        printf("%s\t%d\t%s\t%f\t", s[i].name, s[i].rollno, s[i].class, s[i].percentage);
        
        for(int j=0; j<ns; j++){ //Semester Loo p
            printf("Sem %d: ",j+1);
            for(int k=0; k<6; k++){ //Marks Loop
                printf("%d ",s[i].sem[j].marks[k]);
            }
            printf("\t");
        }
        
        printf("\n");
    }

    printf("\n");
}

void cal(struct student s[], int n, int ns){
    int sem_total = 0, year_total = 0, flag = 0;
    float avg = 0;

    for( int i = 0; i < n; i++ ){
        year_total = 0;
        flag = 0;
        for( int j = 0; j < ns; j++ ){ //Semester Loop
            sem_total=0;
            for(int k=0; k<6; k++){ //Marks Loop
                if( s[i].sem[j].marks[k] < 40 )
                    flag = 1;

                sem_total += s[i].sem[j].marks[k];
            }
            s[i].sem[j].total = sem_total;
            year_total += sem_total;
        }
        
        avg = ( (float)year_total / (600.00*ns) ) * 100.00;
        s[i].percentage = avg;

        if( flag == 1 )
            strcpy(s[i].class, "Fail");
        else if( avg > 70.00 )
            strcpy(s[i].class, "Distinction");
        else if( avg > 60.00 )
            strcpy(s[i].class, "First Class");
        else if( avg > 50.00 )
            strcpy(s[i].class, "Second Class");
        else
            strcpy(s[i].class, "Fail");
    }
}

int main(){
    struct student stud[10];
    struct student *st;
    int n, ns;
    st = stud;

    printf("\nEnter Number of Students: ");
    scanf("%d", &n);

    ns = init(st, n);
    cal(st, n, ns);
    display(st, n, ns);
}