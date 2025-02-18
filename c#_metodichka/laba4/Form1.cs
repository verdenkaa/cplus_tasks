namespace laba2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private double count_f(double x, double b)
        {
            return (Math.Pow(Math.Abs(x-b), 1.0/2.0)) / ((Math.Pow(Math.Abs(b*b*b - x*x*x), 3.0 / 2.0))) + Math.Log(Math.Abs(x-b), Math.E);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
            double x2 = double.Parse(textBox2.Text);
            double step = double.Parse(textBox3.Text);
            double b = double.Parse(textBox5.Text);

            textBox4.Text = "";

            for (double i = x; i<=x2; i += step)
            {
                textBox4.Text += "x=" +  i.ToString() + " y=" + count_f(i, b).ToString() + Environment.NewLine;
            }
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

    }
}
