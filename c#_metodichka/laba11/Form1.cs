using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba11
{
    public partial class Form1: Form
    {
        private int centerX, centerY, polygonRadius;
        private Pen p = new Pen(Color.Black, 2);
        bool IsPaintTime = false;
        private PointF[] area_points;

        private PointF[] CalculatePolygonPoints(int sides)
        {
            PointF[] points = new PointF[sides];
            float angleStep = (float)(2 * Math.PI / sides);

            for (int i = 0; i < sides; i++)
            {
                float theta = angleStep * i;
                points[i] = new PointF(
                    centerX + polygonRadius * (float)Math.Cos(theta),
                    centerY + polygonRadius * (float)Math.Sin(theta));
            }
            return points;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            centerX = 400;
            centerY = 200;
            polygonRadius = 100;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (IsPaintTime)
            {
                Invalidate();
            }
        }

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int sides = int.Parse(textBox1.Text);
            area_points = CalculatePolygonPoints(sides);
            IsPaintTime = true;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            if (IsPaintTime)
            {
                Graphics g = e.Graphics;
                int sides = int.Parse(textBox1.Text);
                for (int i = 0; i < (sides - 1); i++)
                {
                    g.DrawLine(p, area_points[i], area_points[i + 1]);
                }
                //g.DrawPolygon(p, area_points);
            }
        }
    }
}
