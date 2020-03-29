void loop_fun(int x,int y,int n)
{   
	int j;
	int i;
	j=0;
	assume(x>=0 && x<=y && y<n);
	while (x<n){
             x++;
            if (x>y) 
                  y++;
        }
}
