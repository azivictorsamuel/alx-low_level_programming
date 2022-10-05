#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mem_clear - Frees memory
 * @s: String input for memory deallocation
 * Return: Nothing
 */
void mem_clear(char **s)
{
  /* For loop variable*/
	int i;

	/* Loop through and free up each row of memory */
	for (i = 0; s[i] != NULL; i++)
	{
		free(s[i]);
	}
	/* Free the block itself*/
	free(s);
}

/**
 * word_count - Counts number of indexes in a string
 * @str: String being counted
 * Return: Number of indexes
 */
int word_count(char *str)
{
  /* For loop variable. wc starts at 0 to ensure no garbage values are added */
	int i;
	int wc = 0;

	/* Loop through given string */
	for (i = 0; str[i]; i++)
	{
	  /* If the current index is anything other than a space, +1 to wc */
		if (str[i] != ' ')
		{
			wc++;
			/* Check the next index(es) for either space or null byte */
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			/* If the end of the string is reached, exclude the null byte itself by decrementing by 1 */
			if (str[i] == '\0')
				i--;
		}
	}

	/* Return the word count*/
	return (wc);
}

/**
 * strtow - "Master function": Splits a string such that each word gets its own line
 * @str: String input
 * Return: The pointer to the very first index of the list of words
 */
char **strtow(char *str)
{
  /**
   * Variables
   * @i and @j: for loop counters and holding index placements
   * @input_length: Holds length of the input string
   * @word_size: Holds length of a particular word within the input string
   * @array_row: Integer that keeps track of row index
   * @array_column: Integer that keeps track of column index

