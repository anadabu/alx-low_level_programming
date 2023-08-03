/**
 * _strlen_recursion - length of a string using recursion
 * @s: The string
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_helper - Helper function
 * @s: The string to check for palindrome
 * @start: The starting index of the string
 * @end: The ending index of the string
 * Return: 1 if palindrome, 0 if not palindrome
 */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_helper(s, 0, len - 1));
}

