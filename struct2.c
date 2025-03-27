
#include<stdio.h>
struct emp{
    char name[30];
    int empid;
    int sal;
};
void display(struct emp a[],int n){
    for(int i=0;i<n;i++){
        printf("\nEmployee details %d\n",i+1);
        printf("Employee Name: %s",a[i].name);
        printf("\nEmployee ID :%d",a[i].empid);
        printf("\nEmployee salary:%d",a[i].sal);
    }
}
int main(){
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct emp num[n];
    for(int i=0;i<n;i++){
        printf("Enter employee name:");
        scanf("%s",num[i].name);
        printf("Enter employee id:");
        scanf("%d",&num[i].empid);
        printf("Enter  employee salary:");
        scanf("%d",&num[i].sal);
    }
    display(num,n);

}