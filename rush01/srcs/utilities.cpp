int					getRvalue(int color)
{
	return color >> 16 & 0xFF;
}

int					getGvalue(int color)
{
	return color >> 8 & 0xFF;
}

int					getBvalue(int color)
{
	return color & 0xFF;
}

double				procent(double current, double from, double to)
{
	if (current == from)
		return 0.0;
	if (current == to)
		return 1.0;
	return (current - from) / (to - from);
}

static inline int	color(int from, int to, double procent)
{
	return static_cast<int>((from + (to - from) * procent));
}

int					gradient(int from, int to, double procent)
{
	int r;
	int g;
	int b;

	if (from == to)
		return from;
	r = color(getRvalue(from), getRvalue(to), procent);
	g = color(getGvalue(from), getGvalue(to), procent);
	b = color(getBvalue(from), getBvalue(to), procent);
	return r << 16 | g << 8 | b;
}