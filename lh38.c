void loop_fun(int i,int c)
{   
	assume(c==0 && i==0);
	while (i<100){  
            c=c+i; 
            i=i+1; 
            if (i<=0) 
              break;
         }
}
