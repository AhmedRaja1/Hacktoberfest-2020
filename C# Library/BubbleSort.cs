public static void BubbleSort(int[] input)
{
    var itemMoved = false;
    do
    {
        itemMoved = false;
        for (int i = 0; i < input.Count() - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                var lowerValue = input[i + 1];
                input[i + 1] = input[i];
                input[i] = lowerValue;
                itemMoved = true;
            }
        }
    } while (itemMoved);
}
