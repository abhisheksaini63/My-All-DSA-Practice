#include<stdio.h>
void main()
{
int a[100][100],i,j,n,b,v,P,sumR=0,l,m;
int sumC=0,sumDmajor=0,sumDminor=0,CF;
printf("enter the order of matrix=");
scanf("%d",&n);
printf("Enter elements of matrix=\n");
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
printf("Elements[%d][%d]=",i,j);
scanf("%d",&a[i][j]);}}
printf("\nThe matrix is=");
for(i=1;i<=n;i++){
printf("\n");
for(j=1;j<=n;j++){
printf("%d\t",a[i][j]);}
printf("\n");}
printf("If Sure Press 5 otherwise Press your Favourite Number:-");
scanf("%d",&b);
if(b==5){
printf("\nAlright, Okay\nLet's Go Ahead to check whether it is a Square Magic Matrix or Not!");}
else{
printf("\nHow many values you wanna change=");
scanf("%d",&P);

for(j=1;j<=P;j++){
printf("\nEnter the row and column to change value=");
scanf("%d%d",&l,&m);
printf("\nEnter new value=");
scanf("%d",&v);
a[l][m]=v;}
printf("\nThe New Matrix is=");
for(i=1;i<=n;i++){
printf("\n");
for(j=1;j<=n;j++){
printf("%d\t",a[i][j]);}
printf("\n");}}
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(i==j){
sumDmajor=sumDmajor+a[i][j];}
if(i+j==n+1){
sumDminor=sumDminor+a[i][j];}}}
if(sumDmajor != sumDminor){
CF=1;}
else{
for(i=1;i<=n;i++){
sumC=0;
sumR=0;
for(j=1;j<=n;j++){
sumC=sumC+a[i][j];
sumR=sumR+a[i][j];}
if(sumC != sumDmajor){
CF=1;}
else if(sumR != sumDmajor){
CF=1;}
else{
CF=0;}}}
if(CF==0){
printf("\nCongratulations,The Matrix you entered is a Square Magic Matrix");}
else{
printf("\nNope,Sorry It is not a Square Magic Matrix");}
return 0;
}
