template <class In, class X> In find(In begin, In end, const X& x)
{
	if (begin == end || *begin == x)
		return begin;
	begin++;
	return find(begin, end, x);
}

