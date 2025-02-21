using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace laba12
{
    public partial class Form1: Form
    {
        private Point PreviousPoint, point;
        private Bitmap bmp;
        private Bitmap bmp_base;
        private Pen blackPen;
        private Graphics g;
        int width, height;

        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // Описываем объект класса OpenFileDialog
            OpenFileDialog dialog = new OpenFileDialog();
            // Задаем расширения файлов 
            dialog.Filter = "Image files (*.BMP, *.JPG, " +
                "*.GIF, *.PNG)|*.bmp;*.jpg;*.gif;*.png";
            // Вызываем диалог и проверяем выбран ли файл
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                // Загружаем изображение из выбранного файла
                Image image = Image.FromFile(dialog.FileName);
                width = image.Width;
                height = image.Height;
                pictureBox1.Width = width;
                pictureBox1.Height = height;
                // Создаем и загружаем изображение в формате bmp
                bmp = new Bitmap(image, width, height);
                bmp_base = new Bitmap(image, width, height);
                // Записываем изображение в pictureBox1
                pictureBox1.Image = bmp;
                // Подготавливаем объект Graphics для рисования
                g = Graphics.FromImage(pictureBox1.Image);
            }
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            // Записываем в предыдущую точку текущие координаты
            PreviousPoint.X = e.X;
            PreviousPoint.Y = e.Y;
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            // Проверяем нажата ли левая кнопка мыши
            if (e.Button == MouseButtons.Left)
            {
                // Запоминаем текущее положение курсора мыши
                point.X = e.X;
                point.Y = e.Y;
                // Соеденяем линией предыдущую точку с текущей
                g.DrawLine(blackPen, PreviousPoint, point);
                // Текущее положение курсора ‐ в PreviousPoint
                PreviousPoint.X = point.X;
                PreviousPoint.Y = point.Y;
                // Принудительно вызываем перерисовку
                pictureBox1.Invalidate();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            // Описываем и порождаем объект savedialog
            SaveFileDialog savedialog = new SaveFileDialog();
            // Задаем свойства для savedialog
            savedialog.Title = "Сохранить картинку как ...";
            savedialog.OverwritePrompt = true;
            savedialog.CheckPathExists = true;
            savedialog.Filter =
                "Bitmap File(*.bmp)|*.bmp|" +
                "GIF File(*.gif)|*.gif|" +
            "JPEG File(*.jpg)|*.jpg|" +
    "PNG File(*.png)|*.png";
            // Показываем диалог и проверяем задано ли имя файла
            if (savedialog.ShowDialog() == DialogResult.OK)
            {
                string fileName = savedialog.FileName;
                // Убираем из имени расширение файла
                string strFilExtn = fileName.Remove(0, fileName.Length-3);
                // Сохраняем файл в нужном формате
                switch (strFilExtn)
                {
                    case "bmp":
                        bmp.Save(fileName,
                        System.Drawing.Imaging.ImageFormat.Bmp);
                        break;
                    case "jpg":
                        bmp.Save(fileName,
                       System.Drawing.Imaging.ImageFormat.Jpeg);
                        break;
                    case "gif":
                        bmp.Save(fileName,
                        System.Drawing.Imaging.ImageFormat.Gif);
                        break;
                    case "tif":
                        bmp.Save(fileName,
                       System.Drawing.Imaging.ImageFormat.Tiff);
                        break;
                    case "png":
                        bmp.Save(fileName,
                        System.Drawing.Imaging.ImageFormat.Png);
                        break;
                    default:
                        break;
                }
            }
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            for (int x = 0; x < width; x++)
            {
                for (int y = 0; y < height; y++)
                {
                    Color pixel = bmp_base.GetPixel(x, y);
                    int l = int.Parse(numericUpDown1.Text);

                    int R = pixel.R + l * 10;
                    if (R > 255) R = 255;
                    if (R < 0) R = 0;

                    int G = pixel.G + l * 10;
                    if (G > 255) G = 255;
                    if (G < 0) G = 0;

                    int B = pixel.B + l * 10;
                    if (B > 255) B = 255;
                    if (B < 0) B = 0;

                    Color repaired = Color.FromArgb(R, G, B);
                    bmp.SetPixel(x, y, repaired);
                }
            }
            pictureBox1.Invalidate();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            blackPen = new Pen(Color.Black, 4);
        }


    }
}
