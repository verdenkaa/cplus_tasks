using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using System.Reflection;
using System.Globalization;
using System.Resources;
using System.Threading;
// TODO: Add the using directives to enable localization in this application.

namespace UsabilityDemo
{
	/// <summary>
	/// Summary description for UsabilityDemo.
	/// </summary>
	public class UsabilityDemo : System.Windows.Forms.Form
	{
		private System.Windows.Forms.TextBox OutputTextBox;
		private System.Windows.Forms.Button DateButton;
		private System.Windows.Forms.Button CurrencyButton;
		private System.Windows.Forms.Button StringButton;
		private System.Windows.Forms.Button AppExitButton;
		private System.Windows.Forms.MainMenu UsabilityDemoMenu;
		private System.Windows.Forms.MenuItem HelpMenu;
		private System.Windows.Forms.MenuItem HelpMenuItem;
		private System.Windows.Forms.HelpProvider UsabilityDemoHelpProvider;
		private System.Windows.Forms.ToolTip UsabilityDemoToolTip;
		private System.ComponentModel.IContainer components;

		public string ChosenCulture;
		private bool EnableButtons = false;
		private System.Windows.Forms.Button CultureButton;

        // TODO: Declare a private resource manager variable.
        private ResourceManager RM;

		public UsabilityDemo()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			// Set the culture to the default and create a Resource Manager.
			ChosenCulture = CultureInfo.InstalledUICulture.ToString();

            // TODO: Create an object instance of the resource manager.
            RM = new ResourceManager("UsabilityDemo.UsabilityDemoText", Assembly.GetExecutingAssembly());

		}

