namespace laba7
{
    partial class WinAsynchMethod
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
            components = new System.ComponentModel.Container();
            button1 = new Button();
            button2 = new Button();
            label1 = new Label();
            label2 = new Label();
            textBox1 = new TextBox();
            textBox2 = new TextBox();
            helpProvider1 = new HelpProvider();
            button3 = new Button();
            toolTip1 = new ToolTip(components);
            SuspendLayout();
            // 
            // button1
            // 
            helpProvider1.SetHelpString(button1, "Sum");
            button1.Location = new Point(232, 25);
            button1.Name = "button1";
            helpProvider1.SetShowHelp(button1, true);
            button1.Size = new Size(75, 23);
            button1.TabIndex = 0;
            button1.Text = "Сумма";
            toolTip1.SetToolTip(button1, "Sum ");
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // button2
            // 
            helpProvider1.SetHelpString(button2, "Start work ");
            button2.Location = new Point(232, 68);
            button2.Name = "button2";
            helpProvider1.SetShowHelp(button2, true);
            button2.Size = new Size(75, 23);
            button2.TabIndex = 1;
            button2.Text = "Работа";
            toolTip1.SetToolTip(button2, "Start work");
            button2.UseVisualStyleBackColor = true;
            button2.Click += button2_Click;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(12, 29);
            label1.Name = "label1";
            label1.Size = new Size(71, 15);
            label1.TabIndex = 2;
            label1.Text = "Значение А";
            label1.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(12, 72);
            label2.Name = "label2";
            label2.Size = new Size(70, 15);
            label2.TabIndex = 3;
            label2.Text = "Значение В";
            // 
            // textBox1
            // 
            helpProvider1.SetHelpString(textBox1, "For input integer A");
            textBox1.Location = new Point(102, 26);
            textBox1.Name = "textBox1";
            helpProvider1.SetShowHelp(textBox1, true);
            textBox1.Size = new Size(100, 23);
            textBox1.TabIndex = 4;
            toolTip1.SetToolTip(textBox1, "For input integer A");
            // 
            // textBox2
            // 
            helpProvider1.SetHelpString(textBox2, "For input integer B");
            textBox2.Location = new Point(102, 69);
            textBox2.Name = "textBox2";
            helpProvider1.SetShowHelp(textBox2, true);
            textBox2.Size = new Size(100, 23);
            textBox2.TabIndex = 5;
            toolTip1.SetToolTip(textBox2, "For input integer B");
            // 
            // helpProvider1
            // 
            helpProvider1.HelpNamespace = "D:\\Code\\cplus_tasks\\c#_osipov\\laba8\\spravka.html";
            // 
            // button3
            // 
            button3.Cursor = Cursors.Help;
            helpProvider1.SetHelpString(button3, "Help to helping with help");
            button3.Location = new Point(713, 415);
            button3.Name = "button3";
            helpProvider1.SetShowHelp(button3, true);
            button3.Size = new Size(75, 23);
            button3.TabIndex = 6;
            button3.Text = "Help";
            button3.UseVisualStyleBackColor = true;
            button3.Click += button3_Click;
            // 
            // WinAsynchMethod
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(button3);
            Controls.Add(textBox2);
            Controls.Add(textBox1);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(button2);
            Controls.Add(button1);
            FormBorderStyle = FormBorderStyle.FixedDialog;
            HelpButton = true;
            MaximizeBox = false;
            MinimizeBox = false;
            Name = "WinAsynchMethod";
            Text = "Асинхронный запуск";
            Load += WinAsynchMethod_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button button1;
        private Button button2;
        private Label label1;
        private Label label2;
        private TextBox textBox1;
        private TextBox textBox2;
        private HelpProvider helpProvider1;
        private Button button3;
        private ToolTip toolTip1;
    }
}