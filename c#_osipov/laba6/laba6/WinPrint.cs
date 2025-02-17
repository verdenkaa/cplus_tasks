using Microsoft.VisualBasic;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.DataFormats;

namespace laba6
{
    public partial class WinPrint : Form
    {
        public string s;
        public string[] strings;
        public int ArrayCounter = 0;

        public WinPrint()
        {
            InitializeComponent();
        }

        private void printDocument1_PrintPage(object sender, System.Drawing.Printing.PrintPageEventArgs e)
        {
            float LeftMargin = e.MarginBounds.Left;
            float TopMargin = e.MarginBounds.Top;
            float MyLines = 0;
            float YPosition = 0;
            int Counter = 0;
            string CurrentLine;
            MyLines = e.MarginBounds.Height /
            this.Font.GetHeight(e.Graphics);
            while (Counter < MyLines && ArrayCounter <= strings.Length - 1)
            {
                CurrentLine = strings[ArrayCounter];
                YPosition = TopMargin + Counter *
               this.Font.GetHeight(e.Graphics);
                e.Graphics.DrawString(CurrentLine, this.Font,
               Brushes.Black, LeftMargin, YPosition, new StringFormat());
                Counter++;
                ArrayCounter++;
            }
            if (!(ArrayCounter >= strings.GetLength(0) - 1))
                e.HasMorePages = true;
            else
                e.HasMorePages = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            pageSetupDialog1.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (printDialog1.ShowDialog() == DialogResult.OK)
                printDocument1.Print();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            //printPreviewDialog1.ShowDialog();
            CustomWinPrint aForm = new CustomWinPrint();
            System.Windows.Forms.DialogResult aResult;
            aForm.printPreviewControl1.Document = printDocument1;
            aResult = aForm.ShowDialog();
            if (aResult == System.Windows.Forms.DialogResult.OK)
                printDocument1.Print();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            System.Windows.Forms.DialogResult aResult;
            aResult = openFileDialog1.ShowDialog();
            if (aResult == System.Windows.Forms.DialogResult.OK)
            {
                System.IO.StreamReader aReader =
                new System.IO.StreamReader(openFileDialog1.FileName);
                s = aReader.ReadToEnd();
                aReader.Close();
                strings = s.Split('\n');
            }
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }


        private void button5_Click(object sender, EventArgs e)
        {
            this.DialogResult = System.Windows.Forms.DialogResult.OK;
        }

        private void printPreviewControl1_Click(object sender, EventArgs e)
        {

        }
    }
}
