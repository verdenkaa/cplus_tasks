namespace laba2
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            textBox1 = new TextBox();
            textBox2 = new TextBox();
            textBox3 = new TextBox();
            label4 = new Label();
            textBox4 = new TextBox();
            button1 = new Button();
            label5 = new Label();
            textBox5 = new TextBox();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(13, 30);
            label1.Name = "label1";
            label1.Size = new Size(104, 20);
            label1.TabIndex = 0;
            label1.Text = "Значение X0: ";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(14, 67);
            label2.Name = "label2";
            label2.Size = new Size(103, 20);
            label2.TabIndex = 1;
            label2.Text = "Значение Xk: ";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(14, 101);
            label3.Name = "label3";
            label3.Size = new Size(44, 20);
            label3.TabIndex = 2;
            label3.Text = "Шаг: ";
            // 
            // textBox1
            // 
            textBox1.Location = new Point(141, 23);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(125, 27);
            textBox1.TabIndex = 3;
            textBox1.Text = "2";
            // 
            // textBox2
            // 
            textBox2.Location = new Point(141, 64);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(125, 27);
            textBox2.TabIndex = 4;
            textBox2.Text = "3";
            // 
            // textBox3
            // 
            textBox3.Location = new Point(141, 101);
            textBox3.Name = "textBox3";
            textBox3.Size = new Size(125, 27);
            textBox3.TabIndex = 5;
            textBox3.Text = "0,2";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(13, 218);
            label4.Name = "label4";
            label4.Size = new Size(170, 20);
            label4.TabIndex = 6;
            label4.Text = "Результат выполнения:";
            // 
            // textBox4
            // 
            textBox4.Location = new Point(13, 251);
            textBox4.Multiline = true;
            textBox4.Name = "textBox4";
            textBox4.ScrollBars = ScrollBars.Both;
            textBox4.Size = new Size(426, 201);
            textBox4.TabIndex = 7;
            // 
            // button1
            // 
            button1.Location = new Point(216, 475);
            button1.Name = "button1";
            button1.Size = new Size(100, 29);
            button1.TabIndex = 8;
            button1.Text = "Выполнить";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(14, 155);
            label5.Name = "label5";
            label5.Size = new Size(83, 20);
            label5.TabIndex = 9;
            label5.Text = "Константа:";
            // 
            // textBox5
            // 
            textBox5.Location = new Point(141, 148);
            textBox5.Name = "textBox5";
            textBox5.Size = new Size(125, 27);
            textBox5.TabIndex = 10;
            textBox5.Text = "1";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(451, 532);
            Controls.Add(textBox5);
            Controls.Add(label5);
            Controls.Add(button1);
            Controls.Add(textBox4);
            Controls.Add(label4);
            Controls.Add(textBox3);
            Controls.Add(textBox2);
            Controls.Add(textBox1);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private TextBox textBox1;
        private TextBox textBox2;
        private TextBox textBox3;
        private Label label4;
        private TextBox textBox4;
        private Button button1;
        private Label label5;
        private TextBox textBox5;
    }
}
