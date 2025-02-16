namespace WinQuestion
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
            btnyes = new Button();
            btnno = new Button();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(262, 20);
            label1.Name = "label1";
            label1.Size = new Size(232, 20);
            label1.TabIndex = 0;
            label1.Text = "Вы довольны своей зарплатой?";
            label1.Click += label1_Click;
            // 
            // btnyes
            // 
            btnyes.Location = new Point(326, 61);
            btnyes.Name = "btnyes";
            btnyes.Size = new Size(94, 29);
            btnyes.TabIndex = 1;
            btnyes.Text = "Да";
            btnyes.UseVisualStyleBackColor = true;
            btnyes.Click += btnyes_Click;
            // 
            // btnno
            // 
            btnno.Location = new Point(326, 127);
            btnno.Name = "btnno";
            btnno.Size = new Size(94, 29);
            btnno.TabIndex = 2;
            btnno.Text = "Нет";
            btnno.UseVisualStyleBackColor = true;
            btnno.Click += button2_Click;
            btnno.MouseMove += btnno_MouseMove;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(btnno);
            Controls.Add(btnyes);
            Controls.Add(label1);
            FormBorderStyle = FormBorderStyle.Fixed3D;
            Name = "Form1";
            Text = "Насущный вопрос";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Button btnyes;
        private Button btnno;
    }
}
