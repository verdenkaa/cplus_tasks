namespace WinQuestion
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            groupBox1 = new GroupBox();
            memberList2 = new CheckedListBox();
            peopleList = new ComboBox();
            button1 = new Button();
            button2 = new Button();
            button3 = new Button();
            groupBox1.SuspendLayout();
            SuspendLayout();
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(memberList2);
            groupBox1.Location = new Point(46, 22);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(298, 206);
            groupBox1.TabIndex = 0;
            groupBox1.TabStop = false;
            groupBox1.Text = "Список участников";
            // 
            // memberList2
            // 
            memberList2.FormattingEnabled = true;
            memberList2.Location = new Point(30, 38);
            memberList2.Name = "memberList2";
            memberList2.Size = new Size(150, 114);
            memberList2.TabIndex = 0;
            // 
            // peopleList
            // 
            peopleList.FormattingEnabled = true;
            peopleList.Items.AddRange(new object[] { "Первый", "Второй", "Третий" });
            peopleList.Location = new Point(502, 33);
            peopleList.Name = "peopleList";
            peopleList.Size = new Size(151, 28);
            peopleList.TabIndex = 1;
            // 
            // button1
            // 
            button1.Location = new Point(402, 33);
            button1.Name = "button1";
            button1.Size = new Size(94, 29);
            button1.TabIndex = 2;
            button1.Text = "Добавить";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            button2.Location = new Point(402, 68);
            button2.Name = "button2";
            button2.Size = new Size(94, 29);
            button2.TabIndex = 3;
            button2.Text = "Удалить";
            button2.UseVisualStyleBackColor = true;
            button2.Click += button2_Click;
            // 
            // button3
            // 
            button3.Location = new Point(402, 103);
            button3.Name = "button3";
            button3.Size = new Size(112, 29);
            button3.TabIndex = 4;
            button3.Text = "Сортировать";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // Form2
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(button3);
            Controls.Add(button2);
            Controls.Add(button1);
            Controls.Add(peopleList);
            Controls.Add(groupBox1);
            Name = "Form2";
            Text = "Работа со списками";
            groupBox1.ResumeLayout(false);
            ResumeLayout(false);
        }

        #endregion

        private GroupBox groupBox1;
        private CheckedListBox memberList2;
        private ComboBox peopleList;
        private Button button1;
        private Button button2;
        private Button button3;
    }
}