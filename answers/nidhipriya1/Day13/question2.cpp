int rev(int n, int t)
{
	// base case
	if (n == 0)
		return t;

	// stores the reverse of a number
	t = (t * 10) + (n % 10);
    return rev(n / 10, t);
}

int main()
{

	int n ;
	cout<<"enter number you want to check ";
	cin>>n;
	
	int t = rev(n, 0);

	if (t == n)
		cout << "yes it is palindrome" << endl;
	else
		cout << "no it is not palindrome" << endl;
	return 0;
}
