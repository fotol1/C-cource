int solution(double a, double b, double c)
{
	if (a == 0)
	{
        	if (!b * !c)
            		return 1;

        	if (b != 0 && c == 0)
            		return 3;

        	if (b *  c)
            		return 4;
       
		return 2;
	}

	if (a * (!b * !c))
        	return 3;

	return 6;
}
