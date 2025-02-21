using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba11
{
    public partial class Form1: Form
    {
        private int centerX, centerY, Radius;
        private int xr, yr;
        private Pen p = new Pen(Color.Black, 2);
        private Pen pc = new Pen(Color.Green, 2);
        bool IsPaintTime = false;
        private PointF[] area_points;
        private double angle_speed = 2 * Math.PI / 40.0;
        private double circle_steps = 0;

        private PointF[] CalculatePolygonPoints(int sides)
        {
            PointF[] points = new PointF[sides];
            float angleStep = (float)(2 * Math.PI / sides);
            int x = centerX;
            int y = centerY;

            for (int i = 0; i < sides; i++)
            {
                float theta = angleStep * i;
                points[i] = new PointF(
                    x * (float)Math.Cos(theta) - y * (float)Math.Sin(theta) + 500,
                    x * (float)Math.Sin(theta) + y * (float)Math.Cos(theta) + 200);
            }
            return points;
        }

        private PointF Circle_GO()
        {
            double ang = angle_speed * circle_steps;
            circle_steps++;
            PointF points = new PointF();
            points = new PointF(xr * (float)Math.Cos(ang) - yr * (float)Math.Sin(ang) + 450, xr * (float)Math.Sin(ang) + yr * (float)Math.Cos(ang) + 150);
            return points;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            centerX = 100;
            centerY = 100;
            xr = 150;
            xr = 150;
            Radius = 100;
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
            circle_steps = 0;
            area_points = CalculatePolygonPoints(sides);
            IsPaintTime = true;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            if (IsPaintTime)
            {
                Graphics g = e.Graphics;
                g.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.AntiAlias;
                g.DrawPolygon(p, area_points);
                PointF points = Circle_GO();
                g.DrawEllipse(pc, points.X, points.Y, Radius, Radius);

            }
        }
    }
}
