int input = Convert.ToInt32(Console.ReadLine());

//string inputSting, one, two, three, four;

while (true)
{
    input++;

    // approch 1

    //    inputSting = Convert.ToString(input);
    //    one = inputSting[0].ToString();
    //    two = inputSting[1].ToString();
    //    three = inputSting[2].ToString();
    //    four = inputSting[3].ToString();
    //    if (one != two && one != three && one != four && two != three && two != four && three != four)
    //    {
    //        break;
    //    }

    // approch 2

    int a = input / 1000;
    int b = input / 100 % 10;
    int c = input / 10 % 10;
    int d = input % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        break;
    }
}

Console.WriteLine(input);