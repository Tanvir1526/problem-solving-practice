int input = Convert.ToInt32(Console.ReadLine());

for (int i = 0; i < input; i++)
{
    var line = Console.ReadLine();
    char[] delimiters = { ',', ' ', ';' };
    var data = line!.Split(delimiters);
    var a = Convert.ToInt32(data[0]);
    var b = Convert.ToInt32(data[1]);
    var c = Convert.ToInt32(data[2]);
    if (a + b == c || a + c == b || b + c == a)
    {
        Console.WriteLine("YES");
    }
    else
    {
        Console.WriteLine("NO");

    }
}