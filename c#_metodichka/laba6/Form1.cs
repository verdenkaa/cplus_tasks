using static System.Net.Mime.MediaTypeNames;

namespace laba6
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int index = listBox1.SelectedIndex;
            string str = (string)listBox1.Items[index];

            int i = int.Parse(textBox1.Text);
            int j = int.Parse(textBox2.Text);

            char swap;
            swap = str[i];

            string new_str = str.Substring(0, i) + str[j] + str.Substring(i + 1, j - i - 1) + str[i] + str.Substring(j + 1);

            listBox1.Items[index] = new_str;



        }
    }
}
