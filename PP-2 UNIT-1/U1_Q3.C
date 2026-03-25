#include<stdio.h>
#include<conio.h>

void main(){
int i,a[50],max,min,n;
clrscr();
printf("enter num of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter element %d:",i+1);
scanf("%d",&a[i]);}
max=min=a[0];
for(i=1;i<n;i++){
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("\n maximum=%d",max);
printf("\n minimum=%d",min);
getch();}