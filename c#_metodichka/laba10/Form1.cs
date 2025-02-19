using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba10
{
    public partial class Form1: Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;

            Pen pen = new Pen(Color.Red, 3);
            g.DrawLine(pen, 10, 10, 100, 100);

            pen = new Pen(Color.Black, 2);
            for (int i = 0; i <= 100; i+=10)
            {
                g.DrawLine(pen, 10, 200+i, 100, 250+i);
            }
            

            pen = new Pen(Color.Green, 1);
            g.DrawRectangle(pen, 150, 10, 100, 150);

            System.Drawing.SolidBrush myBrush = new System.Drawing.SolidBrush(System.Drawing.Color.Red);
            g.FillRectangle(myBrush, new Rectangle(150, 200, 100, 150));

            pen = new Pen(Color.Blue, 7);
            pen.DashStyle = DashStyle.Dash;
            g.DrawEllipse(pen, 300, 10, 150, 100);

            pen = new Pen(Color.Orange, 2);
            Point[] poly = new Point[5];

            poly[0] = new Point(300, 300);
            poly[1] = new Point(350, 350);
            poly[2] = new Point(350, 300);
            poly[3] = new Point(340, 250);
            poly[4] = new Point(290, 280);

            g.DrawPolygon(pen, poly);
        }
    }
}
