using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WinQuestion
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            memberList2.Sorted = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (peopleList.Text.Length != 0)
            {
                memberList2.Items.Add(peopleList.Text);
            }
            else MessageBox.Show("Выберите элемент из списка или введите новый");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            while (memberList2.CheckedIndices.Count > 0)
                memberList2.Items.RemoveAt(memberList2.CheckedIndices[0]);
        }
    }
}
