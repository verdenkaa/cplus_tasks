using System.Drawing;
using System.Windows.Forms;

namespace laba8
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int[,] matrix = new int[20, 20];
            Random rnd = new Random();

            dataGridView1.RowCount = 20;
            dataGridView1.ColumnCount = 20;


            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    matrix[i, j] = rnd.Next(0, 100);
                    dataGridView1.Rows[i].Cells[j].Value = matrix[i, j];
                }
            }

            for (int i = 0; i < 20; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    bool isLocalMax = true;
                    int current = matrix[i, j];

                    for (int di = -1; di <= 1; di++)
                    {
                        for (int dj = -1; dj <= 1; dj++)
                        {
                            if (di == 0 && dj == 0) continue;

                            int ni = i + di;
                            int nj = j + dj;

                            if (ni >= 0 && ni < 20 && nj >= 0 && nj < 20)
                            {
                                if (matrix[ni, nj] >= current)
                                {
                                    isLocalMax = false;
                                }
                            }
                        }
                    }

                    if (isLocalMax)
                    {
                        dataGridView1.Rows[i].Cells[j].Style.BackColor = Color.LightGreen;
                    }
                }

                dataGridView1.AutoResizeColumns();
                dataGridView1.AutoResizeRows();
            }
        }
    }
}
