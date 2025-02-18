namespace laba5
{
    public partial class Form1 : Form
    {
        Button b = new Button();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            b.Parent = this;
            b.Location = new Point(60, 175);
            b.Size = new Size(94, 29);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            button1.Size = new Size(94, 58);
            button2.Size = new Size(94, 58);
            b.Size = new Size(94, 58);
        }
    }
}
