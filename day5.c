//write a program to calculate SI 
/*float SI , r , t , p ;
printf("enter the rate - ");
scanf("%f" , &r);
printf(" enter the pricipal amt - ");
scanf("%f" , &p );
printf("enter the time - ");
scanf("%f",&t);
SI = (p*r*t)/100;
printf("the simple interest is - %f" , SI);*/



// write a program to input time in seconds and convert it to hours:minutes:seconds format .
/*int sec , hours ,minutes ,seconds , remainingseconds ;
printf("enter time in seconds - ");
scanf("%d" , &seconds );
hours = seconds / 3600;
seconds = seconds % 3600;
minutes = seconds / 60 ;
remainingseconds = seconds % 60 ;

printf("time : %d hours : %d minutes - %d seconds\n", hours , minutes , remainingseconds);
return 0;

// 2nd method 
/*int hours,minute,seconds,time;
printf("enter time in seconds -");
scanf("%d" , &time );
hours= time/3600;
minute = (time % 3600 ) / 60 ;
seconds = time % 60; 
printf("time is %d hours , %d minutes and %d seconds\n" , hours , minute , seconds );*/