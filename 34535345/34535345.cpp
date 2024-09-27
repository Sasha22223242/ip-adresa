using System;
using System.Net;

class Програма
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("Введіть IP-адресу:");
        string рядок = Console.ReadLine();

        if (IPAddress.TryParse(рядок, out _))
        {
            Console.WriteLine("Це правильна IP-адреса.");
        }
        else
        {
            Console.WriteLine("Це некоректна IP-адреса.");
        }
    }
}
