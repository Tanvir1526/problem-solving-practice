int input = Convert.ToInt32(Console.ReadLine());

static bool CheckYes(string? inputChar)
{
    return inputChar != null && inputChar.Equals("yes", StringComparison.OrdinalIgnoreCase);
}

for (int i = 0; i < input; i++)
{
    var inputChar = Console.ReadLine();
    if (CheckYes(inputChar))
    {
        Console.WriteLine("YES");
    }
    else
    {
        Console.WriteLine("NO");
    }
}