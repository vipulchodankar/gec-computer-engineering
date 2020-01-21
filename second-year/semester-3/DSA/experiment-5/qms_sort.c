#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void shellSort(char item[][10],  int n) {
	int i, j, k, a, b=0;
	char temp[10];
	for (i=n/2;i>0;i=i/2) {
        for (j=i;j<n;j++) {
            for(k=j-i;k>=0;k=k-i){
                if (strcmp(item[k+i], item[k])>0)
                    break;
                else {
                    strcpy(temp, item[k]);
                    strcpy(item[k], item[k+i]);
                    strcpy(item[k+i], temp);
                }
            }
        }
        // printf("\nPass %d ", ++b);
        for (a=0;a<10;a++)
        	printf("%s ", item[a]);

				printf("\n");
    }
}

void mergeSorti(char item[][10],  int n) {
	int i, j, k, s, l1, l2, h1, h2, a, b=0;
	char temp[10][10];
	for(s=1;s<n;s=s*2) {
		l1=0;
		k=0;
		while(l1+s<n) {
			h1=l1+s-1;
			l2=h1+1;
			h2=l2+s-1;
			if(h2>=n) 
				h2=n-1;
			i=l1;
			j=l2;
			while(i<=h1 && j<=h2 ) {
				if(strcmp(item[i], item[j])<0)
					strcpy(temp[k++], item[i++]);
				else
					strcpy(temp[k++], item[j++]);
			}
			while(i<=h1)
				strcpy(temp[k++], item[i++]);
			while(j<=h2)
				strcpy(temp[k++], item[j++]);
			l1=h2+1; 
		}
		for(i=l1;k<n;i++) 
			strcpy(temp[k++], item[i]);
		for(i=0;i<n;i++)
			strcpy(item[i], temp[i]);
		// printf("\nPass %d ", ++b);
    	for (a=0;a<10;a++)
			printf("%s ", item[a]);

		printf("\n");
	}
}

void mergeSortr(char item[][10],  int l,  int m,  int h) {
	char temp[10][10];
	int i=l, j=m+1, k=0;
	while(i<=m && j<=h) {
		if(strcmp(item[i], item[j])<0)
			strcpy(temp[k++], item[i++]);
		else
			strcpy(temp[k++], item[j++]);
	}
	while(i<=m)
		strcpy(temp[k++], item[i++]);
	while(j<=h)
		strcpy(temp[k++], item[j++]);
	for(i=l;i<=h;i++)
		strcpy(item[i], temp[i-l]);
}

void mergeSort_r(char item[][10],  int l,  int h) {
	if(l<h) {
		int m = (l+h)/2;
		mergeSort_r(item,  l,  m);
		mergeSort_r(item,  m+1,  h);
		mergeSortr(item,  l,  m,  h);
	}
}

void quicksort(char item[][10],  int low,  int up) {
	int pivot, i, j;
	char temp[10];
	pivot=low;
    i=low;
    j=up;
    do {
    	while((strcmp(item[i], item[pivot])<0) && i<up) {
            i++;                               
        }
        while((strcmp(item[j], item[pivot])>0) && j>low) {
            j--;  
        }
        if (i<=j) {
            strcpy(temp, item[i]);
            strcpy(item[i], item[j]);
            strcpy(item[j], temp);
            i++;j--;
        }
    } while(i<=j);
    if(low<j) {
    	quicksort(item,  low,  j);
	}
	if(i<up) {
	    quicksort(item,  i,  up);
	}
}

int main() {
	int i, ch;
	char arr[][10]={"abc", "yza", "mno", "vwx", "zab", "def", "stu", "jkl", "ghi", "pqr"};
	printf("1. Shell Sort\n");
	printf("2. Merge Sort Interactive\n");
	printf("3. Merge Sort Recursive\n");
	printf("4. Quick Sort\n");
	printf("5. Exit.\n");
	printf("\nEnter your choice: \t");
	scanf("%d", &ch);
	printf("\nUnsorted array: ");
    	for (i=0;i<10;i++)
    		printf("%s ",  arr[i]);
    printf("\n");
	switch(ch) {
		case 1: shellSort(arr, 10);
				printf("\n\nSorted array is: ");
    			for (i=0;i<10;i++)
        			printf("%s ",  arr[i]);
    			return 0;
				break;
		case 2: mergeSorti(arr, 10);
				printf("\n\nSorted array is: ");
    			for (i=0;i<10;i++)
        			printf("%s ",  arr[i]);
    			return 0;
				break;
		case 3: mergeSort_r(arr, 0, 9);
				printf("\n\nSorted array is: ");
    			for (i=0;i<10;i++)
        			printf("%s ",  arr[i]);
    			return 0;
				break;
		case 4: quicksort(arr, 0, 9);
				printf("\n\nSorted array is: ");
    			for (i=0;i<10;i++)
        			printf("%s ",  arr[i]);
    			return 0;
				break;
		case 5: exit(1);			
	}
} 
