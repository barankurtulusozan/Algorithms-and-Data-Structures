// All will be revealed when i find enough time.
class PushdownStack
{
	private:
		Item *s;
		int N;
	public:
		PushdownStack(int maxN)
		{
			s= new Item[maxN];
			N=0;
		}	
		int empty() const
		{
			return N==0;
		}
		void push(Item item)
		{
			s[N++] = item;
		}
		Item pop()
		{
			return s[--N];
		}

}