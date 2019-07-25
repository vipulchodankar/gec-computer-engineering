#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

struct date{
    int dob, mob, yob;
};

struct employee{
	int id;
    struct date birth;
};			

void InputData(struct employee *temp){
    printf("\nEnter Employee ID: ");
	scanf("%d", &temp->id);
	printf("\nEnter Day of Birth: ");
	scanf("%d", &temp->birth.dob);
	printf("\nEnter Month of Birth: ");
	scanf("%d", &temp->birth.mob);
	printf("\nEnter Year of Birth: ");
	scanf("%d", &temp->birth.yob);
}

void GetSysDate(struct date *Sys){
    time_t now;
	time(&now);
	struct tm *local = localtime(&now);

    Sys->dob = local->tm_mday;
    Sys->mob = local->tm_mon + 1;
    Sys->yob = local->tm_year + 1900;
}

int main(){

//	Code to Fetch Employee info
	struct employee e;
	InputData(&e);

//	Code to fetch System Time
//	int Sys.dob, sysMonth, sysYear;
    struct date Sys;
    GetSysDate(&Sys);
	printf("\n\tSystem Date: %d %d %d\n", Sys.dob, Sys.mob, Sys.yob);

//	Code to Calclulate Time till birthday
//	int Req.dob, Req.mob;
    struct date Req;
    Req.yob=0;

//	Sys.mob < e.birth.mob
	Req.dob = (e.birth.mob * 30 + e.birth.dob) - (Sys.mob * 30 + Sys.dob) ;
	Req.mob = abs(Req.dob/30);
	Req.dob = Req.dob%30;

	if(Sys.mob >= e.birth.mob){
		Req.dob = 12 * 30 - (Sys.mob * 30 + Sys.dob) + (e.birth.mob * 30 + e.birth.dob);
		Req.mob = abs(Req.dob/30);
		Req.dob = Req.dob%30;
	}
	
	printf("\n\tTime till birthday = %d Days and %d Months\n\n", Req.dob, Req.mob);
}