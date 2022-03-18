#include<stdio.h>

void main(){
	int x;
	float class1[x];
	float class2[x];
	float class3[x];
	int passed1=0;
	int failed1=0;
	int passed2=0;
	int failed2=0;
	int passed3=0;
	int failed3=0;
	float sum1=0;
	float sum2=0;
	float sum3=0;
	int totalpassed;
	int totalfailed;
	float totalsum;
	printf("plz enter a size of an class1,class2,class3 ");
	scanf("%d",&x);
	printf("the grades of class 1");
	for(int i=0;i<=x;i++){
		scanf("%f",&class1[i]);
		sum1=sum1+class1[i];
		if(0<=class1[i]&&class1[i]<50){
			failed1++;
		}
		if(50<=class1[i]&&class1[i]<100){
			passed1++;
		}
	}
	float highestgrade1=class1[0];
	float lowestgrade1=class1[0];
	for(int i=1;i<=x;i++){
		if(class1[i]>highestgrade1){
			highestgrade1=class1[i];
		}
		if(class1[i]<lowestgrade1){
			lowestgrade1=class1[i];
		}
		
	}

	printf("\nthe grades of class 2");
	for(int i=0;i<=x;i++){
		scanf("%f",&class2[i]);
		sum2=sum2+class2[i];
		if(0<=class2[i]&&class2[i]<50){
			failed2++;
		}
		if(50<=class2[i]&&class2[i]<100){
			passed2++;
		}
	}
	float highestgrade2=class2[0];
	float lowestgrade2=class2[0];

	
	for(int i=1;i<=x;i++){
		if(class2[i]>highestgrade2){
			highestgrade2=class2[i];
		}
		if(class2[i]<lowestgrade2){
			lowestgrade2=class2[i];
		}
		
	}
	printf("\nthe grades of class 3");
	for(int i=0;i<=x;i++){
		scanf("%f",&class3[i]);
		sum3=sum3+class3[i];
		if(0<=class3[i]&&class3[i]<50){
			failed3++;
		}
		if(50<=class3[i]&&class3[i]<100){
			passed3++;
		}
	}
	float highestgrade3=class3[0];
	float lowestgrade3=class3[0];
	for(int i=1;i<=x;i++){
		if(class3[i]>highestgrade3){
			highestgrade3=class3[i];
		}
		if(class3[i]<lowestgrade3){
			lowestgrade3=class3[i];
		}
		
	}

	float highestgrade[3]={ highestgrade1, highestgrade2, highestgrade3};
	float max=highestgrade[0];
	float lowestgrade[3]={ lowestgrade1, lowestgrade2, lowestgrade3};
	float min=lowestgrade[0];
	for(int i=1;i<=2;i++){
		if(highestgrade[i]>max){
			max=highestgrade[i];
		}
	}
	for(int i=1;i<=2;i++){
		if(lowestgrade[i]<min){
			min=lowestgrade[i];
		}
	}
	totalpassed=passed1+passed2+passed3;
	totalfailed=failed1+failed2+failed3;
	totalsum=sum1+sum2+sum3;
	float avg=totalsum/30;
	
	printf("the number of passed students is = %d ",totalpassed);
	printf("\nthe number of failed students is = %d ",totalfailed);
	printf("\nthe highest grade is = %f",max);
	printf("\nthe lowest grade is = %f",min);
	printf("\nthe average grade is = %f ",avg);


    



}