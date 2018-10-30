int f2(int *arr, int length)
{
	int decrease_count = 0, key_index = -1;
	for (int i = 0; i < length - 1; ++i)
	{
		if (arr[i] > arr[i + 1])
		{
			decrease_count++;
			if (decrease_count > 1)
			{
				return 0;
			}
			else
			{
				key_index = i;
			}
		}			
	}

	if (decrease_count == 0)
	{
		return length;
	}
	else
	{
		if (key_index == 0)
		{
			return 1;
		}
		else if (arr[key_index - 1] > arr[key_index + 1])
		{
			if (key_index == length - 2)
			{
				return 1;
			}
			else if (arr[key_index + 2] < arr[key_index])
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			if (key_index == length - 2)
			{
				return 2;
			}
			else if (arr[key_index + 2] >= arr[key_index])
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
	}
}
