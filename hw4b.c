/*Odev 4 b Gulzada Iisaeva*/

#include <stdio.h>
#include <math.h>
#define n 11

int main(){
	
	double x_arr[n]={6,7,11,15,17,21,23,29,29,37,39};
	double y_arr[n]={29,21,29,14,21,15,7,7,13,0,3};
	double sumx=0.00,sumy=0.00,
		   sumxy=0.00,sumx2=0.00,
		   st=0.00,sr=0.00,
		   x_mean=0.00,y_mean=0.00,
		   syx=0.00,r2;
	double a,b;
	int i,k;
	
	for (i=0;i<n;i++){
		sumx+=x_arr[i];
		sumy+=y_arr[i];
		sumxy+=x_arr[i]*y_arr[i];
		sumx2+=x_arr[i]*x_arr[i];
	}
	
	x_mean=sumx/n;
	y_mean=sumy/n;
	b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
	a=y_mean-(b*x_mean);
	printf("Dogru denklemi: Y= %.2f + ( %.2fx ) \n",a,b);
	
	for (i=0;i<n;i++){
		st+=pow((y_arr[i]-y_mean),2);
		sr+=pow((y_arr[i]-(b*x_arr[i])-a),2);
	}
	r2=(st-sr)/st;
	printf ("\nr2 degeri is = %.3f\n",r2);
	return 0;
}



