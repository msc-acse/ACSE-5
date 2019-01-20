
template<typename T>
T fact(T c)
{
	T factorial = 1;
	for (T i = 1; i <= c; i++)
	{
		factorial *= i;
	}
	return factorial;
}

template int fact<int>(int c);
template double fact<double>(double c);