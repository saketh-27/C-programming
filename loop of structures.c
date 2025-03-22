#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[100];
    float percentage;
};

int main() {
    int n;
    printf("COUNT OF STUDENTS");
    scanf("%d", &n);
    struct student s[n]; 
    int i;
    float percentage;  
    for (i = 0; i < n; i++) {
    	printf("ENTER ROLL NUMBER:-\n");
        scanf("%d", &s[i].rollno);
        printf("ENTER NAME:-\n");
        scanf("%s", s[i].name); 
         printf("ENTER PERCENTAGE:-\n");
        scanf("%f", &s[i].percentage);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", s[i].rollno);
        printf("%s\n", s[i].name);
        printf("%.2f\n", s[i].percentage);
    }
    return 0;
}
