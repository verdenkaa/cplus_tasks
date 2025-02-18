using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;

namespace UsabilityDemo
{
	/// <summary>
	/// Summary description for CultureChooser.
	/// </summary>
	public class CultureChooser : System.Windows.Forms.Form
	{
		private System.Windows.Forms.GroupBox CulturesGroupBox;
		private System.Windows.Forms.Button ChooseCultureButton;
		private System.Windows.Forms.RadioButton EnglishChoice;
		private System.Windows.Forms.RadioButton FrenchChoice;
		private System.Windows.Forms.RadioButton GermanChoice;
		private System.Windows.Forms.RadioButton JapaneseChoice;

		private readonly string EnglishCulture;
		private readonly string FrenchCulture;
		private readonly string GermanCulture;
		private readonly string JapaneseCulture;

		private string CultureChoiceString;

		/// <summary>
		/// Required designer variable.
		/// </summary>
		private System.ComponentModel.Container components = null;

		public CultureChooser()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			EnglishCulture = "en-US";
			FrenchCulture = "fr-FR";
			GermanCulture = "de-DE";
			JapaneseCulture = "ja-JP";
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if(components != null)
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
			System.Resources.ResourceManager resources = new System.Resources.ResourceManager(typeof(CultureChooser));
			this.CulturesGroupBox = new System.Windows.Forms.GroupBox();
			this.JapaneseChoice = new System.Windows.Forms.RadioButton();
			this.GermanChoice = new System.Windows.Forms.RadioButton();
			this.FrenchChoice = new System.Windows.Forms.RadioButton();
			this.EnglishChoice = new System.Windows.Forms.RadioButton();
			this.ChooseCultureButton = new System.Windows.Forms.Button();
			this.CulturesGroupBox.SuspendLayout();
			this.SuspendLayout();
			// 
			// CulturesGroupBox
			// 
			this.CulturesGroupBox.AccessibleDescription = ((string)(resources.GetObject("CulturesGroupBox.AccessibleDescription")));
			this.CulturesGroupBox.AccessibleName = ((string)(resources.GetObject("CulturesGroupBox.AccessibleName")));
			this.CulturesGroupBox.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("CulturesGroupBox.Anchor")));
			this.CulturesGroupBox.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("CulturesGroupBox.BackgroundImage")));
			this.CulturesGroupBox.Controls.AddRange(new System.Windows.Forms.Control[] {
																						   this.JapaneseChoice,
																						   this.GermanChoice,
																						   this.FrenchChoice,
																						   this.EnglishChoice});
			this.CulturesGroupBox.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("CulturesGroupBox.Dock")));
			this.CulturesGroupBox.Enabled = ((bool)(resources.GetObject("CulturesGroupBox.Enabled")));
			this.CulturesGroupBox.Font = ((System.Drawing.Font)(resources.GetObject("CulturesGroupBox.Font")));
			this.CulturesGroupBox.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("CulturesGroupBox.ImeMode")));
			this.CulturesGroupBox.Location = ((System.Drawing.Point)(resources.GetObject("CulturesGroupBox.Location")));
			this.CulturesGroupBox.Name = "CulturesGroupBox";
			this.CulturesGroupBox.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("CulturesGroupBox.RightToLeft")));
			this.CulturesGroupBox.Size = ((System.Drawing.Size)(resources.GetObject("CulturesGroupBox.Size")));
			this.CulturesGroupBox.TabIndex = ((int)(resources.GetObject("CulturesGroupBox.TabIndex")));
			this.CulturesGroupBox.TabStop = false;
			this.CulturesGroupBox.Text = resources.GetString("CulturesGroupBox.Text");
			this.CulturesGroupBox.Visible = ((bool)(resources.GetObject("CulturesGroupBox.Visible")));
			// 
			// JapaneseChoice
			// 
			this.JapaneseChoice.AccessibleDescription = ((string)(resources.GetObject("JapaneseChoice.AccessibleDescription")));
			this.JapaneseChoice.AccessibleName = ((string)(resources.GetObject("JapaneseChoice.AccessibleName")));
			this.JapaneseChoice.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("JapaneseChoice.Anchor")));
			this.JapaneseChoice.Appearance = ((System.Windows.Forms.Appearance)(resources.GetObject("JapaneseChoice.Appearance")));
			this.JapaneseChoice.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("JapaneseChoice.BackgroundImage")));
			this.JapaneseChoice.CheckAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("JapaneseChoice.CheckAlign")));
			this.JapaneseChoice.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("JapaneseChoice.Dock")));
			this.JapaneseChoice.Enabled = ((bool)(resources.GetObject("JapaneseChoice.Enabled")));
			this.JapaneseChoice.FlatStyle = ((System.Windows.Forms.FlatStyle)(resources.GetObject("JapaneseChoice.FlatStyle")));
			this.JapaneseChoice.Font = ((System.Drawing.Font)(resources.GetObject("JapaneseChoice.Font")));
			this.JapaneseChoice.Image = ((System.Drawing.Image)(resources.GetObject("JapaneseChoice.Image")));
			this.JapaneseChoice.ImageAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("JapaneseChoice.ImageAlign")));
			this.JapaneseChoice.ImageIndex = ((int)(resources.GetObject("JapaneseChoice.ImageIndex")));
			this.JapaneseChoice.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("JapaneseChoice.ImeMode")));
			this.JapaneseChoice.Location = ((System.Drawing.Point)(resources.GetObject("JapaneseChoice.Location")));
			this.JapaneseChoice.Name = "JapaneseChoice";
			this.JapaneseChoice.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("JapaneseChoice.RightToLeft")));
			this.JapaneseChoice.Size = ((System.Drawing.Size)(resources.GetObject("JapaneseChoice.Size")));
			this.JapaneseChoice.TabIndex = ((int)(resources.GetObject("JapaneseChoice.TabIndex")));
			this.JapaneseChoice.Text = resources.GetString("JapaneseChoice.Text");
			this.JapaneseChoice.TextAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("JapaneseChoice.TextAlign")));
			this.JapaneseChoice.Visible = ((bool)(resources.GetObject("JapaneseChoice.Visible")));
			this.JapaneseChoice.CheckedChanged += new System.EventHandler(this.JapaneseChoice_CheckedChanged);
			// 
			// GermanChoice
			// 
			this.GermanChoice.AccessibleDescription = ((string)(resources.GetObject("GermanChoice.AccessibleDescription")));
			this.GermanChoice.AccessibleName = ((string)(resources.GetObject("GermanChoice.AccessibleName")));
			this.GermanChoice.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("GermanChoice.Anchor")));
			this.GermanChoice.Appearance = ((System.Windows.Forms.Appearance)(resources.GetObject("GermanChoice.Appearance")));
			this.GermanChoice.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("GermanChoice.BackgroundImage")));
			this.GermanChoice.CheckAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("GermanChoice.CheckAlign")));
			this.GermanChoice.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("GermanChoice.Dock")));
			this.GermanChoice.Enabled = ((bool)(resources.GetObject("GermanChoice.Enabled")));
			this.GermanChoice.FlatStyle = ((System.Windows.Forms.FlatStyle)(resources.GetObject("GermanChoice.FlatStyle")));
			this.GermanChoice.Font = ((System.Drawing.Font)(resources.GetObject("GermanChoice.Font")));
			this.GermanChoice.Image = ((System.Drawing.Image)(resources.GetObject("GermanChoice.Image")));
			this.GermanChoice.ImageAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("GermanChoice.ImageAlign")));
			this.GermanChoice.ImageIndex = ((int)(resources.GetObject("GermanChoice.ImageIndex")));
			this.GermanChoice.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("GermanChoice.ImeMode")));
			this.GermanChoice.Location = ((System.Drawing.Point)(resources.GetObject("GermanChoice.Location")));
			this.GermanChoice.Name = "GermanChoice";
			this.GermanChoice.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("GermanChoice.RightToLeft")));
			this.GermanChoice.Size = ((System.Drawing.Size)(resources.GetObject("GermanChoice.Size")));
			this.GermanChoice.TabIndex = ((int)(resources.GetObject("GermanChoice.TabIndex")));
			this.GermanChoice.Text = resources.GetString("GermanChoice.Text");
			this.GermanChoice.TextAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("GermanChoice.TextAlign")));
			this.GermanChoice.Visible = ((bool)(resources.GetObject("GermanChoice.Visible")));
			this.GermanChoice.CheckedChanged += new System.EventHandler(this.GermanChoice_CheckedChanged);
			// 
			// FrenchChoice
			// 
			this.FrenchChoice.AccessibleDescription = ((string)(resources.GetObject("FrenchChoice.AccessibleDescription")));
			this.FrenchChoice.AccessibleName = ((string)(resources.GetObject("FrenchChoice.AccessibleName")));
			this.FrenchChoice.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("FrenchChoice.Anchor")));
			this.FrenchChoice.Appearance = ((System.Windows.Forms.Appearance)(resources.GetObject("FrenchChoice.Appearance")));
			this.FrenchChoice.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("FrenchChoice.BackgroundImage")));
			this.FrenchChoice.CheckAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("FrenchChoice.CheckAlign")));
			this.FrenchChoice.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("FrenchChoice.Dock")));
			this.FrenchChoice.Enabled = ((bool)(resources.GetObject("FrenchChoice.Enabled")));
			this.FrenchChoice.FlatStyle = ((System.Windows.Forms.FlatStyle)(resources.GetObject("FrenchChoice.FlatStyle")));
			this.FrenchChoice.Font = ((System.Drawing.Font)(resources.GetObject("FrenchChoice.Font")));
			this.FrenchChoice.Image = ((System.Drawing.Image)(resources.GetObject("FrenchChoice.Image")));
			this.FrenchChoice.ImageAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("FrenchChoice.ImageAlign")));
			this.FrenchChoice.ImageIndex = ((int)(resources.GetObject("FrenchChoice.ImageIndex")));
			this.FrenchChoice.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("FrenchChoice.ImeMode")));
			this.FrenchChoice.Location = ((System.Drawing.Point)(resources.GetObject("FrenchChoice.Location")));
			this.FrenchChoice.Name = "FrenchChoice";
			this.FrenchChoice.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("FrenchChoice.RightToLeft")));
			this.FrenchChoice.Size = ((System.Drawing.Size)(resources.GetObject("FrenchChoice.Size")));
			this.FrenchChoice.TabIndex = ((int)(resources.GetObject("FrenchChoice.TabIndex")));
			this.FrenchChoice.Text = resources.GetString("FrenchChoice.Text");
			this.FrenchChoice.TextAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("FrenchChoice.TextAlign")));
			this.FrenchChoice.Visible = ((bool)(resources.GetObject("FrenchChoice.Visible")));
			this.FrenchChoice.CheckedChanged += new System.EventHandler(this.FrenchChoice_CheckedChanged);
			// 
			// EnglishChoice
			// 
			this.EnglishChoice.AccessibleDescription = ((string)(resources.GetObject("EnglishChoice.AccessibleDescription")));
			this.EnglishChoice.AccessibleName = ((string)(resources.GetObject("EnglishChoice.AccessibleName")));
			this.EnglishChoice.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("EnglishChoice.Anchor")));
			this.EnglishChoice.Appearance = ((System.Windows.Forms.Appearance)(resources.GetObject("EnglishChoice.Appearance")));
			this.EnglishChoice.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("EnglishChoice.BackgroundImage")));
			this.EnglishChoice.CheckAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("EnglishChoice.CheckAlign")));
			this.EnglishChoice.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("EnglishChoice.Dock")));
			this.EnglishChoice.Enabled = ((bool)(resources.GetObject("EnglishChoice.Enabled")));
			this.EnglishChoice.FlatStyle = ((System.Windows.Forms.FlatStyle)(resources.GetObject("EnglishChoice.FlatStyle")));
			this.EnglishChoice.Font = ((System.Drawing.Font)(resources.GetObject("EnglishChoice.Font")));
			this.EnglishChoice.Image = ((System.Drawing.Image)(resources.GetObject("EnglishChoice.Image")));
			this.EnglishChoice.ImageAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("EnglishChoice.ImageAlign")));
			this.EnglishChoice.ImageIndex = ((int)(resources.GetObject("EnglishChoice.ImageIndex")));
			this.EnglishChoice.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("EnglishChoice.ImeMode")));
			this.EnglishChoice.Location = ((System.Drawing.Point)(resources.GetObject("EnglishChoice.Location")));
			this.EnglishChoice.Name = "EnglishChoice";
			this.EnglishChoice.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("EnglishChoice.RightToLeft")));
			this.EnglishChoice.Size = ((System.Drawing.Size)(resources.GetObject("EnglishChoice.Size")));
			this.EnglishChoice.TabIndex = ((int)(resources.GetObject("EnglishChoice.TabIndex")));
			this.EnglishChoice.Text = resources.GetString("EnglishChoice.Text");
			this.EnglishChoice.TextAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("EnglishChoice.TextAlign")));
			this.EnglishChoice.Visible = ((bool)(resources.GetObject("EnglishChoice.Visible")));
			this.EnglishChoice.CheckedChanged += new System.EventHandler(this.EnglishChoice_CheckedChanged);
			// 
			// ChooseCultureButton
			// 
			this.ChooseCultureButton.AccessibleDescription = ((string)(resources.GetObject("ChooseCultureButton.AccessibleDescription")));
			this.ChooseCultureButton.AccessibleName = ((string)(resources.GetObject("ChooseCultureButton.AccessibleName")));
			this.ChooseCultureButton.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("ChooseCultureButton.Anchor")));
			this.ChooseCultureButton.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("ChooseCultureButton.BackgroundImage")));
			this.ChooseCultureButton.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("ChooseCultureButton.Dock")));
			this.ChooseCultureButton.Enabled = ((bool)(resources.GetObject("ChooseCultureButton.Enabled")));
			this.ChooseCultureButton.FlatStyle = ((System.Windows.Forms.FlatStyle)(resources.GetObject("ChooseCultureButton.FlatStyle")));
			this.ChooseCultureButton.Font = ((System.Drawing.Font)(resources.GetObject("ChooseCultureButton.Font")));
			this.ChooseCultureButton.Image = ((System.Drawing.Image)(resources.GetObject("ChooseCultureButton.Image")));
			this.ChooseCultureButton.ImageAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("ChooseCultureButton.ImageAlign")));
			this.ChooseCultureButton.ImageIndex = ((int)(resources.GetObject("ChooseCultureButton.ImageIndex")));
			this.ChooseCultureButton.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("ChooseCultureButton.ImeMode")));
			this.ChooseCultureButton.Location = ((System.Drawing.Point)(resources.GetObject("ChooseCultureButton.Location")));
			this.ChooseCultureButton.Name = "ChooseCultureButton";
			this.ChooseCultureButton.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("ChooseCultureButton.RightToLeft")));
			this.ChooseCultureButton.Size = ((System.Drawing.Size)(resources.GetObject("ChooseCultureButton.Size")));
			this.ChooseCultureButton.TabIndex = ((int)(resources.GetObject("ChooseCultureButton.TabIndex")));
			this.ChooseCultureButton.Text = resources.GetString("ChooseCultureButton.Text");
			this.ChooseCultureButton.TextAlign = ((System.Drawing.ContentAlignment)(resources.GetObject("ChooseCultureButton.TextAlign")));
			this.ChooseCultureButton.Visible = ((bool)(resources.GetObject("ChooseCultureButton.Visible")));
			this.ChooseCultureButton.Click += new System.EventHandler(this.ChooseCultureButton_Click);
			// 
			// CultureChooser
			// 
			this.AccessibleDescription = ((string)(resources.GetObject("$this.AccessibleDescription")));
			this.AccessibleName = ((string)(resources.GetObject("$this.AccessibleName")));
			this.Anchor = ((System.Windows.Forms.AnchorStyles)(resources.GetObject("$this.Anchor")));
			this.AutoScaleBaseSize = ((System.Drawing.Size)(resources.GetObject("$this.AutoScaleBaseSize")));
			this.AutoScroll = ((bool)(resources.GetObject("$this.AutoScroll")));
			this.AutoScrollMargin = ((System.Drawing.Size)(resources.GetObject("$this.AutoScrollMargin")));
			this.AutoScrollMinSize = ((System.Drawing.Size)(resources.GetObject("$this.AutoScrollMinSize")));
			this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
			this.ClientSize = ((System.Drawing.Size)(resources.GetObject("$this.ClientSize")));
			this.ControlBox = false;
			this.Controls.AddRange(new System.Windows.Forms.Control[] {
																		  this.ChooseCultureButton,
																		  this.CulturesGroupBox});
			this.Dock = ((System.Windows.Forms.DockStyle)(resources.GetObject("$this.Dock")));
			this.Enabled = ((bool)(resources.GetObject("$this.Enabled")));
			this.Font = ((System.Drawing.Font)(resources.GetObject("$this.Font")));
			this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.Fixed3D;
			this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
			this.ImeMode = ((System.Windows.Forms.ImeMode)(resources.GetObject("$this.ImeMode")));
			this.Location = ((System.Drawing.Point)(resources.GetObject("$this.Location")));
			this.MaximumSize = ((System.Drawing.Size)(resources.GetObject("$this.MaximumSize")));
			this.MinimumSize = ((System.Drawing.Size)(resources.GetObject("$this.MinimumSize")));
			this.Name = "CultureChooser";
			this.RightToLeft = ((System.Windows.Forms.RightToLeft)(resources.GetObject("$this.RightToLeft")));
			this.StartPosition = ((System.Windows.Forms.FormStartPosition)(resources.GetObject("$this.StartPosition")));
			this.Text = resources.GetString("$this.Text");
			this.Visible = ((bool)(resources.GetObject("$this.Visible")));
			this.CulturesGroupBox.ResumeLayout(false);
			this.ResumeLayout(false);

		}
		#endregion

		private void EnglishChoice_CheckedChanged(object sender, System.EventArgs e)
		{
			CultureChoiceString = EnglishCulture;
		}

		private void FrenchChoice_CheckedChanged(object sender, System.EventArgs e)
		{
			CultureChoiceString = FrenchCulture;
		}

		private void GermanChoice_CheckedChanged(object sender, System.EventArgs e)
		{
			CultureChoiceString = GermanCulture;
		}

		private void JapaneseChoice_CheckedChanged(object sender, System.EventArgs e)
		{
			CultureChoiceString = JapaneseCulture;
		}

		private void ChooseCultureButton_Click(object sender, System.EventArgs e)
		{
			if (CultureChoiceString == null)
				CultureChoiceString = EnglishCulture;

			this.Close();
		}

		public string UsersChoice
		{
			get
			{
				return CultureChoiceString;
			}
		}
	}
}
