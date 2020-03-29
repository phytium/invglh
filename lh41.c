void loop_fun(int x,int y)
{   
	assume(y>0 || x>0);
	while (x+y<=2){
            if(x+y>-2)
              break;
            if( x>0)
              x++;
            y++;  
      }
}
