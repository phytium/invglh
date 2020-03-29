void loop_fun(int x,int y )
{   
    assume(x<y);
    while (x<y){ 
        if(x<0&&y<0)
        	{ x=x+7; 
        	  y=y-10;
        	}
        if(x<0&&y>=0)
        { x=x+7; 
          y=y+3;
        }
        x=x+10;
        y=y+3;
}
