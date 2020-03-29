void loop_fun(int i,int j )
{   
	assume(i*i<j*j);
	if (i < 0) i = -i; 
	if (j < 0) j = -j; 
	if (i == 0) i = 1; 
	if (j == 0) j = 1;

    while (i<j){
        j=j-i; 
        if (j < i) 
        	{
        		j = j + i; 
        		i = j - i; 
        		j = j - i;
        	}
        }
}
