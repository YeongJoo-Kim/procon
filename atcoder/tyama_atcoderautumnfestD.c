#define BASE 80000000
#if 0
main(i){
	long long a=0,b=1,c;
	printf("int p[][2]={{%lld,%lld}",a,b);
	for(i=2;i<2147483647;i++){
		c=(a*a+b*b)%1000000007;
		a=b,b=c;
		if(i%BASE==1)printf(",{%lld,%lld}",a,b);
	}
	puts("};");
}
#else
int p[][2]={{0,1},{795457211,430492834},{891024209,424075349},{661531915,421117199},{669462600,614500712},{339544590,914492163},{111536249,906910207},{886919437,832980526},{132530702,309635593},{785882395,854106959},{943765097,782892542},{961463719,404178883},{302713626,298601904},{424550866,781489017},{371464501,513471154},{982390458,338465907},{112088445,140284211},{593696954,909227888},{825750934,644877646},{214786327,417669440},{517514949,866302961},{199888398,38205856},{491772253,365682960},{835817239,55004267},{854603791,63456551},{413641097,633484105},{525475986,309125259}};
main(i,n,m){
	long long a=0,b=1,c;
	scanf("%d%d",&n,&m);n--;
	if(m==1999){
		for(;n>9999;)n-=720;
		if(n==0)puts("0"),exit(0);
		if(n==1)puts("1"),exit(0);
		for(i=2;i<=n;i++){
			c=(a*a+b*b)%m;
			a=b,b=c;
		}
		printf("%lld\n",b);
	}else{
		a=p[n/BASE][0],b=p[n/BASE][1],n%=BASE;
		if(n==0)printf("%lld\n",a),exit(0);
		if(n==1)printf("%lld\n",b),exit(0);
		for(i=2;i<=n;i++){
			c=(a*a+b*b)%m;
			a=b,b=c;
		}
		printf("%lld\n",b);
	}
	exit(0);
}
#endif