using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba7
{
    public partial class WinAsynchMethod : Form
    {
        private delegate int AsyncSumm(int a, int b);

        private int Summ(int a, int b)
        {
            System.Threading.Thread.Sleep(9000);
            string str = String.Format("Сумма введенных чисел равна {0}", a + b);
            MessageBox.Show(str, "Результат операции");
            return a + b;
        }

        private void CallBackMethod(IAsyncResult ar)
        {
            string str;
            AsyncSumm summdelegate = (AsyncSumm)ar.AsyncState;
            str = String.Format("Сумма введенных чисел равна { 0 }", summdelegate.EndInvoke(ar));
            MessageBox.Show(str, "Результат операции");
        }

        public WinAsynchMethod()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void WinAsynchMethod_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a, b;
            try
            {
                // Преобразование типов данных.
                a = Int32.Parse(textBox1.Text);
                b = Int32.Parse(textBox2.Text);
            }
            catch (Exception)
            {
                MessageBox.Show("При выполнении преобразования типов возникла ошибка");

                textBox1.Text = textBox2.Text = "";
                return;
            }
            AsyncSumm summdelegate = new AsyncSumm(Summ);
            AsyncCallback cb = new AsyncCallback(CallBackMethod);
            //summdelegate.BeginInvoke(a, b, cb, summdelegate);
            Task.Run(() => Summ(a, b));
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Работа кипит!!!");
        }
    }
}
