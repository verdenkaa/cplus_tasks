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

            int count = (int)Math.Ceiling((x2 - x) / step) + 1;

            double[] x_arr = new double[count];
            double[] y_arr = new double[count];

            int c = 0;

            chart1.Series[0].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Line;
            chart1.Series[0].Color = Color.Red;
            chart1.ChartAreas[0].AxisX.Minimum = x;
            chart1.ChartAreas[0].AxisX.Maximum = x2;
            chart1.ChartAreas[0].AxisX.MajorGrid.Interval = step;


            textBox4.Text = "";

            for (double i = x; i<=x2; i += step)
            {
                x_arr[c] = i;
                y_arr[c] = count_f(i, b);
                textBox4.Text += "x=" + x_arr[c].ToString() + " y=" + y_arr[c].ToString() + Environment.NewLine;
                c++;
            }

            chart1.Series[0].Points.DataBindXY(x_arr, y_arr);
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

    }
}
