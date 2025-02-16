namespace laba1
{
    partial class MdiApplication
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MdiApplication));
            menuStrip = new MenuStrip();
            FileMenuItem = new ToolStripMenuItem();
            NewMenuItem = new ToolStripMenuItem();
            toolStripSeparator3 = new ToolStripSeparator();
            ExitMenuItem = new ToolStripMenuItem();
            WindowMenuItem = new ToolStripMenuItem();
            WindowCascadMenuItem = new ToolStripMenuItem();
            WindowTileMenuItem = new ToolStripMenuItem();
            windowsMenu = new ToolStripMenuItem();
            newWindowToolStripMenuItem = new ToolStripMenuItem();
            WindowCascadeMenuItem = new ToolStripMenuItem();
            toolStripMenuItem1 = new ToolStripMenuItem();
            statusStrip = new StatusStrip();
            toolStripStatusLabel = new ToolStripStatusLabel();
            toolTip = new ToolTip(components);
            MdiMenu = new MenuStrip();
            toolStrip1 = new ToolStrip();
            toolStripButton1 = new ToolStripButton();
            toolStripSeparator1 = new ToolStripSeparator();
            toolStripButton2 = new ToolStripButton();
            toolStripButton3 = new ToolStripButton();
            menuStrip.SuspendLayout();
            statusStrip.SuspendLayout();
            toolStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // menuStrip
            // 
            menuStrip.ImageScalingSize = new Size(20, 20);
            menuStrip.Items.AddRange(new ToolStripItem[] { FileMenuItem, WindowMenuItem });
            menuStrip.Location = new Point(0, 24);
            menuStrip.MdiWindowListItem = windowsMenu;
            menuStrip.Name = "menuStrip";
            menuStrip.Padding = new Padding(8, 3, 0, 3);
            menuStrip.Size = new Size(746, 30);
            menuStrip.TabIndex = 0;
            menuStrip.Text = "MenuStrip";
            // 
            // FileMenuItem
            // 
            FileMenuItem.DropDownItems.AddRange(new ToolStripItem[] { NewMenuItem, toolStripSeparator3, ExitMenuItem });
            FileMenuItem.ImageTransparentColor = SystemColors.ActiveBorder;
            FileMenuItem.Name = "FileMenuItem";
            FileMenuItem.Size = new Size(59, 24);
            FileMenuItem.Text = "&Файл";
            // 
            // NewMenuItem
            // 
            NewMenuItem.Image = (Image)resources.GetObject("NewMenuItem.Image");
            NewMenuItem.ImageTransparentColor = Color.Black;
            NewMenuItem.Name = "NewMenuItem";
            NewMenuItem.ShortcutKeys = Keys.Control | Keys.N;
            NewMenuItem.Size = new Size(200, 26);
            NewMenuItem.Text = "&Создать";
            NewMenuItem.Click += ShowNewForm;
            // 
            // toolStripSeparator3
            // 
            toolStripSeparator3.Name = "toolStripSeparator3";
            toolStripSeparator3.Size = new Size(197, 6);
            // 
            // ExitMenuItem
            // 
            ExitMenuItem.Name = "ExitMenuItem";
            ExitMenuItem.Size = new Size(200, 26);
            ExitMenuItem.Text = "В&ыход";
            ExitMenuItem.Click += ExitToolsStripMenuItem_Click;
            // 
            // WindowMenuItem
            // 
            WindowMenuItem.DropDownItems.AddRange(new ToolStripItem[] { WindowCascadMenuItem, WindowTileMenuItem });
            WindowMenuItem.Name = "WindowMenuItem";
            WindowMenuItem.Size = new Size(59, 24);
            WindowMenuItem.Text = "Окно";
            // 
            // WindowCascadMenuItem
            // 
            WindowCascadMenuItem.Name = "WindowCascadMenuItem";
            WindowCascadMenuItem.Size = new Size(141, 26);
            WindowCascadMenuItem.Text = "Каскад";
            WindowCascadMenuItem.Click += каскадToolStripMenuItem_Click;
            // 
            // WindowTileMenuItem
            // 
            WindowTileMenuItem.Name = "WindowTileMenuItem";
            WindowTileMenuItem.Size = new Size(141, 26);
            WindowTileMenuItem.Text = "Плитка";
            WindowTileMenuItem.Click += WindowTileMenuItem_Click;
            // 
            // windowsMenu
            // 
            windowsMenu.DropDownItems.AddRange(new ToolStripItem[] { newWindowToolStripMenuItem, WindowCascadeMenuItem, toolStripMenuItem1 });
            windowsMenu.Name = "windowsMenu";
            windowsMenu.Size = new Size(58, 24);
            windowsMenu.Text = "&Окна";
            windowsMenu.Click += windowsMenu_Click;
            // 
            // newWindowToolStripMenuItem
            // 
            newWindowToolStripMenuItem.Name = "newWindowToolStripMenuItem";
            newWindowToolStripMenuItem.Size = new Size(175, 26);
            newWindowToolStripMenuItem.Text = "&Новое окно";
            newWindowToolStripMenuItem.Click += ShowNewForm;
            // 
            // WindowCascadeMenuItem
            // 
            WindowCascadeMenuItem.Name = "WindowCascadeMenuItem";
            WindowCascadeMenuItem.Size = new Size(175, 26);
            WindowCascadeMenuItem.Text = "&Каскадом";
            WindowCascadeMenuItem.Click += CascadeToolStripMenuItem_Click;
            // 
            // toolStripMenuItem1
            // 
            toolStripMenuItem1.Name = "toolStripMenuItem1";
            toolStripMenuItem1.Size = new Size(175, 26);
            // 
            // statusStrip
            // 
            statusStrip.ImageScalingSize = new Size(20, 20);
            statusStrip.Items.AddRange(new ToolStripItem[] { toolStripStatusLabel });
            statusStrip.Location = new Point(0, 457);
            statusStrip.Name = "statusStrip";
            statusStrip.Padding = new Padding(1, 0, 19, 0);
            statusStrip.Size = new Size(746, 26);
            statusStrip.TabIndex = 2;
            statusStrip.Text = "StatusStrip";
            // 
            // toolStripStatusLabel
            // 
            toolStripStatusLabel.Name = "toolStripStatusLabel";
            toolStripStatusLabel.Size = new Size(83, 20);
            toolStripStatusLabel.Text = "Состояние";
            // 
            // MdiMenu
            // 
            MdiMenu.ImageScalingSize = new Size(20, 20);
            MdiMenu.ImeMode = ImeMode.NoControl;
            MdiMenu.Location = new Point(0, 0);
            MdiMenu.Name = "MdiMenu";
            MdiMenu.Size = new Size(746, 24);
            MdiMenu.TabIndex = 4;
            MdiMenu.Text = "MdiMenu";
            MdiMenu.ItemClicked += menuStrip1_ItemClicked;
            // 
            // toolStrip1
            // 
            toolStrip1.ImageScalingSize = new Size(20, 20);
            toolStrip1.Items.AddRange(new ToolStripItem[] { toolStripButton1, toolStripSeparator1, toolStripButton2, toolStripButton3 });
            toolStrip1.Location = new Point(0, 54);
            toolStrip1.Name = "toolStrip1";
            toolStrip1.Size = new Size(746, 27);
            toolStrip1.TabIndex = 6;
            toolStrip1.Text = "toolStrip1";
            toolStrip1.ItemClicked += toolStrip1_ItemClicked;
            // 
            // toolStripButton1
            // 
            toolStripButton1.DisplayStyle = ToolStripItemDisplayStyle.Image;
            toolStripButton1.Image = (Image)resources.GetObject("toolStripButton1.Image");
            toolStripButton1.ImageTransparentColor = Color.Magenta;
            toolStripButton1.Name = "toolStripButton1";
            toolStripButton1.Size = new Size(29, 24);
            toolStripButton1.Tag = "NewDoc";
            toolStripButton1.Text = "toolStripButton1";
            toolStripButton1.ToolTipText = "Create new document";
            // 
            // toolStripSeparator1
            // 
            toolStripSeparator1.Name = "toolStripSeparator1";
            toolStripSeparator1.Size = new Size(6, 27);
            // 
            // toolStripButton2
            // 
            toolStripButton2.DisplayStyle = ToolStripItemDisplayStyle.Image;
            toolStripButton2.Image = (Image)resources.GetObject("toolStripButton2.Image");
            toolStripButton2.ImageTransparentColor = Color.Magenta;
            toolStripButton2.Name = "toolStripButton2";
            toolStripButton2.Size = new Size(29, 24);
            toolStripButton2.Tag = "Cascade";
            toolStripButton2.Text = "toolStripButton2";
            toolStripButton2.ToolTipText = "Windows cascade";
            // 
            // toolStripButton3
            // 
            toolStripButton3.DisplayStyle = ToolStripItemDisplayStyle.Image;
            toolStripButton3.Image = (Image)resources.GetObject("toolStripButton3.Image");
            toolStripButton3.ImageTransparentColor = Color.Magenta;
            toolStripButton3.Name = "toolStripButton3";
            toolStripButton3.Size = new Size(29, 24);
            toolStripButton3.Tag = "Title";
            toolStripButton3.Text = "toolStripButton3";
            toolStripButton3.ToolTipText = "Windows title";
            // 
            // MdiApplication
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(746, 483);
            Controls.Add(toolStrip1);
            Controls.Add(statusStrip);
            Controls.Add(menuStrip);
            Controls.Add(MdiMenu);
            IsMdiContainer = true;
            MainMenuStrip = menuStrip;
            Margin = new Padding(4, 5, 4, 5);
            Name = "MdiApplication";
            Text = "ParentAplication";
            Load += MdiApplication_Load;
            menuStrip.ResumeLayout(false);
            menuStrip.PerformLayout();
            statusStrip.ResumeLayout(false);
            statusStrip.PerformLayout();
            toolStrip1.ResumeLayout(false);
            toolStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();

        }
        #endregion


        private System.Windows.Forms.MenuStrip menuStrip;
        private System.Windows.Forms.StatusStrip statusStrip;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator3;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel;
        private System.Windows.Forms.ToolStripMenuItem FileMenuItem;
        private System.Windows.Forms.ToolStripMenuItem NewMenuItem;
        private System.Windows.Forms.ToolStripMenuItem ExitMenuItem;
        private System.Windows.Forms.ToolStripMenuItem windowsMenu;
        private System.Windows.Forms.ToolStripMenuItem newWindowToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem WindowCascadeMenuItem;
        private System.Windows.Forms.ToolTip toolTip;
        private MenuStrip MdiMenu;
        private ToolStripMenuItem toolStripMenuItem1;
        private ToolStripMenuItem WindowMenuItem;
        private ToolStripMenuItem WindowCascadMenuItem;
        private ToolStripMenuItem WindowTileMenuItem;
        private ToolStrip toolStrip1;
        private ToolStripButton toolStripButton1;
        private ToolStripSeparator toolStripSeparator1;
        private ToolStripButton toolStripButton2;
        private ToolStripButton toolStripButton3;
    }
}



