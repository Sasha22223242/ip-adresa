using System;
using System.Net;

class ��������
{
    static void Main()
    {
        Console.OutputEncoding = System.Text.Encoding.UTF8;
        Console.WriteLine("������ IP-������:");
        string ����� = Console.ReadLine();

        if (IPAddress.TryParse(�����, out _))
        {
            Console.WriteLine("�� ��������� IP-������.");
        }
        else
        {
            Console.WriteLine("�� ���������� IP-������.");
        }
    }
}
