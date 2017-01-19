
/*Odev 4 a Gulzada Iisaeva*/
#include <stdio.h>
#include <math.h>
#define SIZE 25
double mean(double *arr);
double standard_deviation(double *arr);
double variance(double *arr);
double coef_of_variation(double *arr);

int main(){
	
	double mean_result,stan_dev,variance_result,coef_var;
	int i;
	double arr[SIZE]={0.90,1.42,1.30,1.55,1.63,
	1.32,1.35,1.47,1.95,1.66,1.96,1.47,1.92,
	1.35,1.05,1.85,1.74,1.65,1.78,1.71,2.29,
	1.82,2.06,2.14,1.27};
	mean_result=mean(arr);
	printf("Arithmetic mean is =  %f\n", mean_result);
	stan_dev=standard_deviation(arr);
	printf("Standard deviation is = %f\n",stan_dev);
	variance_result=variance(arr);
	printf("Variance is = %f\n", variance_result);
	coef_var=coef_of_variation(arr);
	printf("Coefficient of variation is =  %f\n",coef_var);
	return 0;
}
double mean(double *arr)
{
	double result=0.00;
		int i;
	for(i=0;i<SIZE;i++)
	{
	
		result+=arr[i];
		
	}
	return result/SIZE;
}
double standard_deviation(double *arr){
	double result;
	double st=0.00;
	int i;
	for(i=0;i<SIZE;i++)
	{
	
		st+=pow((arr[i]-mean(arr)),2);
		
	}
	result=sqrt(st/(SIZE-1));
	return result;
}
double variance(double *arr){
	double result;
	double st=0.00;
	int i;
	for(i=0;i<SIZE;i++)
	{
	
		st+=pow((arr[i]-mean(arr)),2);
		
	}
	result=st/(SIZE-1);
	return result;
}
double coef_of_variation(double *arr){
	double result;
	
	result=(standard_deviation(arr)/mean(arr))*100;
	
	return result;
}





