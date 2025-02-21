namespace laba7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int[] numbers = new int[12];

            for (int i = 0; i < 12; i++)
            {
                int.TryParse(listBox1.Items[i].ToString(), out numbers[i]);
            }

            int sum = 0;
            foreach (int num in numbers)
            {
                if (num % 2 == 0)
                {
                    sum += num;
                }
            }

            int[] numbers2 = new int[13];
            Array.Copy(numbers, numbers2, 12);
            numbers2[12] = sum;

            foreach (int num in numbers2)
            {
                listBox2.Items.Add(num.ToString());
            }
        }
    }
}
