main(n,s,c){while(1){n=s=0;while((c=getchar())!='\n'){n+=c-'0';if(!s&&!n)return;s=1;}while(n>9){s=0;while(n)s+=n%10,n/=10;n=s;}printf("%d\n",n);}}