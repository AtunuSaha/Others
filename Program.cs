namespace Practice
{
    class Program
    {
        static void Main(string[] args)
        {
            
            int x = 10;
            int y = 20;
            double result = 200.4434;
            bool alive = true;
            char letter = 'A';
            string Yname = "John Doe";


            Console.WriteLine(x);
            Console.WriteLine(y);
            Console.WriteLine(result);
            Console.WriteLine("Are you alive: " + alive);
            Console.WriteLine("First letter is: " + letter);
            Console.WriteLine("The name is: " + Yname);
            Console.WriteLine();

            const double pi = 3.14159;
            Console.WriteLine(pi);
            Console.WriteLine();
            

            // ------------------------------------------------------------ //

            
            
            // Type conversion
            double a = 123.23453;
            int b = Convert.ToInt32(a);

            int c = 1313;
            double d = Convert.ToDouble(c) + 0.01;

            int e = 100;
            string f = Convert.ToString(e);

            string g = "A";
            char h = Convert.ToChar(g);

            string i = "true";
            bool j = Convert.ToBoolean(i);

            char k = 'B';
            string l = Convert.ToString(k);


            Console.WriteLine(b);
            Console.WriteLine(d);
            Console.WriteLine(f);
            Console.WriteLine(h);
            Console.WriteLine(j);
            Console.WriteLine(l);


            Console.Write("Enter your name: ");
            string name = Console.ReadLine();

            Console.Write("Enter your age: ");
            int age = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine();

            Console.WriteLine("Your name is: " + name);
            Console.WriteLine("Your age is: " + age);


            Console.ReadLine();
        }
    }
}
