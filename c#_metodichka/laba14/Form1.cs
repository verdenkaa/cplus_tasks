using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba14
{
    public partial class Form1: Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int depth = int.Parse(textBox1.Text);

            Bitmap bmp = new Bitmap(400, 400);

            Graphics g = Graphics.FromImage(bmp);
            g.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.AntiAlias; // сглаживание

            DrawFractal(g, depth, 200, 200, 100);
            pictureBox1.Image = bmp;
        }

        private void DrawFractal(Graphics g, int depth, float x, float y, float radius)
        {
            if (depth <= 0)
                return;

            g.DrawEllipse(Pens.Black, x - radius, y - radius, 2 * radius, 2 * radius);

            DrawFractal(g, depth - 1, x - radius, y - radius, radius / 2); // Левый верхний
            DrawFractal(g, depth - 1, x + radius, y - radius, radius / 2); // Правый верхний
            DrawFractal(g, depth - 1, x + radius, y + radius, radius / 2); // Правый нижний
            DrawFractal(g, depth - 1, x - radius, y + radius, radius / 2); // Левый нижний
        }

    }
}
