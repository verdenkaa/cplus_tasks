namespace laba1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            button1.Enabled = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            button2.Enabled = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            button3.Enabled = false;
        }

        private void Form1_SizeChanged(object sender, EventArgs e)
        {
            button1.Enabled = true;
            button2.Enabled = true;
            button3.Enabled = true;
        }
    }
}