		public UsabilityDemo (string clientCulture)
		{
			InitializeComponent();

			ChosenCulture = clientCulture;
			EnableButtons = true;

            // TODO: Create an object instance of the resource manager.
            RM = new ResourceManager("UsabilityDemo.UsabilityDemoText", Assembly.GetExecutingAssembly());
        }

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(UsabilityDemo));
            this.OutputTextBox = new System.Windows.Forms.TextBox();
            this.DateButton = new System.Windows.Forms.Button();
            this.CurrencyButton = new System.Windows.Forms.Button();
            this.StringButton = new System.Windows.Forms.Button();
            this.AppExitButton = new System.Windows.Forms.Button();
            this.UsabilityDemoMenu = new System.Windows.Forms.MainMenu(this.components);
            this.HelpMenu = new System.Windows.Forms.MenuItem();
            this.HelpMenuItem = new System.Windows.Forms.MenuItem();
            this.UsabilityDemoHelpProvider = new System.Windows.Forms.HelpProvider();
            this.CultureButton = new System.Windows.Forms.Button();
            this.UsabilityDemoToolTip = new System.Windows.Forms.ToolTip(this.components);
            this.SuspendLayout();
            // 
            // OutputTextBox
            // 
            resources.ApplyResources(this.OutputTextBox, "OutputTextBox");
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this.OutputTextBox, resources.GetString("OutputTextBox.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this.OutputTextBox, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("OutputTextBox.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this.OutputTextBox, resources.GetString("OutputTextBox.HelpString"));
            this.OutputTextBox.Name = "OutputTextBox";
            this.OutputTextBox.ReadOnly = true;
            this.UsabilityDemoHelpProvider.SetShowHelp(this.OutputTextBox, ((bool)(resources.GetObject("OutputTextBox.ShowHelp"))));
            this.OutputTextBox.TabStop = false;
            this.UsabilityDemoToolTip.SetToolTip(this.OutputTextBox, resources.GetString("OutputTextBox.ToolTip"));
            // 
            // DateButton
            // 
            resources.ApplyResources(this.DateButton, "DateButton");
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this.DateButton, resources.GetString("DateButton.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this.DateButton, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("DateButton.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this.DateButton, resources.GetString("DateButton.HelpString"));
            this.DateButton.Name = "DateButton";
            this.UsabilityDemoHelpProvider.SetShowHelp(this.DateButton, ((bool)(resources.GetObject("DateButton.ShowHelp"))));
            this.UsabilityDemoToolTip.SetToolTip(this.DateButton, resources.GetString("DateButton.ToolTip"));
            this.DateButton.Click += new System.EventHandler(this.DateButton_Click);
            // 
            // CurrencyButton
            // 
            resources.ApplyResources(this.CurrencyButton, "CurrencyButton");
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this.CurrencyButton, resources.GetString("CurrencyButton.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this.CurrencyButton, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("CurrencyButton.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this.CurrencyButton, resources.GetString("CurrencyButton.HelpString"));
            this.CurrencyButton.Name = "CurrencyButton";
            this.UsabilityDemoHelpProvider.SetShowHelp(this.CurrencyButton, ((bool)(resources.GetObject("CurrencyButton.ShowHelp"))));
            this.UsabilityDemoToolTip.SetToolTip(this.CurrencyButton, resources.GetString("CurrencyButton.ToolTip"));
            this.CurrencyButton.Click += new System.EventHandler(this.CurrencyButton_Click);
            // 
            // StringButton
            // 
            resources.ApplyResources(this.StringButton, "StringButton");
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this.StringButton, resources.GetString("StringButton.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this.StringButton, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("StringButton.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this.StringButton, resources.GetString("StringButton.HelpString"));
            this.StringButton.Name = "StringButton";
            this.UsabilityDemoHelpProvider.SetShowHelp(this.StringButton, ((bool)(resources.GetObject("StringButton.ShowHelp"))));
            this.UsabilityDemoToolTip.SetToolTip(this.StringButton, resources.GetString("StringButton.ToolTip"));
            this.StringButton.Click += new System.EventHandler(this.StringButton_Click);
            // 
            // AppExitButton
            // 
            resources.ApplyResources(this.AppExitButton, "AppExitButton");
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this.AppExitButton, resources.GetString("AppExitButton.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this.AppExitButton, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("AppExitButton.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this.AppExitButton, resources.GetString("AppExitButton.HelpString"));
            this.AppExitButton.Name = "AppExitButton";
            this.UsabilityDemoHelpProvider.SetShowHelp(this.AppExitButton, ((bool)(resources.GetObject("AppExitButton.ShowHelp"))));
            this.UsabilityDemoToolTip.SetToolTip(this.AppExitButton, resources.GetString("AppExitButton.ToolTip"));
            this.AppExitButton.Click += new System.EventHandler(this.AppExitButton_Click);
            // 
            // UsabilityDemoMenu
            // 
            this.UsabilityDemoMenu.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
            this.HelpMenu});
            resources.ApplyResources(this.UsabilityDemoMenu, "UsabilityDemoMenu");
            // 
            // HelpMenu
            // 
            resources.ApplyResources(this.HelpMenu, "HelpMenu");
            this.HelpMenu.Index = 0;
            this.HelpMenu.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
            this.HelpMenuItem});
            // 
            // HelpMenuItem
            // 
            resources.ApplyResources(this.HelpMenuItem, "HelpMenuItem");
            this.HelpMenuItem.Index = 0;
            this.HelpMenuItem.Click += new System.EventHandler(this.HelpMenuItem_Click);
            // 
            // UsabilityDemoHelpProvider
            // 
            resources.ApplyResources(this.UsabilityDemoHelpProvider, "UsabilityDemoHelpProvider");
            // 
            // CultureButton
            // 
            resources.ApplyResources(this.CultureButton, "CultureButton");
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this.CultureButton, resources.GetString("CultureButton.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this.CultureButton, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("CultureButton.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this.CultureButton, resources.GetString("CultureButton.HelpString"));
            this.CultureButton.Name = "CultureButton";
            this.UsabilityDemoHelpProvider.SetShowHelp(this.CultureButton, ((bool)(resources.GetObject("CultureButton.ShowHelp"))));
            this.UsabilityDemoToolTip.SetToolTip(this.CultureButton, resources.GetString("CultureButton.ToolTip"));
            this.CultureButton.Click += new System.EventHandler(this.CultureButton_Click);
            // 
            // UsabilityDemo
            // 
            resources.ApplyResources(this, "$this");
            this.Controls.Add(this.CultureButton);
            this.Controls.Add(this.AppExitButton);
            this.Controls.Add(this.StringButton);
            this.Controls.Add(this.CurrencyButton);
            this.Controls.Add(this.DateButton);
            this.Controls.Add(this.OutputTextBox);
            this.HelpButton = true;
            this.UsabilityDemoHelpProvider.SetHelpKeyword(this, resources.GetString("$this.HelpKeyword"));
            this.UsabilityDemoHelpProvider.SetHelpNavigator(this, ((System.Windows.Forms.HelpNavigator)(resources.GetObject("$this.HelpNavigator"))));
            this.UsabilityDemoHelpProvider.SetHelpString(this, resources.GetString("$this.HelpString"));
            this.MaximizeBox = false;
            this.Menu = this.UsabilityDemoMenu;
            this.MinimizeBox = false;
            this.Name = "UsabilityDemo";
            this.UsabilityDemoHelpProvider.SetShowHelp(this, ((bool)(resources.GetObject("$this.ShowHelp"))));
            this.UsabilityDemoToolTip.SetToolTip(this, resources.GetString("$this.ToolTip"));
            this.Load += new System.EventHandler(this.UsabilityDemo_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new UsabilityDemo());
		}

		private void UsabilityDemo_Load(object sender, System.EventArgs e)
		{
			if (!EnableButtons)
			{
				DateButton.Enabled = false;
				CurrencyButton.Enabled = false;
				StringButton.Enabled = false;
			}
		}

		private void CultureButton_Click(object sender, System.EventArgs e)
		{
			CultureChooser GetCultureForm = new CultureChooser();
			GetCultureForm.ShowDialog();
			ChosenCulture = GetCultureForm.UsersChoice;
			GetCultureForm.Close();

            // TODO: Set the current thread’s Culture and UICulture property values to the user requested in CultureChooser.
            Thread.CurrentThread.CurrentUICulture = new CultureInfo(ChosenCulture, false);
            Thread.CurrentThread.CurrentCulture = new CultureInfo(ChosenCulture, false);

			UsabilityDemo DemoForm = new UsabilityDemo(ChosenCulture);

			DateButton.Enabled = true;
			CurrencyButton.Enabled = true;
			StringButton.Enabled = true;

			this.Hide();
			DemoForm.Show();
		}

		private void DateButton_Click(object sender, System.EventArgs e)
		{
			CultureInfo DesiredCulture = new CultureInfo(ChosenCulture);
			DateTime curDate = DateTime.Now;
			OutputTextBox.Text = curDate.ToString ("g", DesiredCulture);
		}

		private void CurrencyButton_Click(object sender, System.EventArgs e)
		{
			CultureInfo DesiredCulture = new CultureInfo(ChosenCulture);
			const double dollarAmount = 1982.47;
			OutputTextBox.Text = dollarAmount.ToString ("c", DesiredCulture);
		}

		private void StringButton_Click(object sender, System.EventArgs e)
		{
            // TODO: Use the resource manager to get the text string and display it in the text box.
            OutputTextBox.Text = RM.GetString("SimlpeTextString");
        }

		private void AppExitButton_Click(object sender, System.EventArgs e)
		{
			this.Close();
			Application.Exit();
		}

		private void HelpMenuItem_Click(object sender, System.EventArgs e)
		{
			Help.ShowHelp (this, UsabilityDemoHelpProvider.HelpNamespace);
		}
	}
}
