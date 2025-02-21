using System.Windows.Forms;

namespace laba13
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string line = textBox1.Text;
            Replacer(line);

        }

        private void Replacer(string line)
        {
            listBox1.Items.Add(line.Replace(".", "..."));
        }
    }
}
