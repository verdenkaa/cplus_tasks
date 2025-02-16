namespace laba1
{
    internal static class Program
    {
        [STAThread]
        static void Main()
        {
            ApplicationConfiguration.Initialize();
            //Application.Run(new nForm());
            //Application.Run(new Form1());
            Application.Run(new MdiApplication());
        }
    }
}