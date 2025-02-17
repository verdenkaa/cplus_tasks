using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinQuestion
{
    public partial class WinLinkLabel : Form
    {
        public WinLinkLabel()
        {
            InitializeComponent();
        }

        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            DialogResult aResult;
            WinLinkChild aForm = new WinLinkChild();
            aResult = aForm.ShowDialog();
            if (aResult == System.Windows.Forms.DialogResult.OK)
            {
                MessageBox.Show("Your name is " + aForm.textBox1.Text + " " + aForm.textBox2.Text);
            }
            linkLabel1.LinkVisited = true;
            MessageBox.Show("Your address is " + aForm.textBox3.Text);
            MessageBox.Show("Your phone number is " +
            aForm.maskedTextBox1.Text);
        }

        private void linkLabel2_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e)
        {
            //System.Diagnostics.Process.Start("https://www.microsoft.com/ru-ru");
            Process.Start(new ProcessStartInfo { FileName = @"https://www.microsoft.com/ru-ru", UseShellExecute = true });
            linkLabel2.LinkVisited = true;
        }
    }
}
