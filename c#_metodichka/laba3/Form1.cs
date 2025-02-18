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
            return Math.Abs(Math.Min(Math.Pow(x, 2), y) - Math.Max(y, z)) / 2.0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
            double y = double.Parse(textBox2.Text);
            double z = double.Parse(textBox3.Text);

            textBox4.Text += "p(x, y, z) = " + count_f(x, y, z).ToString() + Environment.NewLine;
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox4.Text = "";
        }
    }
}
