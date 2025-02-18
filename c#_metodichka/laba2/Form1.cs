namespace laba2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private double count_f(double x, double y, double z)
        {
            return (Math.Pow((y + Math.Pow(x - 1, 1.0/3.0)), 1.0/4.0)) /
                (Math.Abs(x - y) * (Math.Pow(Math.Sin(z), 2) + Math.Tan(z)));
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
            double y = double.Parse(textBox2.Text);
            double z = double.Parse(textBox3.Text);

            textBox4.Text = "f(x, y, z) = " + count_f(x, y, z).ToString();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
