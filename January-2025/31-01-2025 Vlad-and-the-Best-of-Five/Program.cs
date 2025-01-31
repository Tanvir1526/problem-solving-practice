var input = Convert.ToInt16(Console.ReadLine());

for (byte i = 0; i < input; i++)
{
    string inputString = Console.ReadLine();

    int countA = inputString.Count(c => c == 'A');
    int countB = 5 - countA;

    if (countA > countB)
    {
        Console.WriteLine("A");
    }
    else
    {
        Console.WriteLine("B");
    }
}